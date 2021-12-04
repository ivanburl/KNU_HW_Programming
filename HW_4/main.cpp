
#include<bits/stdc++.h>
using namespace std;

//c*p^2 - (a*d)*p - b*d = 0;
int f3(double a, double b, double c, double d) {

    double ad = c;
    double bd = -a*d; 
    double cd = -b*d;

    double D = bd*bd - 4*ad*cd;
    if (D<0) return -1;

    double sol1 = (bd-sqrt(D))/(2*a);
    double sol2 = (bd+sqrt(D))/(2*a);

    if (sol1>0 && floor(sol1)==sol1) return sol1;
    if (sol2>0 && floor(sol2)==sol2) return sol2;
    return -1;
}


void f4() {
    char c1 = 38/3*(4%7)+(3/4==1/2);
    // c = 38/3*4 + 1 = 48 + 1 = 49 = '1'
    cout << c1 << endl;//passed

    int c2 = 53%36*(13/7)+(1/2<3/5);
    // c = 53%36*1+0 = 17
    cout << c2 << endl;//passed

    int c3 = (-19%7)*11/7+(2/3>=3/4);
    // c = -5*11/7+1 = -7 + 1 = -6
    cout << c3 << endl;//passed

    char c4 = '0' + 34%18*16+(1/2==3/4);
    // c = '0' + 16*16 + 1 = '0' + 256 + 1= '0' + 1 = '1'
    cout << c4 << endl;//passed

}

double f5(double x) {
    double res = 
    log(fabs(pow(x,3)+1)+pow(2,x))/log(11);
    return res;
}

double f61(double a, double b, double c) { // only for 2,3,4 anologically for others
    //ax+by+c=0

    if (a*b*c==0) return 0;
    
    double minus_y = (b-c)/a;
    double minux_x = (a-c)/b;

    double plus_y = -(b+c)/a;
    double plus_x = -(a+c)/b;

    if (plus_y>0 && plus_x<0) return 1;
    return 0;
}

int main() {
    cout << f3(1,5,1,5) << endl;
    cout << f3(10,0,2,5) << endl;
    cout << f3(1,4,5,64) << endl;

    f4();
}