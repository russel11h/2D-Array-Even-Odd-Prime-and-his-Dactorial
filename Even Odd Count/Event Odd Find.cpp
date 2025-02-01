#include<iostream>
using namespace std;

void odd (int a, int b)

{
    int countEv=0;
    int countOd=0;
    for (int i=a;i<=b;i++)
    {

        if(i%2!=0)
        {
            cout<<"Your Odd Numbers Is:"<<i<<endl;
            countEv++;
        }
        else
        {
            cout<<"Your Even Numbers Is:"<<i<<endl;
            countOd++;
        }

    }
    cout<<"Your Total Even Number is:"<<countEv<<endl;
    cout<<"Your Total Odd Number is:"<<countOd<<endl;

}


int main(){

    int a;
    int b;

    cout<<"Your starting value is :";
    cin>>a;

    cout<<"Your ending value is :";
    cin>>b;

    odd(a,b);


return 0;
}



