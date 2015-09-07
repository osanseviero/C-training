#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <string.h>

typedef struct string {
    int length;
    char *data;
} string;

typedef struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;


int main(int argc, char **argv)
{
	Book book;
	strcpy( book.title, "C Programming");
	printf("Title: %s\n",book.title);

    string s;
    return 0;
}