#include "stdbool.h"
#include "mstring.h"


bool isPalindrome (mstring s)
{
	char *current =  s;
 	int i, len = (int) strlen (s);
  	for (i = 0; i <= (len+1) / 2; i++)
	    {
	    if (current[i] != s[len-i-1])
		return false;
	    }
  	return true;
}

bool callPal (void)
{
  return (isPalindrome ("bob"));
}
