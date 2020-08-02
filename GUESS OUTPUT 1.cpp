#include<stdio.h>

int main()
{
	int _= 8;
	int __= 0==1 && _++;
	printf("%d %d",__,_);
	return 0;
}

/* Options: a) 0 9
	    b) 0 8
	    c) Compiler Error
	    d) No Output

   Output: 0 8
   Explanation: As 0==1 is false the && condition becomes false so we get 0 and as this condition is not true the increment of 8 will not happen so we get 8
*/
