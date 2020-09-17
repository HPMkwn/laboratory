#include<stdio.h>
int a,b;  
int main()
{
    printf("Global");
    return a;//It gives warning because it may be undefined, so you can`t return when it undefined
}