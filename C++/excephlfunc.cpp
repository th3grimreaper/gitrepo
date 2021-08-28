//program to demonstrate exception handling with functions
#include<iostream>
using namespace std;
void err(int j)
{
    if (j<0)
        cout<<j<<" cannot be accepted as an argument in this context."<<'\n';
    if(j==0)
        cout<<j<<" returns 0 so enter any other number greater than 0."<<'\n';
}
void fun(int num)
{
    throw num;
}
int square(int x)
{
    return x*x;
}
int main()
{
    int i;
    cout<<"enter a number to know it's square: ";
    cin>>i;
    try {
        if (i<0)
            throw i;
        if (i==0)
            fun(i);
        cout<<"Square of "<<i<<" is : "<<square(i)<<'\n'; 
    }
    catch(int e) {
        err(e);
    }   
    return 0;
}

