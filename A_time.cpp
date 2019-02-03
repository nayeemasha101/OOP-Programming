#include<iostream>

using namespace std;

class time
{
    int hours, minutes;
public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void puttime( void )
    {
        cout<<hours <<" Hours and ";
        cout<<minutes <<" Minutes and " <<endl;
    }
    void sum(time,time);
};

void time :: sum(time t1,time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time T1, T2, T3;
    int minutes1,hours1,minutes2,hours2;


    cout<<"Enter Value of Hours Please: ";
    cin>>hours1;
    cout<<"Enter Value of Minutes Please: ";
    cin>>minutes1;

    cout<<"Enter Value of Hours Please: ";
    cin>>hours2;
    cout<<"Enter Value of Minutes Please: ";
    cin>>minutes2;

    T1.gettime(hours1,minutes1);
    T2.gettime(hours2,minutes2);

    T3.sum(T1,T2);

    cout<<"T1 =  "; T1.puttime();
    cout<<"T2 =  "; T2.puttime();
    cout<<"T3 =  "; T3.puttime();

    return 0;
}
