#include <iostream>
using namespace std;

int main(){
    int data;
 //katu ndi zoba 
     cout << "Enter a digit between 5 and 10: ";
     cin >> data;
   
     //idwhibiilfbview
    while(data <= 5){

     cout << "sorry,you entered invalid number,please try again" << endl;
        
     cout << "Enter a digit between 5 and 10: ";
     cin >> data;
        
    }

   cout << "Your input value" << data << "has been accepted" << endl;

   return 0;
}