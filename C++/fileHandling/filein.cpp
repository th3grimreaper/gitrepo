/*
    This program demonstrate the use of fstream class for reading from a file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj;
    obj.open("newfile.txt", ios::in);
    char ch;
    obj.get(ch);
    while (!obj.eof())
    {
        cout<<ch;
        obj.get(ch);
    }
    obj.close();
    return 0;
}