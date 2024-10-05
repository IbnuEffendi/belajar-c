#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int loop = 1;
    char ops[] = "n";

    while (loop == 1) {
        printf("Ingin stop program?(y/n)\n>> ");
        scanf("%c",&ops);
        if (strcmp(ops, "y") == 0) {
            loop = 0;
        }
        else {
            printf("Memulai ulang program...\n");
        }
    }

    return 0;
}