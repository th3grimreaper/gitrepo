/*
    This program demonstrates the use of function pointers in C++.
*/
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class student {
    private:
        int roll;
        string name;
    public:
        friend void showdata(student);
        void getdata() {
            cin>>roll>>name;
        }
};
void showdata(student o) {
    cout<<"Roll no. : "<<o.roll<<"\nName : "<<o.name<<endl;
}
int main()
{
    student obj;
    void (*ptr) (student o);
    cout<<"Enter your roll number and first name: "<<endl;
    obj.getdata();
    ptr=showdata;
    cout<<"Following are the details you entered :"<<endl;
    ptr(obj);
    return 0;
}
