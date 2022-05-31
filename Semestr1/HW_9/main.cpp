#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-8;

double sum(double x, int &count) {

    
    double a = -x, b = 1, sum = 0;

    while(EPS<fabs(a/b)) {
        sum += a/b; count++;
        a = a * x * x;
        b = b * (count+1);
    }
    
    return sum;
}


int main() {
    double x,last_x = 100;
    int count = 0;

    while(cin >> x) {
        
        if (last_x==x) break;

        count = 0;
        cout << sum(x,count) << ' ' << count << endl;

        last_x = x;
    }
}