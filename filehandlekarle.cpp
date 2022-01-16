#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("sample.txt",ios::in);
    char ch;
    while(!new_file.eof())
    {
        new_file>>ch;
        cout<<ch;
    }
    return 0;
}