//Variant 3


#include<bits/stdc++.h>
using namespace std;

vector<char> f1(int number, int k) {
    vector<char> res;
    if (number<0 || k == 1 || k == 0) return res;

    do {
        if (number%k<=9) res.push_back('0'+number%k); else res.push_back('A'+number%k-9);
        number/=k;
    } while(number!=0);
    
    reverse(res.begin(),res.end());
    
    return res;
}

char f4() {
    char c='a'+48%32*16+(1/4==2/3);
    // c = 98 + 256 + (0==0) = 98 + 1 = 99 = 'b'
    return c;// return 'b'
}

double f5(double x) {
    double res = 
    fabs(log(pow(3,(x-2)/4.0)+pow(5,3.0/5.0))/log(44));

    return res;
}

bool f6(double x1,double y1,double x2, double y2, double x3, double y3) {
    double ax = x1 - x2, ay = y1 - y2;
    double bx = y1 - y2, by = y3 - y2;

    if (bx == by && bx == 0) return 1;
    if (bx == 0) return 0;

    return (ax/bx==ay/by);
}