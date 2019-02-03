// A Code For Class.............
#include<iostream>

using namespace std;
class Area
{
    public:
        int height;
        int width;
        int cal()
        {
            cout<<"Area Is : "<<height*width;
        }
}obj;

main()
{
    obj.height=50;
    obj.width=10;
    obj.cal();
}
