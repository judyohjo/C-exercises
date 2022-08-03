#include <stdio.h>

int process_file(char* filename, char words[20][15]);

int main() {
    char filename[15] = "Words1.txt";
    char words[20][15];
    int count = process_file(filename, words);
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}

int process_file(char* filename, char words[20][15]){
    FILE *file = fopen(filename, "r");
    char name[15];
    int i=0;
    int j;
    while(fscanf(file, "%s", name) != EOF) {
        int b = sizeof(name);
        for(j=0; j<b; j++) {
            words[i][j] = name[j];
        }
        i += 1;
    }
    fclose(file);
    return i;
    
}
