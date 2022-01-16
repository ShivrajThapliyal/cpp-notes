#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("sample.txt", ios::in);
    if (!new_file)
        cout << "No such file";
    else
    {
        char ch;
        new_file.seekg(5);
        while (!new_file.eof())
        {
            new_file >> ch;
            cout << ch;
        }
    }
    new_file.close();
    return 0;
}