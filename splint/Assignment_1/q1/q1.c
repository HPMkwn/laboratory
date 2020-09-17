
#include <stdio.h>

int main()
{
   int *ptr = NULL;
  //  if (!ptr)
  //  {
  //     printf("p is NULL, can't do further opertaion with p\n");
  //     exit(0);
  //  }
  //  else
      printf("%d", *ptr);
   return 0;
}

/* 
first method :
  put condition 
          if(!ptr) do...for null
          else do...for not null 

second method 
  put condition 
      if(p && *p) do...for not null
      else do...for null

  explanation :-

  => first p is performed that means if p is NULL then it won't do *p as logical AND && operator property is that if first operand is false then don't check/evaluate
  second operand, hence it prevents null pointer dereference.
**/

