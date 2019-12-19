#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 1)
        return 0;

    int i;
    int strsize = 0;
    for (i=1; i<argc; i++) {
        strsize += strlen(argv[i]);
        if (argc > i+1)
            strsize++;
    }


    char *cmdstring;
    cmdstring = malloc(strsize);
    cmdstring[0] = '\0';

    for (i=1; i<argc; i++) {
        strcat(cmdstring, argv[i]);
        if (argc > i+1)
            strcat(cmdstring, " ");
    }

    printf("the string in cmd line is: %s\n", cmdstring);

    return 0;
}
