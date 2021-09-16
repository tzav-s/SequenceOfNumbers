#include <stdio.h>
#include "simpio.h"

int main()

{
    int limit;
    float sum=0,i;

    printf("Dose orio: \n");
    limit=GetInteger();

    for(i=0.0;i<limit;i++)
    {
        sum+=1/i;
    }
    printf("To orio einai :%g",sum );

    system("PAUSE");
    return 0;

}
