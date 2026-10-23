#include<stdio.h>
//输入一串数字字符，将其转换为一个十进制整数赋值给x
int main(){
    char str[100];
    scanf("%s",str);
    int i = 0,x = 0;
    while(str[i]!='\0'){
        x = x * 10 + str[i] - '0';
        i++;
    }
    printf("%d\n",x);
    return 0;
}