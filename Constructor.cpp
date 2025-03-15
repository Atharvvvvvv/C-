#include <iostream>
#include <string>

using namespace std;
class Account{
private:
    double balance;


public:
    Account(string accountid , string username){
        this->accountid = accountid;
        this->username = username;
        
    }
    void getinfo(){
        cout<<"This is  your account id :"<<accountid<<endl;
        cout<<"This is your username :"<<username<<endl;

    }

    string accountid;
    string username;
};
int main(){
    Account a1("abcd", "Atharv");
    a1.getinfo();

    return 0;
}