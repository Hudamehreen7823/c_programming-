// C program to append the content of one file
// to the end of another file

#include <stdio.h>
#include <string.h>
int main()
{
    FILE* fp1;
    FILE* fp2;
    char ch;

    fp1 = fopen("hh.txt", "r+");
    if (fp1 == NULL) {
        printf("\nUnable to open file\n");
        return -1;
    }

    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL) {
        printf("\nUnable to open file\n");
        return -1;
    }

    printf("\nContent of file1: \n");
    ch = getc(fp1);
    while (ch != EOF) {
        printf("%c", ch);
        ch = getc(fp1);
    }

    printf("\nContent of file2: \n");
    ch = getc(fp2);
    while (ch != EOF) {
        printf("%c", ch);
        ch = getc(fp2);
    }

    fseek(fp2, 0, SEEK_SET);

    ch = getc(fp2);
    while (ch != EOF) {
        putc(ch, fp1);
        ch = getc(fp2);
    }
    fclose(fp2);

    fseek(fp1, 0, SEEK_SET);
    printf("\nModified content of file1:\n");
    ch = getc(fp1);
    while (ch != EOF) {
        printf("%c", ch);
        ch = getc(fp1);
    }

    fclose(fp1);

    printf("\n");

    return 0;
}
