#include<iostream>
#include<math.h>

using namespace std;

double Area(double rad)
{
    cout<<"Enter The Radius of Circle Please: ";
    cin>>rad;
    return 3.1416*pow(rad,2);
}
float Area(float bas, float hei)
{
    cout<<"Enter The Base of Triangle Please: ";
    cin>>bas;
    cout<<"Enter The Height of Triangle Please: ";
    cin>>hei;
    return .5*bas*hei;
}
int Area(int len, int wid)
{
    cout<<"Enter The Length of Rectangle Please: ";
    cin>>len;
    cout<<"Enter The Width of Rectangle Please: ";
    cin>>wid;
    return len*wid;
}

int main()
{
    double radius, circle;
    float base, height, triangle;
    int length, width, rectangle;


    circle = Area( radius); // for Circle
    triangle = Area( base,  height); // for triangle
    rectangle = Area( length, width); // for rectangle

    cout<<"Area of Radius : " << circle<<endl;
    cout<<"Area of Triangle : " << triangle<<endl;
    cout<<"Area of Rectangle : " << rectangle<<endl;

    return 0;
}
