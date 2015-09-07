#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

int main(int argc, char **argv)
{
    struct foo {
        int i;
        char c;
        double d;
        float f;
        char *s;
    };

    printf("i is at %lu\n", offsetof(struct foo, i));
    printf("c is at %lu\n", offsetof(struct foo, c));
    printf("d is at %lu\n", offsetof(struct foo, d));
    printf("f is at %lu\n", offsetof(struct foo, f));
    printf("s is at %lu\n", offsetof(struct foo, s));

    return 0;
}