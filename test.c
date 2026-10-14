#include<stdio.h>
int main(){
    int b ,c;
    int n;
    scanf("%d",&n);
    for(int a = 1;a * a<= n;a++){
        b = 1;
        c = 1;
        for(;b*b*10 <= a*a;b++){
            for(;c<= a;c++){
                if(a*a == b*b*10+c*c){
                    printf("%d=%d*%d=%d*%d*10+%d*%d",a*a,a,a,b,b,c,c);
                }
            }
        }
    }
    return 0;
}