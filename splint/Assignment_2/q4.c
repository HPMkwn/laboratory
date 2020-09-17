#include <stdio.h>
#include "string.h"
struct area
{
    int a;
    int b;
    int c;

};
int main(){
    struct area cube;
    cube.a=5;
    cube.b =6;
    print("last edge of cube is  : %d",cube.c);
   return 0;
}