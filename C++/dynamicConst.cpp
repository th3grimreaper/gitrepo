/*
    This program demonstrates the use of a dynamic constructor in C++.
*/
#include<iostream>
using namespace std;
class newClass 
{
    private:
        int x;
    public:
        newClass(int i)
        {
            int *ptr=new int;
            *ptr=i;
            x=*ptr;
        }
        void showClassVal()
        {
            cout<<"value of x is : "<<x<<'\n';
        }
};
int main()
{
    newClass obj(32);
    obj.showClassVal();
    return 0;
}
