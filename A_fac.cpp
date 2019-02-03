#include<iostream>

using namespace std;
class fac
{

public:
    fac(int x);
};

fac::fac(int x)
{
    int i=1,fact=1;

    while(x!=NULL)
    {
        if(x==0)
            fact = 1;
        else
        {
            fact *= x;
        }

        x--;
    }
    cout << "The Factorial of " << x <<" is: " << fact;
}
int main()
{
    int nth,result;

    cout<<"Enter an integer Number Please: ";
    cin >> nth;
    fac obj(nth);

    return 0;
}
