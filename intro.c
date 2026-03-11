// wap to add two numbers
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
void update(int postion, int newID)
{
    Node* temp = search(postion);
       Node* temp = head;
       for(int i=0; i<postion && temp != NULL; i++)
       {
           temp = temp -> next;
       }
    
    
    
    
}


//     if(temp == NULL)
//     {
//         <<"Patient not found";
//         return;
//     }
//     temp -> marks = newID;
// }



  






