#include <stdio.h>
#include<string.h>
int main()
{
    char string[] = "Hello there strange little planet\n";
    int x = 0;
    int limeit = 10;
    while( x<limeit )
    {
        switch( string[x] )
        {
            case ' ':
                putchar('\n');
                break;
            case '\n':
                putchar('\n');
                break;
            // default:
            //     putchar( string[x] );
        }
        x++;
    }

    return(0);
}