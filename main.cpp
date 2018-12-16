#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a=1,b,hasil,deret;

    cout<<"program menjumlah deret"<<endl;
    cout<<endl<<endl;

    cout<<"masukan jumlah deret :"; cin>>deret;
    cout<<endl;

    cout<<"deretnya : "<<a<<" , ";
    hasil =a;
    for(int k=0; k<deret; k++)
    {
        b=a+2; a=b;
        cout<<b<<" ,";
        hasil=hasil+b;
    }
    cout<<endl<<endl<<"jumlah deretnya " <<hasil<<endl;

    getch();
    return 0;



}
