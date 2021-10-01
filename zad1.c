//Zadatak je provjeriti je li unesen borj pozitivan ili je negativan.

#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Unesi broj: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d je pozitivan broj \n", num);
    else if (num < 0)
        printf("%d je negativan broj \n", num);
    else
        printf("broj je 0, tj nije ni pozitivan ni negativan");
}
