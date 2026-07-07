#include <stdio.h>
//File I/O in C
int main() {
    FILE *ptr;
    ptr = fopen("anam.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n", num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n", num);
    fclose(ptr);
    return 0;
}

//quick quiz 
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("anam2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist sorry!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
    }

    fclose(ptr);
    return 0;
}

//write a file in C

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("anam.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}

//fgetc and fputc

#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("anam.txt", "a");
    // char ch = fgetc(ptr);//used to read a single charcter from a file
    // printf("%c",ch);
    fputc('c',ptr);
    return 0;
}

//reading character by character in file
#include <stdio.h>

int main() {
    FILE *ptr;
    char ch;

    ptr = fopen("sample.txt", "r");

    if (ptr == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(ptr);

    return 0;
}

