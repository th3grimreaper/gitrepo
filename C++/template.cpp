/*
    A simple program to demonstrate the use of templates with classes and functions in C++.
*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
template <class T>
class numbers {
    private:
        T i, j;
    public:
        void getinfo(T i, T j) {
            this->i=i;
            this->j=j;
        } 
        void showinfo();   
};
template <class T>
void numbers<T>::showinfo()
{
    cout<<"num1: "<<i<<"\nnum2: "<<j<<endl;
}

//working with function templates
template <class T>      //can also have multiple templates like template <class T, class X, ...>
int multiple(T x, T y)
{
    return x*y;
}

int main()
{
    numbers<float> num;
    num.getinfo(12.00,36.12);
    num.showinfo();
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The product is: "<<multiple(a,b)<<endl;
    return 0;
}