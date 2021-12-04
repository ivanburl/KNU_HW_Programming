#include<bits/stdc++.h>
#include"Random.h"
#include"Fibb.h"
#include"Dice.h"
using namespace std;

int main() {
    Random rnd(1,100);
    Dice dc;
    Fibb fib;

    cout << "Test random " << endl;
    for (int i=1;i<=10;i++) cout << rnd.get_next() << ' ';
    cout << endl;

    cout << "Test fibb " << endl;
    for (int i=1;i<=20;i++) cout << fib.next() << ' ';
    cout << endl;

    cout << "Test dice " << endl;
    for (int i=1;i<=10;i++) {dc.next_roll(); cout << dc.current_number_on_dice() << ' ';}
    cout << endl;

    return 0;
}