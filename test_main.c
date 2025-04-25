// test_main.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = system("main.exe > output.txt");

    if (result != 0) {
        printf("qqwqe\n");
        return 1;
    }

    FILE *fp = fopen("output.txt", "r");
    if (!fp) {
        printf("asd\n");
        return 1;
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), fp);
    fclose(fp);

    if (strcmp(buffer, "Hello Jenkins!\n") == 0) {
        printf("sexy\n");
        return 0;
    } else {
        printf("sexy12 = %s\n", buffer);
        return 1;
    }
}
