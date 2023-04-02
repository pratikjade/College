#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank
{
        int account_no;
        char num[100], acctype[100];
        float bal;  
   public:
        bank(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                account_no=acc_no;
                strcpy(num, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   //depositing an amount
{
        int deamt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>deamt1;
        bal+=deamt1;
}
void bank::withdraw()  //withdrawing an amount
{
        int withdrawamt;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>withdrawamt;
        if(withdrawamt>bal){
                cout<<"\n Cannot Withdraw Amount";
        }
        bal-=withdrawamt;
}
void bank::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<account_no;
        cout<<"\n Name : "<<num;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
        
  
        bank b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); 
        
        return 0;
}