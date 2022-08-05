#include <stdio.h>

int main(void)
{
    int n;
    char c;
    scanf("%d\n%c", &n, &c);
    
    printf("%c%d%c", c, n, c);
    
    return 0;
}
