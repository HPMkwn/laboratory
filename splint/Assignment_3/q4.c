#include<stdio.h>
#define square(x) x*x

int main(){
    int i=1;
    int a = square(i++);
    printf("%d\n",a);
    return 0;
}