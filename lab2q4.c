#include <stdio.h>
#include <string.h>

void get_letters(char* letters, int number);

int main(){
    char letters[10];
    int number;
    memset(letters, '\0', 10);
    scanf("%d", &number);
    get_letters(letters, number);
    printf("%s\n", letters);
    return 0;
}

void get_letters(char* letters, int number) {
    int i;
    for(i=0; i < number; i++) {
        char one = '1';
        scanf(" %c", &one);
        letters[i] = one;
    }
}
