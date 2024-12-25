#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("bt01.txt", "a");
    if (fp == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    fclose(fp);

    printf("Da ghi them chuoi vao file bt01.txt.\n");

    return 0;
}

