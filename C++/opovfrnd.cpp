/*
    This program demonstrates operator overloading using friend functions in C++.
*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
class student {
    private:
        int id;
        string fname, lname;
    public:
        friend ostream &operator <<(ostream &, student &);
        friend istream &operator >>(istream &, student &);
};
ostream &operator <<(ostream &os, student &st)
{
    os<<"ID : "<<st.id<<'\n'<<"Name : "<<st.fname<<" "<<st.lname<<'\n';
    return os;
}
istream &operator >>(istream &is, student &st)
{
    is>>st.id>>st.fname>>st.lname;
    return is;
}
int main()
{
    student obj;
    cout<<"Enter student id and name:"<<endl;
    cin>>obj;
    cout<<obj;
    return 0;
}