#include<iostream>
using namespace std;
int main()
{
    float C,F;
    int a;
Nachalo:
cout<<"1.Celsium to Farenhait\n";
cout<<"2.Farenhait to Celsium\n";
cout<<"Please choose (1-2): ";
cin>>a;
if(a<1 || a>2)
{
cout<<"Еrror, no existing option.\n";
return 1;
}
if ( a==1 ) goto Celzii;
if ( a==2 ) goto Farenhait;
Celzii:
{
    cout<<"Enter the degrees Celsius: ";
    cin>>C;
    F=C*1.8+32;
    cout<<"Fahrenheit degrees = " <<F<<"\n";
    return 0;
}
Farenhait:
{
    cout<<"Enter the degrees Fahrenheit: ";
    cin>>F;
    C=(F-32)/1.8;
    cout<<"Celsius degrees = " <<C<<"\n";
    return 0;
}
return 0;
} 
