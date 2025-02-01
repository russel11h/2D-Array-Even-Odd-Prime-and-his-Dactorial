#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a <= 1) {
        cout << "Enter a value greater than 1";
        return 0;
    }
    //--------------------------------------------

    int p = 1; // Assume the number is prime (1 means prime, 0 means not prime)

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            {
            p = 0;
            break;
            }
    }
    //-------------------------------------------

    if (p == 1) {
        cout << a << " is a prime number.";
        cout<<endl;
        //------------------------------------------------

        int f=1;                 // onek value nite hoy tai long long ney
        for (int i=1; i<=a; i++)
        {
            f=f*i;

        }
        cout<<"Factorial of "<<a <<" is :"<<f;
        //------------------------------------------------------

    }
    else {
        cout << a << " is not a prime number.";
    }

    return 0;
}
