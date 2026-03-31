#include <iostream>
using namespace std;

int main(){
    string data;

    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1.Square" << endl;
    cout << "2.Rectangle" <<endl;
    cout << "3.Triangle" << endl;
    cout << "4.Quit program" << endl;
    cout << "\n";
    cout << "Enter slection: ";
           cin >> data;
     if(data == "Quit program"){
        return 0;
     }
     else{
      while( data != "Square" || data !="Rectangle" || data != "Triangle" ){
        cout << " invalid input,please try again" << endl;
        cout << "\n";     
            cout << "Please select the area of the shape to calculate" << endl;
                cout << "1.Square" << endl;
                cout << "2.Rectangle" <<endl;
                cout << "3.Triangle" << endl;
                cout << "Quit program" << endl;
                cout << "\n";
                cout << "Enter slection: ";

                    if(data == "Quit program"){
                        return 0;
                    }
                 cin >> data;
         }
        }
    return 0;
}