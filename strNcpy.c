#include <stdio.h>
/*I somehow hate to call the header file for using strings in C so i decide to work on each function on my own*/

#define len(a) sizeof(a) / sizeof((a)[0])

// this is exacly the strncpy in string.c header
char *strNcpy(char *reciver, const char *source, size_t n)
{
    size_t counter = 0;
    while (counter < n)
    {
        /* code */
        reciver[counter] = source[counter];
        ++counter;
    }

    reciver[counter] = '\0';

    return reciver;
}
int main(int argc, char const *argv[])
{
    char name[] = "hello world";
    char temp[len(name)];

    char *result = strNcpy(temp, name, 4);
    printf("result is %s\n", result);

    return 0;
}
