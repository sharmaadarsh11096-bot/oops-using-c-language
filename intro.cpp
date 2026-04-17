
// 1.wap for two numbers

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, sum;
//     cin >> a;
//     cin >> b;
//     sum = a + b;
//     cout << sum;
//     return 0;
// }

// 2.wap for finding greater of two numbers

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a;u
//     cin >> b;
//     cin >> c;

//     if (a >= b && a >= c)
//         cout << a;
//     else if (b >= a && b >= c)
//         cout << b;
//     else
//         cout << c;

//     return 0;
// }

// 3.wap for swapping values of  two numbers using third one

// #include <iostream>
// using namespace std;
// int main() {
//     int x, y, temp;

//     cin >> x;
//     cin >> y;
//     temp = x;
//     x = y;
//     y = temp;
//     cout << x << " " << y;
//     return 0;
// }

// 4.wap for finding area of a rectangle

// #include <iostream>
// using namespace std;
// int main() {
//     int length, breadth, area;
//     cin >> length;
//     cin >> breadth;
//     area = length * breadth;
//     cout << area;
//     return 0;
// }

// 5.wap to print square of a number

// #include <iostream>
// using namespace std;
// int main() {
//     int n, square;
//     cin >> n;
//     square = n * n;
//     cout << square;
//     return 0;
// }

// 6.wap for finding area of a circle

// #include <iostream>
// using namespace std;
// int main() {
//     float radius, area;
//     float pi = 3.14;
//     cin >> radius;
//     area = pi * radius * radius;
//     cout << area;
//     return 0;
// }

// 7.wap to check for zero positive or negative

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     if (n > 0)
//         cout << "Positive";
//     else if (n < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";
//     return 0;
// }

// 8.wap to check for even or odd

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
//     return 0;
// }

// 9.wap to check wheather a given year is leap year or not.

// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cin >> year;
//     if (year % 4 == 0)
//         cout << "Leap Year";
//     else
//         cout << "Not Leap Year";
//     return 0;
// }

// 10.wap to find ASCII value of given character

// #include <iostream>
// using namespace std;
// int main() {
//     char ch;
//     cin >> ch;
//     cout << int(ch);
//     return 0;
// }

// 11.wap to display simple class and object

// #include <iostream>
// using namespace std;
// class Student {
// public:
//     int roll;
//     int marks;
// };
// int main() {
//     Student s;

//     s.roll = 1;
//     s.marks = 90;
//     cout << s.roll << endl;
//     cout << s.marks;
//     return 0;
// }

// 12.wap to add two numbers using class

// #include <iostream>
// using namespace std;
// class Add {
// public:
//     int a, b;

//     void sum() {
//         cout << a + b;
//     }
// };
// int main() {
//     Add obj;

//     obj.a = 3;
//     obj.b = 4;
//     obj.sum();
//     return 0;
// }


// 13.wap to print star right angled trinagle

//  #include <iostream>
// using namespace std;

// class RightTriangle {
//     int n;
// public:
//     RightTriangle(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= i; j++) {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     RightTriangle obj(rows);
//     obj.display();

//     return 0;
// }



// 14.wap to print pyramid of star

// #include <iostream>
// using namespace std;

// class Pyramid {
//     int n;
// public:
//     Pyramid(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = 1; i <= n; i++) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     Pyramid obj(rows);
//     obj.display();

//     return 0;
// }


 
// 15.wap to print star upside down pyramid

// #include <iostream>
// using namespace std;

// class InvertedPyramid {
//     int n;
// public:
//     InvertedPyramid(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = n; i >= 1; i--) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     InvertedPyramid obj(rows);
//     obj.display();

//     return 0;
// }


//  16.wap to display a numbers triangle

// #include <iostream>
// using namespace std;

// class Pattern {
// public:
//     void print(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << j;
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Pattern obj;
//     int n;

//     cout << "Enter rows: ";
//     cin >> n;

//     obj.print(n);
//     return 0;
// }


// 17.WAP to demonstrate default constructor 

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;

// public:
    
//     Student() {
//         roll = 0;
//         name = "Not Assigned";
       
//     }
//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };
// int main() {
//     Student s1;   
//     s1.display();
//     return 0;
// }


// 18.WAP to demonstrate parameterized constructor 

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;

// public:
   
//     Student(int r, string n) {
//         roll = r;
//         name = n;
       
//     }
//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };
// int main() {
//     Student s1(101, "Rizul");  
//     s1.display();
//     return 0;
// }



// 19. WAP to demonstrate copy constructor 
 
// #include <iostream>
// using namespace std;
// class Student {
// private:
//     int roll;
// public:
//     Student(int r) {
//         roll = r;
//     }

   
//     Student(const Student &s) {
//         roll = s.roll;
      
//     }

//     void display() {
//         cout << "Roll: " << roll << endl;
//     }
// };

// int main() {
//     Student s1(101);
//     Student s2 = s1;   
//     s2.display();
//     return 0;
// }


// 20.WAP to demonstrate move constructor 

// #include <iostream>
// using namespace std;
// class Number {
// private:
//     int *data;

// public:
    
//     Number(int value) {
//         data = new int(value);
        
//     }

    
//     Number(Number &&obj) {
//         data = obj.data;      
//         obj.data = nullptr;   
        
//     }

//     void display() {
//         if (data != nullptr)
//             cout << "Value: " << *data << endl;
//     }

// };

// int main() {
//     Number n1(50);
//     Number n2 = move(n1);  

//     n2.display();
//     return 0;
// }


// 21. WAP to demonstrate constructor overloading 

// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int breadth;

// public:
    
//     Rectangle() {
//         length = 0;
//         breadth = 0;
//     }

    
//     Rectangle(int side) {
//         length = side;
//         breadth = side;
        
//     }

    
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
       
//     }

//     void display() {
//         cout << "Length: " << length << endl;
//         cout << "Breadth: " << breadth << endl;
//         cout << "Area: " << length * breadth << endl;
//         cout << "------------------\n";
//     }
// };

// int main() {

//     Rectangle r1;     
//     r1.display();

//     Rectangle r2(5);       
//     r2.display();

//     Rectangle r3(4, 6);   
//     r3.display();

//     return 0;
// }



// 22.wap to print star diamond

// #include <iostream>
// using namespace std;

// class Diamond {
//     int n;
// public:
//     Diamond(int rows) {
//         n = rows;
//     }

//     void display() {
      
//         for(int i = 1; i <= n; i++) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }

       
//         for(int i = n-1; i >= 1; i--) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     Diamond obj(rows);
//     obj.display();

//     return 0;
// }


 
// 23.wap to print reverse a string


// #include <iostream>
// #include <string>
// using namespace std;

// class ReverseString {
//     string str;
// public:
//     ReverseString(string s) {
//         str = s;
//     }

//     void reverse() {
//         for(int i = str.length()-1; i >= 0; i--)
//             cout << str[i];
//     }
// };

// int main() {
//     string input;
//     cout << "Enter string: ";
//     cin >> input;

//     ReverseString obj(input);
//     obj.reverse();

//     return 0;
// }



 
// 24.wap to print check for pallindrome


// #include <iostream>
// using namespace std;

// class Palindrome {
//     int num;
// public:
//     Palindrome(int n) {
//         num = n;
//     }

//     void check() {
//         int temp = num, rev = 0, remainder;

//         while(temp != 0) {
//             remainder = temp % 10;
//             rev = rev * 10 + remainder;
//             temp /= 10;
//         }

//         if(rev == num)
//             cout << "Palindrome number";
//         else
//             cout << "Not a palindrome number";
//     }
// };

// 25.wap to print sum of digits of a numeber


// #include <iostream>
// using namespace std;

// class SUM {
//     int num;
// public:
//     SUM(int n) {
//         num = n;
//     }

//     void check() {
//         int temp = num, sum = 0, remainder;

//         while(temp != 0) {
//             remainder = temp % 10;
//             sum = sum + remainder;
//             temp /= 10;
//         }



// int main() {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     SUM obj(number);
//     obj.check();

//     return 0;
// }




// 26. WAP for printing factorial of a number

// #include <iostream>
// using namespace std;
// class Factorial {
// public:
//     long long calculate(int n) {
//         if (n < 0) {
//             cout << "Factorial not defined for negative numbers." << endl;
//             return -1;
//         }

//         long long fact = 1;
//         for (int i = 1; i <= n; i++) {
//             fact *= i;
//         }
//         return fact;
//     }
// };

// int main() {
//     Factorial obj;
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factorial = " << obj.calculate(num);

//     return 0;
// }


// 27 .WAP for printing fibonacci sequence
// #include <iostream>
// using namespace std;
// class Fibonacci {
// public:
//     void generate(int n) {
//         if (n <= 0) {
//             cout << "Invalid input.";
//             return;
//         }

//         long long a = 0, b = 1, next;

//         cout << "Fibonacci Series: ";

//         for (int i = 1; i <= n; i++) {
//             cout << a << " ";
//             next = a + b;
//             a = b;
//             b = next;
//         }
//     }
// };
// int main() {
//     Fibonacci obj;
//     int terms;

//     cout << "Enter number of terms: ";
//     cin >> terms;

//     obj.generate(terms);

//     return 0;
// }

// 43. WAP to check for armstrong number

// #include <iostream>
// using namespace std;

// class Armstrong {
// public:
//     void check(int n) {
//         int original = n;
//         int sum = 0;

//         while (n != 0) {
//             int digit = n % 10;
//             sum += digit * digit * digit;
//             n /= 10;
//         }

//         if (sum == original)
//             cout << "Armstrong Number";
//         else
//             cout << "Not Armstrong Number";
//     }
// };

// int main() {
//     Armstrong obj;
//     int num;

//     cout << "Enter number: ";
//     cin >> num;

//     obj.check(num);
//     return 0;
// }



// 44. WAP to check for strong number

// #include <iostream>
// using namespace std;

// class StrongNumber {
// public:
//     int factorial(int n) {
//         int fact = 1;
//         for (int i = 1; i <= n; i++)
//             fact *= i;
//         return fact;
//     }

//     void check(int n) {
//         int original = n;
//         int sum = 0;

//         while (n != 0) {
//             int digit = n % 10;
//             sum += factorial(digit);
//             n /= 10;
//         }

//         if (sum == original)
//             cout << "Strong Number";
//         else
//             cout << "Not Strong Number";
//     }
// };

// int main() {
//     StrongNumber obj;
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     obj.check(num);
//     return 0;
// }


// 45.WAP TO CALCULATE GCD 


// #include <iostream>
// using namespace std;

// class GCD {
// public:
//     int calculate(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }
// };

// int main() {
//     GCD obj;
//     int num1, num2;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "GCD = " << obj.calculate(num1, num2);
//     return 0;
// }



// 46. WAP to check for LCM

// #include <iostream>
// using namespace std;
// class LCM {
// public:
//     int gcd(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }

//     int calculate(int a, int b) {
//         return (a * b) / gcd(a, b);
//     }
// };

// int main() {
//     LCM obj;
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "LCM = " << obj.calculate(num1, num2);
//     return 0;
// }

// 47.WAP to reverse an array

// #include <iostream>
// using namespace std;

// class ArrayReverse {
// public:
//     void reverse(int arr[], int size) {
//         int start = 0;
//         int end = size - 1;

//         while (start < end) {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//     }

//     void display(int arr[], int size) {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//     }
// };
// int main() {
//     ArrayReverse obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     obj.reverse(arr, size);
//     cout << "Reversed Array: ";
//     obj.display(arr, size);
//     return 0;
// }


// 48.WAP to print pascals triangle

// #include <iostream>
// using namespace std;

// class PascalTriangle {
// public:
//     void generate(int n) {
//         for (int i = 0; i < n; i++) {
           
//             for (int space = 0; space < n - i - 1; space++) {
//                 cout << " ";
//             }
//             int number = 1;
//             for (int j = 0; j <= i; j++) {
//                 cout << number << " ";
//                 number = number * (i - j) / (j + 1);
//             }
//             cout << endl;
//         }
//     }
// };
// int main() {
//     PascalTriangle obj;
//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;
// #include <iostream>
// #include <list>
// using namespace std;

// class ItemManagement {,0
// private:
//     list<int> list1;
//     list<int> list2;
//     list<int> oddList;

// public:

//     void addItems() {
//         int n, x;

//         cout<<"Enter number of items in List 1: ";
//         cin>>n;
//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++){
//             cin>>x;
//             list1.push_back(x);
//         }

//         cout<<"Enter number of items in List 2: ";
//         cin>>n;
//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++){
//             cin>>x;
//             list2.push_back(x);
//         }
//     }

// 49. wap to find the sum of items of an array 
// #include <iostream>
// using namespace std;

// class ArraySum {
// public:
//     int calculate(int arr[], int size) {
//         int sum = 0;

//         for (int i = 0; i < size; i++) {
//             sum += arr[i];
//         }

//         return sum;
//     }
// };

// int main() {
//     ArraySum obj;

//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     cout << "Sum of elements = " << obj.calculate(arr, size);

//     return 0;
// }

// 50.WAP to counting even and odd numbers

// #include <iostream>
// using namespace std;

// class EvenOddCount {
// public:
//     void count(int arr[], int size) {
//         int even = 0, odd = 0;

//         for (int i = 0; i < size; i++) {
//             if (arr[i] % 2 == 0)
//                 even++;
//             else
//                 odd++;
//         }

//         cout << "Even count = " << even << endl;
//         cout << "Odd count = " << odd << endl;
//     }
// };

// int main() {
//     EvenOddCount obj;

//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     obj.count(arr, size);

//     return 0;
// }

// 51.WAP to find the largest item in an array

// #include <iostream>
// using namespace std;

// class LargestElement {
// public:
//     int findLargest(int arr[], int size) {

//         if (size <= 0) {
//             cout << "Array is empty." << endl;
//             return -1;
//         }

//         int largest = arr[0];

//         for (int i = 1; i < size; i++) {
//             if (arr[i] > largest) {
//                 largest = arr[i];
//             }
//         }

//         return largest;
//     }
// };

// int main() {
//     LargestElement obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int result = obj.findLargest(arr, size);

//     if (size > 0)
//         cout << "Largest element = " << result;
//     return 0;
// }




// 52WAP to find the smallest element in a array
// #include <iostream>
// using namespace std;

// class SmallestElement {
// public:
//     int findSmallest(int arr[], int size) {

//         if (size <= 0) {
//             cout << "Array is empty." << endl;
//             return -1;
//         }

//         int smallest = arr[0];

//         for (int i = 1; i < size; i++) {
//             if (arr[i] < smallest) {
//                 smallest = arr[i];
//             }
//         }

//         return smallest;
//     }
// };

// int main() {
//     SmallestElement obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int result = obj.findSmallest(arr, size);

//     if (size > 0)
//         cout << "Smallest element = " << result;

//     return 0;
// }


// 53.WAP to search for an given element in an array 


// #include <iostream>
// using namespace std;

// class SearchElement {
// public:
//     int searchitem(int arr[], int size, int key) {

//         for (int i = 0; i < size; i++) {
//             if (arr[i] == key) {
//                 return i;  
//             }
//         }
//         return -1;  
//     }
// };
// int main() {
//     SearchElement obj;
//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter element to search: ";
//     cin >> key;

//     int result = obj.searchitem(arr, size, key);

//     if (result != -1)
//         cout << "Element found at index " << result; 
//     else
//         cout << "Element not found.";
//     return 0;
// }

// 54. WAP to sort an given array 
// #include <iostream>
// using namespace std;

// class SortArray {
// public:


// void sort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

//     void display(int arr[], int size) {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     SortArray obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     obj.sort(arr, size);
//     cout << "Sorted Array: ";
//     obj.display(arr, size);
//     return 0;
// }
// 56. wap to create a linked list:
// #include<iostream>
// using namespace std;
// class node{
//      public:
//           int data;   
//          node* next;
//          node(int value){
//             // data = value;  
//             next = nullptr;
//          }
//          void display(node* head){
//           node* p = head;
//           while(p)     
//           {             
//             cout<<p->data<<"->";
//             p = p->next;  
//           }
//          }
// };
//   void display(node* head){
//           node* p = head;
//           while(p)     
//           {             
//             cout<<p->data<<"->";
//             p = p->next;  
//           }
//          }
// int main(){
//     node* n1,*n2,*n3;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     display(n1);
// }



// 57. wap to insert an element at the start of the linked list
// #include<iostream>
// using namespace std;
// class node{
//  public:
//            int data;
//            node*next;
//         node(int value){
//             data = value;
//             next = nullptr;
//         }
//         node* insertatstart(node* head,int value){
//             node*p = new node(value);
//             p->next = head;
//             head = p;
//             return head;
//         }
// };
//  int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = insertatstart(n1,90);
//     return 0;
//  }                      
// 58. wap to insert an element at the end of the linked lis
// #include<iostream>
// using namespace std;


// class node{
//  public:
//            int data;
//            node*next;
//         node(int value){
//             data = value;
//             next = nullptr;
//         }
//        node* insertatend(node* head,int value){
//         node * n = new node(value);
//         node* p = head;
//         while(p->next != nullptr){
//             p = p->next; }
//         p->next =n;         
//        }

//     };
//         int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->insertatend(n1,90);
//     return 0;
//  }   

//  59. wap to insert before an element in a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void insertBefore(int target, int value) {

//         if(head == NULL) {
//             cout<<"List is empty\n";
//             return;
//         }

//         if(head->data == target) {
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = head;
//             head = newNode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next != NULL && temp->next->data != target)
//             temp = temp->next;

//         if(temp->next == NULL) {
//             cout<<"Target not found\n";
//             return;
//         }

//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Original List:\n";
//     list.display();

//     list.insertBefore(30,25);
 
//     list.display();
// return 0;
// }
// 60.wap to delete an element at the start of a linked list
// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int value){
//     data = value;/
//     next = nullptr;
// }
// node* deleteatstart(node* head){
//         node* p = head;
//         head = head->next;
//         delete p;
//         return head;}
// };                               
//       int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->deleteatstart(n1);
//     return 0;}

// 61.wap to delete an element at the end of a linked list
// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int value){
//     data = value;
//     next = nullptr;
// }
// node* deleteatend(node* head){
//         node* p = head;
//         while(p->next->next != nullptr){
//             p = p->next; }
        
//         delete p->next;
//          p->next = nullptr;   
//         return head;}        
// };
//       int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->deleteatend(n1);
//     return 0;}


// 62.wap to delete before an element in a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void deleteBefore(int target) {

//         if(head == NULL || head->next == NULL) {
//             cout<<"Not enough nodes\n";
//             return;
//         }

//         if(head->next->data == target) {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next->next != NULL && temp->next->next->data != target)
//             temp = temp->next;

//         if(temp->next->next == NULL) {
//             cout<<"Target not found\n";
//             return;
//         }

//         Node* del = temp->next;
//         temp->next = del->next;
//         delete del;
//     }

//     void display() {
//         Node* temp = head;
//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Original List:\n";
//     list.display();

//     list.deleteBefore(30);

//     cout<<"After Deleting Before 30:\n";
//     list.display();
// return 0
// }



// 63.wap to search for an element in a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void search(int key) {

//         Node* temp = head;
//         int position = 1;

//         while(temp != NULL) {

//             if(temp->data == key) {
//                 cout<<"Element found at position "<<position<<endl;
//                 return;
//             }

//             temp = temp->next;
//             position++;
//         }

//         cout<<"Element not found"<<endl;
//     }

//     void display() {
//         Node* temp = head;

//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }

//         cout<<"NULL"<<endl;
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Linked List:"<<endl;
//     list.display();

//     int key;
//     cout<<"Enter element to search: ";
//     cin>>key;

//     list.search(key);

//     return 0;
// }

// 64.wap to reverse a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insert(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next)
//             temp = temp->next;
//         temp->next = newNode;
//     }

//     void reverse() {
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* next = NULL;

//         while (curr != NULL) {
//             next = curr->next;   // store next node
//             curr->next = prev;   // reverse link
//             prev = curr;         // move prev forward
//             curr = next;         // move curr forward
//         }

//         head = prev; // update head
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList l;
//     l.insert(10);
//     l.insert(20);
//     l.insert(30);
//     l.insert(40);

//     cout << "Original List:\n";
//     l.display();

//     l.reverse();

//     cout << "Reversed List:\n";
//     l.display();

//     return 0;
// // }
// 65. WAP to print Fibonacci series using recursion
// #include <iostream>
// using namespace std;

// class Fibonacci {
// public:
//     int fib(int n) {
//         if (n <= 1)
//             return n;
//         return fib(n - 1) + fib(n - 2);
//     }
// };

// int main() {
//     Fibonacci obj;
//     int n = 6;
//     cout << "Fibonacci: " << obj.fib(n);
// }
// 66. WAP to print sum of digits of a number using recursion
// #include <iostream>
// using namespace std;

// class SumDigits {
// public:
//     int sum(int n) {
//         if (n == 0)
//             return 0;
//         return (n % 10) + sum(n / 10);
//     }
// };

// int main() {
//     SumDigits obj;
//     cout << obj.sum(1234);
// }
// 67. WAP to reverse a number using recursion
// #include <iostream>
// using namespace std;

// class ReverseNum {
// public:
//     int reverse(int n, int rev = 0) {
//         if (n == 0)
//             return rev;
//         return reverse(n / 10, rev * 10 + n % 10);
//     }
// };

// int main() {
//     ReverseNum obj;
//     cout << obj.reverse(1234);
// }
// 68. WAP to calculate power of a number using recursion
// #include <iostream>
// using namespace std;

// class Power {
// public:
//     int power(int base, int exp) {
//         if (exp == 0)
//             return 1;
//         return base * power(base, exp - 1);
//     }
// };

// int main() {
//     Power obj;
//     cout << obj.power(2, 5);
// }
// 69. WAP to check for palindrome using recursion
// #include <iostream>
// using namespace std;

// class Palindrome {
// public:
//     bool check(string s, int start, int end) {
//         if (start >= end)
//             return true;
//         if (s[start] != s[end])
//             return false;
//         return check(s, start + 1, end - 1);
//     }
// };

// int main() {
//     Palindrome obj;
//     string str = "madam";
//     cout << (obj.check(str, 0, str.length() - 1) ? "Palindrome" : "Not Palindrome");
// }
// 70. WAP to perform binary search using recursion
// #include <iostream>
// using namespace std;

// class BinarySearch {
// public:
//     int search(int arr[], int left, int right, int key) {
//         if (left > right)
//             return -1;

//         int mid = (left + right) / 2;

//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] > key)
//             return search(arr, left, mid - 1, key);
//         else
//             return search(arr, mid + 1, right, key);
//     }
// };

// int main() {
//     BinarySearch obj;
//     int arr[] = {1, 3, 5, 7, 9};
//     cout << obj.search(arr, 0, 4, 7);
// }
// 71. WAP to calculate GCD using recursion
// #include <iostream>
// using namespace std;

// class GCD {
// public:
//     int gcd(int a, int b) {
//         if (b == 0)
//             return a;
//         return gcd(b, a % b);
//     }
// };

// int main() {
//     GCD obj;
//     cout << obj.gcd(48, 18);
// }
// 72. WAP to calculate LCM using recursion
// #include <iostream>
// using namespace std;

// class GCD {
// public:
//     int gcd(int a, int b) {
//         if (b == 0)
//             return a;
//         return gcd(b, a % b);
//     }
// };

// int main() {
//     GCD obj;
//     cout << obj.gcd(48, 18);
// }
// 73. WAP to count digits of a number using recursion
// #include <iostream>
// using namespace std;

// class CountDigits {
// public:
//     int count(int n) {
//         if (n == 0)
//             return 0;
//         return 1 + count(n / 10);
//     }
// };

// int main() {
//     CountDigits obj;
//     cout << obj.count(12345);
// }
// 74 . WAP to find the sum of items of an array using recursion
// #include <iostream>
// using namespace std;

// class ArraySum {
// public:
//     int sum(int arr[], int n) {
//         if (n == 0)
//             return 0;
//         return arr[n - 1] + sum(arr, n - 1);
//     }
// };

// int main() {
//     ArraySum obj;
//     int arr[] = {1, 2, 3, 4};
//     cout << obj.sum(arr, 4);
// }
// 75. WAP to print Tower of Hanoi using recursion
// #include <iostream>
// using namespace std;

// class Hanoi {
// public:
//     void solve(int n, char from, char to, char aux) {
//         if (n == 1) {
//             cout << "Move disk 1 from " << from << " to " << to << endl;
//             return;
//         }
//         solve(n - 1, from, aux, to);
//         cout << "Move disk " << n << " from " << from << " to " << to << endl;
//         solve(n - 1, aux, to, from);
//     }
// };

// int main() {
//     Hanoi obj;
//     obj.solve(3, 'A', 'C', 'B');
// }

// 76.Print concentric square number pattern for given n
// #include<iostream>
// using namespace std;

// class Pattern1 {
// public:
//     void solve(int n){
//         int size = 2*n-1;
//         for(int i=0;i<size;i++){
//             for(int j=0;j<size;j++){
//                 int minDist = min(min(i,j), min(size-i-1, size-j-1));
//                 cout<<n - minDist<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Pattern1 obj;
//     obj.solve(n);
// }
// 77.Problem: Print right-aligned staircase of #
// class Staircase {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=i;j++) cout<<"#";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Staircase obj;
//     obj.solve(n);
// }
// 78.Problem: Print left triangle star pattern.
// class LeftPyramid {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     LeftPyramid obj;
//     obj.solve(n);
// }
// 79.Inverted Pyramid
// class InvertedPyramid {
// public:
//     void solve(int n){
//         for(int i=n;i>=1;i--){
//             for(int j=1;j<=i;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     InvertedPyramid obj;
//     obj.solve(n);
// }
// 80. Full Pyramid
// class FullPyramid {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=2*i-1;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     FullPyramid obj;
//     obj.solve(n);
// }
// 81.. Inverted Full Pyramid
// class InvertedFull {
// public:
//     void solve(int n){
//         for(int i=n;i>=1;i--){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=2*i-1;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     InvertedFull obj;
//     obj.solve(n);
// }
// 82.Diamond Pattern
// class Diamond {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=2*i-1;j++) cout<<"*";
//             cout<<endl;
//         }
//         for(int i=n-1;i>=1;i--){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=2*i-1;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Diamond obj;
//     obj.solve(n);
// }
// 83.Hollow Square
// class HollowSquare {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 if(i==1||i==n||j==1||j==n) cout<<"*";
//                 else cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     HollowSquare obj;
//     obj.solve(n);
// }
// 84.Floyd’s Triangle
// class Floyd {
// public:
//     void solve(int n){
//         int num=1;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<num++<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Floyd obj;
//     obj.solve(n);
// }
// 85.0-1 Triangle
// class BinaryTriangle {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<(i+j)%2<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     BinaryTriangle obj;
//     obj.solve(n);
// }
// 86.Print pyramid with increasing numbers
// #include<iostream>
// using namespace std;

// class NumberPyramid {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=i;j++) cout<<j<<" ";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     NumberPyramid obj;
//     obj.solve(n);
// }
// 87.Palindrome Triangle
// #include<iostream>
// using namespace std;

// class PalindromeTriangle {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=i;j>=1;j--) cout<<j;
//             for(int j=2;j<=i;j++) cout<<j;
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     PalindromeTriangle obj;
//     obj.solve(n);
// }
// 88.Pascal’s Triangle
// #include<iostream>
// using namespace std;

// class Pascal {
// public:
//     int fact(int n){
//         if(n==0) return 1;
//         return n*fact(n-1);
//     }

//     void solve(int n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<=i;j++){
//                 cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Pascal obj;
//     obj.solve(n);
// }
// 89.Butterfly Pattern
// #include<iostream>
// using namespace std;

// class Butterfly {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++) cout<<"*";
//             for(int j=1;j<=2*(n-i);j++) cout<<" ";
//             for(int j=1;j<=i;j++) cout<<"*";
//             cout<<endl;
//         }
//         for(int i=n;i>=1;i--){
//             for(int j=1;j<=i;j++) cout<<"*";
//             for(int j=1;j<=2*(n-i);j++) cout<<" ";
//             for(int j=1;j<=i;j++) cout<<"*";
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     Butterfly obj;
//     obj.solve(n);
// }
// 90.Hollow Pyramid
// #include<iostream>
// using namespace std;

// class HollowPyramid {
// public:
//     void solve(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++) cout<<" ";
//             for(int j=1;j<=2*i-1;j++){
//                 if(j==1 || j==2*i-1 || i==n) cout<<"*";
//                 else cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n; cin>>n;
//     HollowPyramid obj;
//     obj.solve(n);
// }


// 91.Find two indices such that nums[i] + nums[j] = target

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// class TwoSum {
// public:
//     vector<int> solve(vector<int>& nums, int target){
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             int diff = target - nums[i];
//             if(mp.count(diff)) return {mp[diff], i};
//             mp[nums[i]] = i;
//         }
//         return {};
//     }
// };

// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target = 9;
//     TwoSum obj;
//     vector<int> ans = obj.solve(nums,target);
//     cout<<ans[0]<<" "<<ans[1];
// }
// 92.Remove duplicates in-place

// #include<iostream>
// #include<vector>
// using namespace std;

// class RemoveDuplicates {
// public:
//     int solve(vector<int>& nums){
//         int i=0;
//         for(int j=1;j<nums.size();j++){
//             if(nums[i]!=nums[j]) nums[++i]=nums[j];
//         }
//         return i+1;
//     }
// };

// int main(){
//     vector<int> nums={1,1,2};
//     RemoveDuplicates obj;
//     cout<<obj.solve(nums);
// }
// 93.Find max sum of subarray

// #include<iostream>
// #include<vector>
// using namespace std;

// class MaxSubarray {
// public:
//     int solve(vector<int>& nums){
//         int sum=0, maxi=INT_MIN;
//         for(int x:nums){
//             sum+=x;
//             maxi=max(maxi,sum);
//             if(sum<0) sum=0;
//         }
//         return maxi;
//     }
// };

// int main(){
//     vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
//     MaxSubarray obj;
//     cout<<obj.solve(nums);
// }
// 94. move zeroes
// #include<iostream>
// #include<vector>
// using namespace std;

// class MoveZeroes {
// public:
//     void solve(vector<int>& nums){
//         int j=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0) swap(nums[i],nums[j++]);
//         }
//     }
// };

// int main(){
//     vector<int> nums={0,1,0,3,12};
//     MoveZeroes obj;
//     obj.solve(nums);
//     for(int x:nums) cout<<x<<" ";
// }
// 95.rotate __ARRAY
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class RotateArray {
// public:
//     void solve(vector<int>& nums, int k){
//         int n=nums.size();
//         k%=n;
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
//     }
// };

// int main(){
//     vector<int> nums={1,2,3,4,5,6,7};
//     RotateArray obj;
//     obj.solve(nums,3);
//     for(int x:nums) cout<<x<<" ";
// }
// 96.best time to buy and sell stock
// #include<iostream>
// #include<vector>
// using namespace std;

// class Stock {
// public:
//     int solve(vector<int>& prices){
//         int minp=INT_MAX, profit=0;
//         for(int p:prices){
//             minp=min(minp,p);
//             profit=max(profit,p-minp);
//         }
//         return profit;
//     }
// };

// int main(){
//     vector<int> prices={7,1,5,3,6,4};
//     Stock obj;
//     cout<<obj.solve(prices);
// }
// 97.contains duplicate
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// class ContainsDuplicate {
// public:
//     bool solve(vector<int>& nums){
//         unordered_set<int> s(nums.begin(),nums.end());
//         return s.size()!=nums.size();
//     }
// };

// int main(){
//     vector<int> nums={1,2,3,1};
//     ContainsDuplicate obj;
//     cout<<obj.solve(nums);
// }
// 98.intersection of two arrays
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// class Intersection {
// public:
//     vector<int> solve(vector<int>& a, vector<int>& b){
//         unordered_set<int> s(a.begin(),a.end()), res;
//         for(int x:b) if(s.count(x)) res.insert(x);
//         return vector<int>(res.begin(),res.end());
//     }
// };

// int main(){
//     vector<int> a={1,2,2,1}, b={2,2};
//     Intersection obj;
//     vector<int> ans=obj.solve(a,b);
//     for(int x:ans) cout<<x<<" ";
// }
// 99.plus one
// #include<iostream>
// #include<vector>
// using namespace std;

// class PlusOne {
// public:
//     vector<int> solve(vector<int>& digits){
//         for(int i=digits.size()-1;i>=0;i--){
//             if(digits[i]<9){ digits[i]++; return digits; }
//             digits[i]=0;
//         }
//         digits.insert(digits.begin(),1);
//         return digits;
//     }
// };

// int main(){
//     vector<int> digits={9,9};
//     PlusOne obj;
//     vector<int> ans=obj.solve(digits);
//     for(int x:ans) cout<<x;
// }
// 100.merge sorted array
// #include<iostream>
// #include<vector>
// using namespace std;

// class MergeArray {
// public:
//     void solve(vector<int>& a,int m, vector<int>& b,int n){
//         int i=m-1,j=n-1,k=m+n-1;
//         while(j>=0){
//             if(i>=0 && a[i]>b[j]) a[k--]=a[i--];
//             else a[k--]=b[j--];
//         }
//     }
// };

// int main(){
//     vector<int> a={1,2,3,0,0,0}, b={2,5,6};
//     MergeArray obj;
//     obj.solve(a,3,b,3);
//     for(int x:a) cout<<x<<" ";
// }


    
