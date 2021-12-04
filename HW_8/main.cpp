#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-8;

//realisation for multiplication
double f1(double x) {

    int cnt = 0;
    double s_1 = 1, s_1_1 = 1;
    long long fact = 1;
    double res = 1;

    while(fabs(s_1)>=EPS) {
        res*= (1+(s_1/fact)); cnt++;
        fact*=cnt;
        if (cnt==1) s_1_1*= x; else s_1_1=s_1_1*(cnt-1)*x/cnt; 
        s_1 += s_1_1;
    }

    return res;
}

int main() {

    return 0;
}