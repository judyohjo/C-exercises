#include <stdio.h>

int main(void)
{
    int number_of_minutes;
    int hours, minutes = 0;
    scanf("%d", &number_of_minutes);
    
    hours = number_of_minutes/60;
    minutes = number_of_minutes%60;
    
    printf("%d minutes is equivalent to %d hours and %d minutes.", number_of_minutes, hours, minutes);
    
    
    return 0;
}
