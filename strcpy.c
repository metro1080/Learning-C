#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *reciver, const char *source)
{
    size_t i = 0;
    while ((reciver[i] = source[i]) != '\0')
    {
        /* code */
        ++i;
    }
    return reciver;
}

int len(const char *string)
{
    size_t counter = 0;
    while (string[counter] != '\0')
    {
        ++counter;
        /* code */
    }
    return counter;
}
int main(int argc, char const *argv[])
{

    const char *name1 = "mohamad khashayar zade";
    char *save = malloc(len(name1) + 1);
    if (save == NULL)
    {
        /* code */
    }

    char *result = strcpy(save, name1);
    puts(result);
    free(save);
    return 0;
}
