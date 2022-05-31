#include<bits/stdc++.h>
using namespace std;


//-1. Подивитися який сивол відповідає якому числу та навпаки.
//-2. Перевірити зміну і.
int main() {
    //using union is unsafe =)

    cout << "Letters" << endl;
    for (int i='A';i<='Z';i++) {
        cout << (char) i << ' ' << i << endl;
    }

    cout << "Numbers" << endl;
    for (int i='0';i<='9';i++) {
        cout << (char) i << ' ' << i << endl;
    }
}

