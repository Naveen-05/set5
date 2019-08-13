#include <stdio.h>

int main()
{
    int i, limit;
    printf("Print odd numbers till: ");
    scanf("%d", &limit);

    printf("All odd numbers from 1 to %d are: \n", limit);
    for(i=1; i<=limit; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
