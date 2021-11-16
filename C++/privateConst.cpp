/*
    This program demonstrates the use of private constructor in C++ with the help of
    static member variable and function for creating the object.
*/
#include<iostream>
#include<string>
using namespace std;
class A {
    private:
        string s1,s2;
        static int minCount;
        A()
        {
            s1="th3grimreaper";
            s2="qw@12";
        }
    public:
        static A* makeObj()
        {
            if(minCount==0) {
                A* p = new A;
                minCount++;
                return(p);
            } else {
                return(NULL);
            }
        }
        void showVal()
        {
            cout<<"username : "<<s1<<'\n';
            cout<<"password : "<<s2<<'\n';
        }
};
int A:: minCount=0;
int main()
{
    A* ptr;
    ptr=A::makeObj();
    if(ptr!=NULL)
        ptr->showVal();
    A* newptr=A::makeObj();
    if(newptr!=NULL) {
        newptr->showVal();
    } else {
        cerr<<"There cannot be more than one administrators."<<'\n';
    }
    return 0;
}
