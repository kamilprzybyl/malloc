#include "../inc/malloc.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char    *str;
    char    *str2;
    char    *str3;
    char    *str4;
    char    *str5;
    char    *str6;
    char    *str7;
    char    *str8;
    char    *str9;

    str = malloc(sizeof(char) * 20);
    strcpy(str, "HELLO_WORLD_1");
    printf("%s at address %p\n", str, str);
    str2 = malloc(sizeof(char) * 500);
    strcpy(str2, "HELLO_WORLD_2");
    printf("%s at address %p\n", str2, str2);
    str3 = malloc(sizeof(char) * 35);
    strcpy(str3, "HELLO_WORLD_3");
    printf("%s at address %p\n", str3, str3);
    str4 = malloc(sizeof(char) * 3225);
    strcpy(str4, "HELLO_WORLD_4");
    printf("%s at address %p\n", str4, str4);
    str5 = malloc(sizeof(char) * 35);
    strcpy(str5, "HELLO_WORLD_5");
    printf("%s at address %p\n", str5, str5);
    str6 = malloc(sizeof(char) * 35);
    strcpy(str6, "HELLO_WORLD_6");
    printf("%s at address %p\n", str6, str6);
    // free(str6);
    str7 = malloc(sizeof(char) * 35);
    strcpy(str7, "HELLO_WORLD_7");
    printf("%s at address %p\n", str7, str7);
    str8 = malloc(sizeof(char) * 35);
    strcpy(str8, "HELLO_WORLD_8");
    printf("%s at address %p before realloc\n", str8, str8);
    // str8 = realloc(str8, 50);
    printf("%s at address %p after realloc\n", str8, str8);
    str9 = malloc(sizeof(char) * 35);
    strcpy(str9, "HELLO_WORLD_9");
    printf("%s at address %p\n", str9, str9);

    return (0);
}