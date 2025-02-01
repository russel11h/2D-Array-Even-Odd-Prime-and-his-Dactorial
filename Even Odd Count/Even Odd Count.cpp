#include<iostream>
using namespace std;
int main(){

    int a[10];

    for (int i=0; i<10; i++)
    {
        cout<<"Enter your "<<i+1<<" value : ";
        cin>>a[i];
        cout<<endl;
    }

        int even = 0;
        int odd  =0;



        for (int i=0; i<10; i++)
    {


        if(a[i]%2==0)
        {
            even = even+1 ;
        }
        else
        {
            odd = odd+1 ;
        }


    }
        cout<<"Your even number is :"<<even<<endl;
        cout<<"Your odd number is :"<<odd<<endl;





return 0;
}


