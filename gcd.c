#include<stdio.h>
int gcd(int a,int b);
int main(void){
    int a = 0,b = 0;
    printf("请输入两个整数，空格隔开");
    scanf("%d %d",&a,&b);
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