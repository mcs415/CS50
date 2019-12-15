#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    int index;
    printf("Program Name: %d\n", argv[0]);
    for (index = 1; index < argc; index++)
    {
        printf("Arguement: #%d = %s\n", index, argv[index]);
    }
return 0;
}
