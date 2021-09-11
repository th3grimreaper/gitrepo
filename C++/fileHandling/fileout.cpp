/*
    This program demonstrate the use of fstream class for creating and writing into a file.
    There are various modes for opening a file:
    ->ios::in       {read from existing file}
    ->ios::out      {create new file and write into file}     
    ->ios::app      {append into file}
    ->ios::ate      {update file}
    ->ios::binary   {open file in binary mode}
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream obj;
    char ch[50];
    cout<<"Enter your first and last name : ";
    cin.get(ch, 50);
    obj.open("newfile.txt", ios::out);
    obj<<"Hello, "<<ch<<". Welcome to Void."<<'\n';
    obj.close();
    return 0;
}