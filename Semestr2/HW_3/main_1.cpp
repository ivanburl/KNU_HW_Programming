#include<bits/stdc++.h>
using namespace std;

//1. зробити функцію переколування ASCII до UNICODE для cp1251 або використаної системи.


//The C++ style code
int main() {
    string ascii = "Hello World!";
    wstring unicode(ascii.begin(), ascii.end());//He he he, why not???
}

//The C-style code
int main()
{
    char a[] = "Hello\n";
    wchar_t b[ sizeof(a) ];

    mbstowcs(b, a, sizeof(a));
    wprintf(b);
}