#include<iostream>
#include<math.h>

using namespace std;

int Power(double maximum, int nth)
{
    cout<<"Enter Value Please: ";
    cin>>maximum;
    cout<<"Enter The " <<maximum <<"s Power Please: ";
    cin>>nth;

    return pow(maximum,nth);
}

int main()
{
    int nth;
    double maxi,result;

    result = Power(maxi,nth);

    cout<<"The Result is = "<<result;
    return 0;
}
