#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

struct string {
    int length;
    char *data;
};


int main(int argc, char **argv)
{
    struct string s;
    s.length = 4;
    s.data = "This is data";
    puts(s.data);
    return 0;
}