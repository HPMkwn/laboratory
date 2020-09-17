#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}

/*Explanation :-

Buffer Overflow - When a program uses gets( ) which reads all available data into the array without checking bounds.
Bounds Checking - gets( ) does no bound checking on the buffer.

Here gets() does no bound checking on the buffer. This leads to the user gaining admin rights even if the password entered is wrong. For example ,
the user enters the following string as password pppppppppppppppppppp The output is going to be as follows: Wrong Password You are root 


Use fgets() which is a buffer safe function.
fgets(buffer, sizeof(buffer), stdin);

*/