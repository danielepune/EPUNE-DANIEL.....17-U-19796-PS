#include <stdio.h>
/* correction to the bugs in question one*/
int x=1;
/* its an error to use : when terminating a variable use ;*/

int main()
{
    if (x==1)/* an if condition is not terminated */
        printf("x is equal to 1\n");
        /*otherwise is not a C keyword instead use else */
    else
        printf("x does not equal \n1");

return 0;
}
