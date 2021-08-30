/*
 This program demonstrates the use of constructors and destructors, constructor overloading
 and the use of copy constructor in C++.
*/

#include<iostream>
using namespace std;
class number
{
private:
    int a,b;
public:
    number(int x, int y) {
        a=x; b=y;
    }
    number(int x) {
        a=x;
    }
    number() {
        a=0; b=0;
    }
    number(number &x) {
        a=x.a;
        b=x.b;
    }
    ~number() {
        cout<<"Here comes the desctructor to destroy everything."<<'\n';
    }
    void showdata() {
        cout<<"Value of a and b are "<<a<<" & "<<b<<" respectively."<<'\n';
    }
};

int main()
{
    number o1(2,3), o2(4), o3, o4(o1);    
    cout<<"For o1, ";
    o1.showdata();
    cout<<"For o2, ";
    o2.showdata();
    cout<<"For o3, ";
    o3.showdata();
    cout<<"For o4, ";
    o4.showdata(); //o4 contains the same values as o1
    return 0;
}