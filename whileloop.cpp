#include <iostream>
using namespace std;
//lets do  this
int main(){
    int data; 
     cout << "Enter a digit between 5 and 10: ";
     cin >> data;
   
     
    while(data < 5 || data > 10){

     cout << "sorry,you entered invalid number,please try again" << endl;
        
     cout << "Enter a digit between 5 and 10: ";
     cin >> data;
        
    }

   cout << "Your input value" << data << "has been accepted" << endl;

   return 0;
}