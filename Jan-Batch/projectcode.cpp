#include <bits/stdc++.h>
using namespace std;
//hashmap
unordered_map<int, Account> users;
// vector<Account> users;
class Account{
    private:
    int accNo;
    double balance;
    string name;
    static int roi;

    public:
    Account(int accno, double balance, string name){
        this->accNo = accno;
        this->balance = balance;
        this->name = name;
    }

    void change roi(int roi){
        this.roi = roi;
    }

    void open(){
        //take details from user
    
        Account account = Account(1,0,"akshat");
        // users.insert({1,account});
        users[1] = account;

        cout<<"Opened"<<endl;
    }

    double enquire(){
        int no;
        cin>>no;

        if(users.find(no) != users.end()){
            return users[no].balance;
        }else{
            cout<<"User not exists"<<endl;
            return -1;
        }
    }

    void deposit(){
        int no;
        cin>>no;
        double amt;
        cin>>amt;
        if(users.find(no) != users.end()){
            users[no].balance+=amt;
        }else{
            cout<<"User not exists"<<endl;
            return -1;
        }
    }

    void withdrawal(){
        int no;
        cin>>no;
        double amt;
        cin>>amt;
        if(users.find(no) != users.end()){
            users[no].balance-=amt;
        }else{
            cout<<"User not exists"<<endl;
            return -1;
        }
    }
};
Account::roi = 4;
class Manager{
    private:
    int pass;
    public:
    void changeroi(){

        int newroi;
        cin>>newroi;
        for(auto account: users){

            Account x = account->second;
            x.changeroi(newroi);
        }
    }
    void close(){
        int nop;
        cin>>no;
         if(users.find(no) != users.end()){
            users.erase(no);
        }else{
            cout<<"User not exists"<<endl;
            return -1;
        }
    }
    void showAll(){
        //loop show all
    }
};
int main(){

    cout<<"1 for 2 for user"
}