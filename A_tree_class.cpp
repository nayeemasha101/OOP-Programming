#include<iostream>

using namespace std;

class ABC;
class PQR;
class XYZ
{

int data;
public:
    void setvalue(int value)
    {
        cout<<"Enter The First Number Please:  " ;
        cin>>value;
        data = value;
    }
    friend void add(XYZ,PQR,ABC);
};

class PQR
{
int data;
public:
    void setvalue(int value)
    {
        cout<<"Enter The First Number Please:  " ;
        cin>>value;
        data = value;
    }
    friend void add(XYZ,PQR,ABC);
};
class ABC
{

int data;
public:
    void setvalue(int value)
    {
        cout<<"Enter The First Number Please:  " ;
        cin>>value;
        data = value;
    }
    friend void add(XYZ,PQR,ABC);
};

void add(XYZ ob1, PQR ob2, ABC ob3)
{
    //cout << "Sum Data value of \"ABC\" \"PQR\" \"XYZ\" Object using Friend function = " << ob1.data + ob2.data + ob3.data;

    if( ob1.data > ob2.data)
    {
        if( ob1.data > ob3.data)
            cout <<endl << "The greater Number is " << ob1.data <<endl;
        else
            cout <<endl << "The greater Number is " << ob3.data <<endl;
    }
    else
    {
        if( ob2.data > ob3.data )
            cout <<endl << "The greater Number is " << ob2.data <<endl;
        else
            cout <<endl << "The greater Number is " << ob3.data <<endl;
    }

}

int main()
{
    XYZ X;
    PQR P;
    ABC A ;

    X.setvalue(10);
    P.setvalue(20);
    A.setvalue(30);

    add(X,P,A);
    return 0;
}
