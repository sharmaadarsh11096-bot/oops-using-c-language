 .............................................inheritance...................................................
// syntax of inheritance in c++ is as follows:
class ABC
{
    3;
    class xyz : public abc
    {
        3;
    };
    int main()
    {
        xyz obj;
        return 0;
    }
}
// 1-single inheritance- one child class inherits from one parent class and acquires properties of parent class
// 2-multiple inheritance- one child class inherits from more than one parent class and acquires properties of all parent classes
//3- multilevel inheritance- one child class inherits from another child class and acquires properties of both parent and child class
// 4-hierarchical inheritance- multiple child classes inherit from one parent class and acquire properties of parent class
// 5-hybrid inheritance- a combination of two or more types of inheritance and acquires properties of all parent classes.
2-multiple inheritance
class shoolini 
{

};
class foet : public shoolini
{

};
class ysaiods: public foet
{
int z,
};
int main()
{
    ysaiods obj;
    return 0;
}
3- hierarchical inheritance multiple child classes inherit from smae base class 
4- hybrid inheritance- a combination of two or more types of inheritance and acquires properties of all parent classes.example
class bank account
{
    double balance;
    public:
    bank account(double initial_balance)
    {
        balance = initial_balance;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient funds" << endl;
        }
    }
    void check_balance()
    {
        cout << "Current balance: " << balance << endl;
    }
};
class savings account : public bank account
{
    double interest_rate;
    public:
    savings account(double initial_balance, double rate) : bank account(initial_balance)
    {
        interest_rate = rate;
    }
    void calculate_interest()
    {
        double interest = balance * interest_rate;
        cout << "Interest earned: " << interest << endl;
    }
};
dimond problum in inheritance- it occurs when a class inherits from two classes that have a common base class.
 this can lead to ambiguity as the derived classmay not know which version of the base class to use. to resolve 
 this issue, c++ provides virtual inheritance, which allows the derived class to specify that it wants to use the
  same instance of the
 base class for both parent classes. this way, there is only one instance of the base class, and the derived class 
 can access it without ambiguity.example of dimond problem in inheritance
class D: public b, public c{};
int main()
{
    D obj;
    obj.x=100; // error: ambiguous access to member 'x'
    return 0;
}



















