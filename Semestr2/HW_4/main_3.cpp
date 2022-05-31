#include<bits/stdc++.h>
using namespace std;

int main()
{    
    char *s = "123";
    s[100] = '4';//due to optimisations my comiler just hides info
    cout << s << endl;
}