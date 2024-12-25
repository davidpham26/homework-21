#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("bt01.txt", "r");
    if (fp == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    ch = fgetc(fp);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    } else {
        printf("File rong.\n");
    }

    fclose(fp);

    return 0;
}

