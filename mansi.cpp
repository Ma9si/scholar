#include<iostream>
#include<string.h>
using namespace std;
void stackimplement()
{
   int ch, val; 
   cout<<"1) Push "<<endl;
   cout<<"2) Pop "<<endl;
   cout<<"3) Display this"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value in stack"<<endl;
            cin>>val;
             push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
    
}
