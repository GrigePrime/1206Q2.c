#include <stdio.h>
#include <string.h>

int main()
{
    char arr[9999];
    char *output;
    int n = 0,space;
    char sign;
    scanf("%s", arr);
    scanf("%d",&space);
    scanf("%c", &sign);

    output = strtok(arr, &sign);
    while (output != NULL)
    {
        printf("%s\n", output);
        output = strtok(NULL, &sign);
    }
    // printf("%c",sign);
    // printf("%s", arr);
}
