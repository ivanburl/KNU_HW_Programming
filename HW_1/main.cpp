
int f0=1;
int f1=1;
int t;

int f(){
    t =f0;
    f0=f1;
    f1=f0+t;
    return t;
}

int main(){
   register int t;//keyword register is depreceated from C++11 and do typically nothing
   t=f();
   t=f();
   t=f();
   t=f();
   {}
   return t;
}