#include <stdio.h>
#include <stdlib.h>



int main()
{
    int m, n, i;
    int *arr1, *arr2, *arr3;
    int **twoDArr;
    scanf("%d %d", &m, &n);

    arr1 = (int *) malloc( sizeof(int)*n );
    arr2 = (int *) malloc( sizeof(int)*n );
    arr3 = (int *) malloc( sizeof(int)*n );

    twoDArr = (int **) malloc ( 3*sizeof(int *) );
    for (i = 0; i < m; i++) {
        twoDArr[i] = (int *) malloc ( sizeof(int)*n );
    }

    /// Now we can use twoDArr as a traditional 2D array

    return 0;
}
