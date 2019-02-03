#include<iostream>
#include<conio.h>

using namespace std;

class Data_2;
class Data_1
{
    int value1;
public:
    void indata(int a)
    {
        cout<<"Enter One Value Please: ";
        cin>>a;
        value1 = a;
    }
    void display(void)
    {
        cout << "Value1  " << value1 << endl;
    }
    friend void exchange(Data_1 &, Data_2 &);
};
class Data_2
{
    int value2;
public:
    void indata(int a)
    {
        cout<<"Enter Another Value Please: ";
        cin>>a;
        value2 = a;
    }
    void display(void)
    {
        cout << "Value2  " << value2 << endl;
    }
    friend void exchange(Data_1 &, Data_2 &);
};

void exchange(Data_1 & x, Data_2 & y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

main()
{

    Data_1 C1;
    Data_2 C2;

    C1.indata(100);
    C2.indata(200);

    cout<< "Values Before exchange " << endl;
    C1.display();
    C2.display();
    exchange(C1, C2); // Swapping

    cout<< "Values After exchange " << endl;
    C1.display();
    C2.display();

    getch();
}
