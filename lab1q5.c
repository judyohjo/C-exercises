#include <stdio.h>
int main(void)
{
    int n,i,factorial;
    factorial=i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("The result is %d", factorial);
    return 0;
}
