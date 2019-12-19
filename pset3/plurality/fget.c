#include <stdio.h>
#define MAX 32

int main(void)
{
    char buf[MAX];
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);

    return 0;

}
