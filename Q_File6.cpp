#include<stdio>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream fpin, fpout;
    int len=0,i=0;
    char c[1000]="",read[1000]="";
    fpin.open("INPUT.text",ios::in);
    while(fpin)
    {
        fpin.get(read[i]);
        i++;
    }
    len=i=1;
    fpin.close();
    cout<<"data in Desired file are:\n";
    puts(read);
    fpout.open("APP.text",ios::app);
    for(i=0;i<len;i++)

    {
        fpout.put(read[i]);
    }
    cout<<"data has been append successfully:\n";
    fpout.close();

}

