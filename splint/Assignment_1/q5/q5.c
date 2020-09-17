#include <stdlib.h> 
#include <stdio.h>
extern /*@only@*/ int *glob;

/*@only@*/ int *

// void free(int* ptr);

f(/*@only@*/ int *x, int *y,

  int *z)

/*@globals glob;@*/

{

  int *m = (int *)

      malloc(sizeof(int));

  glob = y; //Memory leak

  // if(!m)
    *m = *x; //Use after free
  // free(x);
  // free(m);

  // free(glob);
  // free(m);
  return z; // Memory leak detected
}
