#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"what conversion would you like to perform?"<<endl;
    cout<<"If Binary to Decimal then press 1"<<endl<<"If Celsius to Fahrenheit then press 2"<<endl
        <<"If Km to Miles then press 3"<<endl
        <<"If Bytes to KB  then press 4"<<endl<<"If Decimal to Binary then press 5"<<endl;
    cin>>choice;
    switch(choice){
        case 1: 
        { int binary;
            cout<<"Enter a binary number: ";
            cin>>binary;
            int ans=0;
            int remainder;
            int power=1;
            while(binary>0){
             remainder=binary%10;
             ans+=power*remainder;
             power=power*2;
             binary=binary/10;   
            }
            cout<<"the deceimal is :"<<ans;
            break;
        }
        case 2:
        {
            double z=9/5;
            double cel;
            cout<<"Please enter clsius";
            cin>>cel;
            double far;
            far=(z*cel)+32;
            cout<<"Fahrenheit is :"<<far;
            break;
        }
        case 3:
        {
            double miles, km;
            cout<<"please enter Km";
            cin>>km;
            miles=km*0.621371;
            cout<<"Meter of KM is: "<<miles;
            break;
            
        }
        case 4:
        {
            int kb,byte;
            cout<<"please enter bytes";
            cin>>byte;
            kb=byte/1024;
            cout<<"the Kilo bytes is : "<<kb;
            break;
        }
        case 5:
        {
            int decimal;
            cout<<"Please enter a decimal number: ";
            cin>>decimal;
            int ans=0;
            int pow=1;
            int remainder;
            while(decimal>0){
               remainder=decimal%2;
               decimal=decimal/2;
               ans+=remainder*pow;
               pow=pow*10;
            }
            cout<<"the binary is :"<<ans;
            break;

        }
        default:
        cout<<"Invalid conversion case, please enter 1,2,3 or 4";
    }
    return 0;
}
