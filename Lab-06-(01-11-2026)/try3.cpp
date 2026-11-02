
#include <bits/stdc++.h>

using namespace std;

class Bank_Id{
private:

    double balance ;
    

public:
    static int total_user ;
    string acc_name;
    int acc_num ;
    string acc_type;
    
    
    void deposit(double add){
        
        this->balance = this->balance + add;
        
    }
    void withdraw (double need){
        
        if(need>this->balance){
            cout<<"Not enough balance";
        }
        this->balance = this->balance - need;
        
    }
    void loan(double need , int duration){
        
        int interest = need * duration * 0.08;
        
        cout<<"Total amount to be paid in "<< duration << "year = " << interest + need <<endl;
    
    }
    void FDR(double amount,int year){
        
        if(amount>this->balance){
            cout<<"NO money"<<endl;
        }
        else{
            int interest = amount * year * 0.07;
            this->balance = this->balance - amount;
            cout<<"Total amount after "<< year << "year = " << interest + amount <<endl;
            
        }
        
        
    }
    
    Bank_Id(){
        acc_name ="No name";
        
        acc_num = ++total_user;
        acc_type = "General";
        
    }
    Bank_Id(string name,int id = ++total_user,string type = "General"){
        acc_name = name ;
       ;
        acc_num = id;
        acc_type =type;
        
    }
    void check_balance(){
        
        cout<<"Current Balance "<<balance<<endl;
        
    }
    
    
    
};

int Bank_Id::total_user = 0;

int main()
{

    Bank_Id b1("Asem");
    
    cout<<b1.acc_name<<endl;
    cout<<b1.acc_num<<endl;
    cout<<b1.acc_type<<endl;
    
    b1.deposit(50000);
    b1.check_balance();
    b1.withdraw(10000);
    b1.check_balance();
    
    b1.loan(50000 , 4) ;
    b1.FDR(10000,5);
    
    return 0;
}
