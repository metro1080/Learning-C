#include <stdio.h>
#include <stdlib.h>
int len(const char *string)
{
    size_t counter = 0;
    while (string[counter] != '\0')
        ++counter;
    return counter;
}

char *strcpy(const char *source)
{
    size_t i = 0;
    char *reciver = malloc(len(source) + 1);
    if (reciver == NULL)
        return NULL;
    while ((reciver[i] = source[i]) != '\0')
    {
        /* code */
        ++i;
    }
    return reciver;
}

int main(int argc, char const *argv[])
{

    const char *name1 = "mohamad khashayar zade";
    char *save = strcpy(name1);
    puts(save);

    free(save);
    return 0;
}
