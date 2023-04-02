#include<iostream>
using namespace std;
void area(int h, int b)
{
    float area;
    area=(h*b)/2;
    cout<<"Area of Triangle ="<<area;
}
void area(int r)
{
    float pi=3.141592653,area;
    area=pi*(r*r);
    cout<<"Area of Circle ="<<area;

}
int main()
{
    float r,h,b,choose;
    cout<<"Choose 1 for Area of Triangle\nChoose 2 for Area of circle\n";
    cin>>choose;
    if (choose==1)
    {
        cout<<"Enter the Height & base\n";
        cin>>h>>b;
        area(h,b);
    }
    else if (choose==2)
    {
        cout<<"Enter the Radius\n";
        cin>>r; 
        area(r);
    }
    else
    {
        cout<<"Invalid Option\n";
    }
    
    
}
