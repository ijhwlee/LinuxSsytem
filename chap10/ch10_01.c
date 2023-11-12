#include <stdlib.h>
#include <stdio.h>

int main( ) {
    FILE *fp;

    fp = popen("wc -l", "w");
    if (fp == NULL) {
        fprintf(stderr, "popen failed\n");
        exit(1);
    }

    for (int a = 0; a < 100; a++)
        fprintf(fp, "test line\n");

    pclose(fp);
    return 0;
}

