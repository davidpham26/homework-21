#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("bt01.txt", "w");
    if (fp == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    fclose(fp);

    printf("Da ghi chuoi vao file bt01.txt.\n");

    return 0;
}

