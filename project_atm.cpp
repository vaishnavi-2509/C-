#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

class ATM{
    private:
    long int Acc_no;
    string name;
    int pin;
    double amount;
    string phone_no;

    public:

    void setid(long int Acc_no_1,string name_1,int pin_1,double amount_1,string phone_no_1)
    {
        Acc_no=Acc_no_1;
        name=name_1;
        pin=pin_1;
        amount=amount_1;
        phone_no=phone_no_1;
    }

    long int getacc_no()
    {
        return Acc_no;
    }
    string getname()
    {
        return name;
    }
    int getpin()
    {
        return pin;
    }
    double getamount()
    {
        return amount;
    }
    string getphone_no()
    {
        return phone_no;
    }
    void check_balance(double amount_1,long int Acc_no_1,int pin_1)
    {
        long int acc;
        int pi;
        cout<<"Enter the account number: "<<endl;
        _getch();
        cin>>acc;
        if(acc==Acc_no_1)
        {
             cout<<"Enter the PIN: "<<endl;
             _getch();
        cin>>pi;
        if(pi==pin_1)
        {
            cout<<"Current Balance: "<<amount_1<<endl;
            _getch();
        }
        else
        {
             cout<<"PIN is incorrect!"<<endl;
             _getch();
        }
        }
        else
        {
             cout<<"Account number is incorrect!"<<endl;
             _getch();
        }
    }
    void cash_withdraw(double amount_1)
    {
        double withdraw;
        cout<<"Enter the amount to withdraw: "<<endl;
        cin>>withdraw;
        if(withdraw>0 && withdraw<amount_1)
        {
            amount_1=amount_1-withdraw;
            cout<<"Current Balance: "<<amount_1<<endl;
            _getch();
        }
        else
        {
            cout<<"Amount value is incorrect!"<<endl;
            _getch();
        }
    }
    void change_phone(string mob_prev, string mob_new)
    {
        if(mob_prev==phone_no)
        {
            phone_no=mob_new;
            cout<<"Updated the mobile number"<<endl;
            _getch();
        }
        else
        {
            cout<<"Incorrect mobile number!"<<endl;
            _getch();
        }
    }
    
};

int main()
{
  string mob_new,mob_prev; 
  ATM a;
  a.setid(1234567,"vaishnavi",1234,12000,"8090714010");
  int choice;
   system("cls");
   do
   {
    system("cls");
cout<<endl<<"*** WELCOME TO ATM ***"<<endl;
  cout<<"Select Options"<<endl<<"1. Check Balance"<<endl<<"2. Cash Withdraw"<<endl<<"3. Show User DEtails"<<endl<<"4. Update MObile no."<<endl<<"5. Exit"<<endl;
cin>>choice;
switch(choice)
{
    case 1: a.check_balance(12000,1234567,1234);
    _getch();
    break;

    case 2: a.cash_withdraw(12000);
    _getch();
    break;
    
    case 4:
     cout<<"Enter previous mobile number"<<endl;
     cin>>mob_prev;
    cout<<"Enter new mobile number"<<endl;
     cin>>mob_new;
    a.change_phone(mob_prev,mob_new);
     _getch();
    break;
    
    case 3:
    cout<<"Account Number:"<<a.getacc_no()<<endl;
    cout<<"Current Amount:"<<a.getamount()<<endl;
    cout<<"User name:"<<a.getname()<<endl;
    cout<<"Phone Number:"<<a.getphone_no()<<endl;
    cout<<"PIN Number:"<<a.getpin()<<endl;
    _getch();
    break;


    case 5: exit(0);
    _getch();
    break;

    default: 
    cout<<"Invalid input!!"<<endl;

}
   }while(1);
}