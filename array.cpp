#include <iostream>
using namespace std;

int main(){
    string element [8] = {"BI23","C234","A345","C15","B177","G3003","C235","B179"};
     char letter = 'B'; 

    for(int i = 0; i < 8; i++){
        if(element[i][0] == letter){
            cout << element[i] << endl;
        }
    }

    return 0;
    
}