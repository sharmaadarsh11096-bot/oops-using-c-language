//  // wap to add two numbers
// c lang code

// int main()
// {
//     int x,y,add=0; 
//     printf("enta the value of x and y :");
//     scanf("%d %d,"x, y);
//     add = x+y;
//     printf("the sum is %d, add"; 
//         // printf(print formated)
//     return 0;)
// }

// // c++
// #include<isostream>
// int main()
// {
//     int x,y, add=0;
//     count << "enter the value ");
//     (int >>x >>y;
//     add = x+y;
//     count <<"the sum:"<< add;
//     return 0;

// } 
// develop a mod  whese the input is given by user about students details which include student id, name markes of 5 subject.
// if parcentage >90 then 'o'
// parcentage >80 &<=90 'A'
// parcentage >70 &<=80 'B'
// parcentage >60 &<=70 'C'
// parcentage >50 &<=60 'D'
// parcentage >40 &<=50 'P'
// else fail.
// class student 
// {
//     int id, marks=0;
//     int marks [5];
//     char name [30];
//     public;
//     void input ();
//     void cal ();
//     void print ();
    
//     };
//       void student :: input ()
//       {
//         count <<"enter student's detail:";
//         count <<"in enter student's id:";
//         count >> student id;
//         count>>"enter student name:";
//         cin >> name;
//       }
// LOOP type-
// 1 entry control 
// 1.1 for loop for(initilization, condition, inc/dec)
// 1.2 while loop (condition)
// 2 exit control 
// 2.1 do while loop     

// void student :: cal ()
// {
//     for (int i=0; i<5; i++)
//     {t marks = marks [i];= t marks = t marks + marks[i];
//     }
//     pa= t_marks / 50
// }
// void student :: print (
//     { 
//         count <<"id"<="\t name"<<" \t tstu marks " << " \t
//       percentage
//     }
//     )

//---------------------------------- delete first wala ---------------------------
// void discharge first()
// { 
//     if(is Empety())
//     {
//         <<"Empty";
//         return;
//     }
//     Node* temp = head;
//     head = head -> next;
//     delete temp;
// }

//--------------------------------- delete lasa wala ----------------------------
// void discharge last()
// {
//     if(is Empety())
//     {
//         <<"Empty";
//         return;
//     }
//     if(head -> next == NULL)
//     {
//         delete head;
//         head = NULL;
//         return;
//     }
//     Node* temp = head;
//     while(temp -> next -> next != NULL)
//     {
//         temp = temp -> next;
//     }
//     delete temp -> next;
//     temp -> next = NULL;
// }

//--------------------------------- delet at position wala ----------------------------
// void discharge at position(int pos)
// {
//     if(is Empety())
//     {
//         <<"Empty";
//         return;
//     }
//     if(pos == 1)
//     {
//         discharge first();
//         return;
//     }
//     Node* temp = head;
//     for(int i=1; i<pos-1 && temp != NULL; i++)
//     {
//         temp = temp -> next;
//     }
//     if(temp == NULL || temp -> next == NULL)
//     {
//         <<"Invalid position";
//         return;
//     }
//     Node* toDelete = temp -> next;
//     temp -> next = temp -> next -> next;
//     delete toDelete;
// }

//---------------------------------- searching in linked list ----------------------------
// Node* search(int ID)
// {
//     Node* temp = head;
//     int pos = 0;
//     while(temp != NULL)
//     {
//         if(temp -> pashent ID  == ID)
//         {
//             return temp;
//         }
//         temp = temp -> next;
//         pos++;
//     }
//     return NULL; // not found
// }

//---------------------------------- update in linked list ----------------------------
// void update(int postion, int newID)
// {
//     Node* temp = search(postion);
//        Node* temp = head;
//        for(int i=0; i<postion && temp != NULL; i++)
//        {
//            temp = temp -> next;
//        }
    
    
    
    
// }


//     if(temp == NULL)
//     {
//         <<"Patient not found";
//         return;
//     }
//     temp -> marks = newID;
// // }
// .............................................inheritance................................................../.
// // syntax of inheritance in c++ is as follows:
// class ABC
// {
//     3;
//     class xyz : public abc
//     {
//         3;
//     };
//     int main()
//     {
//         xyz obj;
//         return 0;
//     }
// }
// // 1-single inheritance- one child class inherits from one parent class and acquires properties of parent class
// // 2-multiple inheritance- one child class inherits from more than one parent class and acquires properties of all parent classes
// //3- multilevel inheritance- one child class inherits from another child class and acquires properties of both parent and child class
// // 4-hierarchical inheritance- multiple child classes inherit from one parent class and acquire properties of parent class
// // 5-hybrid inheritance- a combination of two or more types of inheritance and acquires properties of all parent classes.
// 2-multiple inheritance
// class shoolini 
// {

// };
// class foet : public shoolini
// {

// };
// class ysaiods: public foet
// {
// int z,
// };
// int main()
// {
//     ysaiods obj;
//     return 0;
// }
// 3- hierarchical inheritance multiple child classes inherit from smae base class 
// 4- hybrid inheritance- a combination of two or more types of inheritance and acquires properties of all parent classes.example
// class bank account
// {
//     double balance;
//     public:
//     bank account(double initial_balance)
//     {
//         balance = initial_balance;
//     }
//     void deposit(double amount)
//     {
//         balance += amount;
//     }
//     void withdraw(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//         }
//         else
//         {
//             cout << "Insufficient funds" << endl;
//         }
//     }
//     void check_balance()
//     {
//         cout << "Current balance: " << balance << endl;
//     }
// };
// class savings account : public bank account
// {
//     double interest_rate;
//     public:
//     savings account(double initial_balance, double rate) : bank account(initial_balance)
//     {
//         interest_rate = rate;
//     }
//     void calculate_interest()
//     {
//         double interest = balance * interest_rate;
//         cout << "Interest earned: " << interest << endl;
//     }
// };
// dimond problum in inheritance- it occurs when a class inherits from two classes that have a common base class.
//  this can lead to ambiguity as the derived classmay not know which version of the base class to use. to resolve 
//  this issue, c++ provides virtual inheritance, which allows the derived class to specify that it wants to use the
//   same instance of the
//  base class for both parent classes. this way, there is only one instance of the base class, and the derived class 
//  can access it without ambiguity.example of dimond problem in inheritance
// class D: public b, public c{};
// int main()
// {
//     D obj;
//     obj.x=100; // error: ambiguous access to member 'x'
//     return 0;
// }
// .....................................................Function Overloading in C++ (Compile-time Polymorphism).......................................

// #include <iostream>
// using namespace std;

// class Print {
// public:
//     void show(int a) {
//         cout << "Integer: " << a << endl;
//     }

//     void show(double b) {
//         cout << "Double: " << b << endl;
//     }

//     void show(string c) {
//         cout << "String: " << c << endl;
//     }
// };

// int main() {
//     Print obj;
//     obj.show(10);
//     obj.show(5.5);
//     obj.show("Hello");

//     return 0;
// }
//     // .................................................... operator overloading.............................................    
// operator overloading in c++ is a feature that allows you to define custom behavior for operators when they are 
// used with user-defined types. this can make your code more intuitive and easier to read. for example, you can
//  overload the + operator to add two objects of a class together, or the << operator to print an object to the console.
//   operator overloading is achieved by defining a function with a specific name that corresponds to the operator you want to overload. 
//   the function takes the appropriate number of parameters and defines the behavior of the operator when it is used with objects of your class.

// new delete operator in c++ is used to allocate and deallocate memory for objects of a class. the new operator is used to create an object 
// on the heap, while the delete operator is used to free the memory allocated for that object when it is no longer needed. this allows for
//  dynamic memory management in c++, which can be useful for creating objects that have a variable size or for managing resources efficiently.
//   when you use the new operator, it returns a pointer to the allocated memory, which you can then use to access the object. 
//   when you are done with the object, you should use the delete operator to free the memory and prevent memory leaks.

// test operator ++ ()
// {
//     test t;
//     t.x = ++x
//     return t;
// }
// how to print x __value
// printf("%d", t.x);
// test t(50)
// t.display(); // this will print the value of x which is 50
// test1 = +++;t1.display(); // this will print the value of x which is 51
// ................................................................++ operator.........................................................
// ++ operator overlode by user define data type an object of test class.
// ->test t 11(50);
// create the object of test type in which data member x will have the value equal to 50.
// ->test t 12 = ++t11;
// this call ++ operator function on t11 which makes the value of x as 51.



// class account
// { int bal;
// public:
// account(int b)
// {
//     bal = b;
// }
// account operator ++(account obj)
// {
//     return bal + obj. bal;
// }};
// int main()
// {
//     account a(1000;
//     account b(2000);
//     account sum = a + b;
//     cout << sum.bal
//     return 0;
// }
 
 
//  #include <iostream>
// using namespace std;

// class Number {
// private:
//     int value;

// public:
//     Number(int v = 0) {
//         value = v;
//     }

//     // Pre-increment operator overloading
//     Number operator ++ () {
//         ++value;        // increment first
//         return *this;   // return updated object
//     }

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Number n1(5);

//     ++n1;   // calling overloaded operator

//     n1.display();

//     return 0;
// }
// #include <iostream>
// // using namespace std;

// // class Account {
// // private:
// //     int acc_no;
// //     float balance;

// // public:
// //     Account(int a = 0, float b = 0) {
// //         acc_no = a;
// //         balance = b;
// //     }

// //     Account operator++() {
// //         balance = balance + 1000; 
// //         return *this;
// //     }

// //     void display() {
// //         cout << "Account No: " << acc_no << endl;
// //         cout << "Balance: " << balance << endl;
// //     }
// // };

// // int main() {
// //     Account acc1(101, 5000);

// //     ++acc1;  

// //     acc1.display();

// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// class Wallet {
// private:
//     double balance;
//     vector<double> transactions;

// public:
//     Wallet(double b = 0) {
//         balance = b;
//     }

//     // + operator (add money OR merge wallets)
//     Wallet operator + (const Wallet &w) {
//         return Wallet(balance + w.balance);
//     }

//     // - operator (spend money)
//     Wallet operator - (double amount) {
//         return Wallet(balance - amount);
//     }

//     // == operator
//     bool operator == (const Wallet &w) {
//         return balance == w.balance;
//     }

//     // > operator
//     bool operator > (const Wallet &w) {
//         return balance > w.balance;
//     }

//     // < operator
//     bool operator < (const Wallet &w) {
//         return balance < w.balance;
//     }

//     // Assignment operator
//     Wallet& operator = (const Wallet &w) {
//         if(this != &w) {
//             balance = w.balance;
//             transactions = w.transactions;
//         }
//         return *this;
//     }

//     // Prefix ++ (deposit fixed amount)
//     Wallet operator ++ () {
//         balance += 100; // deposit ₹100
//         return *this;
//     }

//     // Postfix ++
//     Wallet operator ++ (int) {
//         Wallet temp = *this;
//         balance += 100;
//         return temp;
//     }

//     // [] operator (transaction access)
//     double operator [] (int index) {
//         return transactions[index];
//     }

//     // () operator (apply interest)
//     void operator () (double rate) {
//         balance += balance * rate / 100;
//     }

//     // Add transaction
//     void addTransaction(double amt) {
//         transactions.push_back(amt);
//     }

//     // << operator
//     friend ostream& operator << (ostream &out, const Wallet &w) {
//         out << "Balance: " << w.balance;
//         return out;
//     }

//     // >> operator
//     friend istream& operator >> (istream &in, Wallet &w) {
//         in >> w.balance;
//         return in;
//     }
// };

// int main() {
//     Wallet w1(1000), w2(500);

//     // Add money (merge wallets)
//     Wallet w3 = w1 + w2;

//     // Spend money
//     w3 = w3 - 200;

//     // Compare
//     if(w1 > w2)
//         cout << "w1 has more money\n";

//     // Deposit
//     ++w1;

//     // Assignment
//     w2 = w1;

//     // Interest
//     w1(10); // 10% interest

//     // Transactions
//     w1.addTransaction(200);
//     w1.addTransaction(-50);

//     cout << "Transaction[0]: " << w1[0] << endl;

//     // Output
//     cout << w1 << endl;
//     #include <iostream>
// using namespace std;

// class pattern{
//     public:

//     void inverted(int n){
//         for(int i=0;i<4;i++){
//             for(int j=4; j>=i; j--)
            
//                 cout<<"* ";
//               cout<<endl; 
//         }}};

//         int main(){
//             pattern obj;
//             obj.inverted(5);

//     }
    //  .........................................file handlingi n c++............................................................
    //The compuer program work with file a use to store data and information permanently .
    a file is a bunch of file stored under a specific name on a storege device.
    stream rafer to a seqence of bites every file linked to a stream and each stream is asoseated  with particuler class there are two types of __FILE-
    1- text __FILE__2- binary file 
   1. Text File- store the information in ASCII character. 
  - in the text filw each line of text terminated with a special character none as eol ( end of line) and delemiter charcter when the end of line character 
  is read or return the sertan internal translation take.
   2. Binary File- take the information into in the same format as it is held in memmory in binary file no delemeter are used and no traslation binary files are faster 
   and esyer  to read and write by defult a file in c++ a conseder as text file.
   1.input file stream class provide the          it in haret the function get line read and function spotive rendome accses ;
   fromm istream class define in side the header file iostream.h .
   2- output file stream class-
    provide output operation it in harit in function put write along with function spoting rondom access from ostream class define in side the header file iostream.h .
   3- file stream class- it is input and output class which provide simentensly input and output operation it in harit all the function from istream and osream class define in 
   side the header stream class.
   
