/*
 ============================================================================
 Name        : test.c
 Author      : shiwei
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct Link{
	int data1;
	struct Link *next;
} node,*link;
int main(void) {
    link nodelink=(link)malloc(sizeof(struct Link));
    nodelink->data1=1;
    printf("%d",nodelink->data1);
      char *buf = "hello";
//       buf[0] = 'a';
         printf("%c",buf[1]);
         const char * a="this is a test";
         char *b="d";
         a=b;
         printf("%s",*a);
//
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
//	printf("%d",5);
//	printf("%c",'a');
//	printf("hello world!");
//	printf("你好,世界");
	return EXIT_SUCCESS;
}
