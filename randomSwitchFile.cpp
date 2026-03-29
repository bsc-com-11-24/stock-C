#include <iostream>
using namespace std;

int main(){
    int daysUntilExpiration;
    daysUntilExpiration = rand() % 12;
    cout <<"daysUntilExpiration = " << daysUntilExpiration << endl;

    switch( daysUntilExpiration){
    case 10:
        cout << "Your subscription will expire soon. Renew now!"<< endl;

        break;
    

    case 5:
          cout << "Your subscription exipres in " <<  daysUntilExpiration << " days. Renew now and save 10%" << endl;
          break;
    case 4:
         cout << "Your subscription exipres in " <<  daysUntilExpiration << " days. Renew now and save 10%" << endl;
          break;
    case 3:
          cout << "Your subscription exipres in " <<  daysUntilExpiration << " days. Renew now and save 10%" << endl;
           break;
    case 2: 
         cout << "Your subscription exipres in " <<  daysUntilExpiration << " days. Renew now and save 10%" << endl;
          break;
    case 1:
         cout << "Your subscription expires within a day!" << endl;
         cout << "Renew now and save 20%"; 
         break;

    case 0:
       cout << "Your subscription has expired"<<endl;
        break;

    default:
        cout << "You have an active subscription"<<endl;
     
    }

    return 0;
}