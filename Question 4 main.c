#include <stdio.h>
#include <stdlib.h>

int array1[5]={1,2,3,4,5};
int array2[5]={5,7,8,9,3};
int array3[5];
int i;
void addarrays(array1,array2);
main()
{
    for (i = 0; i < 5; i++)
    printf( "\narray1 [%d] = %d \tarray2 [%d] = %d ", i,
            array1 [i], i, array2 [i] );

addarrays(array1,array2);

return 0;
}
void addarrays(array1,array2)
{
    for (i = 0; i < 5; i++)
    array3[i]=(array1 [i]+ array2[i]);

    printf("\n\nARRAY3 sums up 2 and 1");
    printf("\n.......................\n");

    for (i = 0; i < 5; i++)
    printf( "\narray3 arrays is = %d ", array3[i] );

return 0;
}

part two

#include <stdio.h>
#include <stdlib.h>

int array1[5]={1,2,3,4,5};
int array2[5]={5,7,8,9,3};
int array3[5];
int i;
void *addarrays(array1,array2);
main()
{
    for (i = 0; i < 5; i++)
    printf( "\narray1 [%d] = %d \tarray2 [%d] = %d ", i,
            array1 [i], i, array2 [i] );

int *array3=addarrays(array1,array2);

    for (i = 0; i < 5; i++)
    printf( "\narray3 arrays is = %d ", array3[i] );
return 0;
}
void *addarrays(array1,array2)
{
    int *addarrays(array1,array2)
    array3[i]=(array1 [i]+ array2[i])

return 0;
}
