// Section 13
// Implementing member methods 1 
#include <iostream>
#include <string>

using namespace std;

class AccountSection {
    
private:
    // attributes
    string category_name;
    double real_amount;
    double prev_amount;
    bool overload_status;
    
public:

    // methods
    // declared inline
    void SetRealAmount (double purchase) { real_amount = purchase; }
    void SetPrevAmount (double purchase) { prev_amount = purchase; }
    double GetRealAmount () { return real_amount; }
    double GetPrevAmount () { return prev_amount; }
    
    // methods will be declared outside the class declaration
    void SetCategoryName(string n);
    string GetCategoryName();
    
    bool Deposit(double amount);
    bool Withdraw(double amount);
};

void AccountSection::SetCategoryName(string n) {
    category_name = n;
}

string AccountSection::GetCategoryName() {
    return name;
}

bool AccountSection::Deposit(double amount) {
    if (amount)
    {
        real_amount += amount;
        return true;
    }
    else
    {
        return false;
    }
}

bool AccountSection::Withdraw(double amount) {
    if (real_amount-amount >= 0) 
    {
        real_amount -= amount;
        return true;
    } 
    else 
    {
        return false;
    }
}


int main() {

    AccountSection food;
    food.SetCategoryName("Alimentacao");
    food.SetRealAmount(450.00);
    
    
    /*
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(1000.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    */
    
    return 0;
}

