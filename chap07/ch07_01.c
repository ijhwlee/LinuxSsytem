#include <stdlib.h>
#include <stdio.h>

int main() {
    int ret;
    ret = system("ps -ef | grep hwlee > hwlee.txt");
    printf("Return Value : %d\n", ret);
    return 0;
}

