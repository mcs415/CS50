#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    //store cmdline arguements in argv[i]
    int index;
    char[32];
    printf("Program Name: %d\n", argv[0]);
    for (index = 1; index < argc; index++)
    {
        printf("Arguement: #%d = %s\n", index, argv[index]);
    }
return 0;
}
