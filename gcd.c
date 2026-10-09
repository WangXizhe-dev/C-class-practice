#include<stdio.h>
int gcd(int a,int b);
int main(void){
    int a = 48,b = 18;
    printf("%d\n",gcd(a,b));
    return 0;
}
int gcd(int a,int b){
    int r= 0;
    while(a%b != 0){
        r = a%b;
        a = b;
        b = r;

    }
    return b;
}