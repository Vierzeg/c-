#include <iostream>
#include <string>
using namespace std;
void addStr(string*& str)
{
    int size = 0;
    string* buf = new string[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = str[i];
    }
    delete[]str;
    str = buf;
    size++;
}

void delStr(string* str)
{
    int size = 0;
    string* buf = new string[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = str[i];
    }
    delete[]str;
    str = buf;
}

int main()
{
    string* array = new string[0];
}
