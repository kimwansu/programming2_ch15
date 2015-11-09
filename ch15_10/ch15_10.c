#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#ifndef ENCRYPT_H
#include "encrypt.h"
#endif

//#define DEBUG

int main()
{
    char str[80] = "I am a boy";
    char key[20] = "12345678";
    char encoded[80];
    char decoded[80];
#ifdef DEBUG
    int i;
#endif

    encode(str, key, encoded);
    printf("%s�� %s", str, encoded);
    printf("�� ���ڵ���\n");

#ifdef DEBUG
    for (i = 0; i < strlen(str); i++)
    {
        printf("%3d ", str[i]);
    }
    printf("\n");
    for (i = 0; i < strlen(str); i++)
    {
        printf("%3d ", encoded[i]);
    }
    printf("\n");
#endif

    decode(encoded, key, decoded);
    printf("%s", encoded);
    printf("�� %s�� ���ڵ���\n", decoded);

    return 0;
}