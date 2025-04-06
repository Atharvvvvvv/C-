#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string accountid;
    string username;
    double balance;

public:
    // Constructor with initializer list
    Account(const string& accountid, const string& username) : accountid(accountid), username(username), balance(0.0) {
        if (accountid.empty() || username.empty()) {
            throw invalid_argument("Account ID and username cannot be empty.");
        }
    }

    // Getter methods
    string getAccountId() const {
        return accountid;
    }

    string getUsername() const {
        return username;
    }

    double getBalance() const {
        return balance;
    }

    void getinfo() const {
        cout << "This is your account ID: " << accountid << endl;
        cout << "This is your username: " << username << endl;
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    try {
        Account a1("abcd", "Atharv");
        a1.getinfo();
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}