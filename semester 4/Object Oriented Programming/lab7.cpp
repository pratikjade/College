#include <iostream>
#include<string>
using namespace std;
class media
{
    protected:
    string title;
    float price;
   
    public:
    media()
    {
        title=" ";
        price=0.0;
        
        }
        media(string t,float P)
        {
            title=t;
            price=P;
            
            }
    };
    class book : public media
    {
        int P_count;
        public:
        book()
        {
            P_count=0;
            
        }
        book(string t,float P,int pc):media(t,P)
        {
            
            P_count=pc;
            
        }
     
     void display()
     {
        
          cout<<"title :"<<title<<endl;
                cout<<"Price: "<<price<<endl;
       
          cout<<"Pagecount :"<<P_count<<endl;
         
        }
        
    };


 class CD : public media
    {
        float time;
        public:
        CD()
        {
            time=0.0;
            
        }
        CD(string t,float p,float tim):media(t,p)
        {
            
            time=tim;
            
        }
     
     void display()
     {
         cout<<"title :"<<title<<endl;
                cout<<"Price: "<<price<<endl;
       
          cout<<"time in minutes :"<<time<<endl;
         
        }
        
    };
int main()
{
    cout<<endl<<"Book information"<<endl;
    book Bo("programming in java",1000,500);
    Bo.display();
    cout<<endl<<"video information"<<endl;
    CD cd("programming in c++",100,125);
    cd.display();
    return 0;
        }