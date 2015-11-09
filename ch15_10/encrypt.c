#ifndef CH15_10_ENCRYPT_H_
#include "encrypt.h"
#endif

//#define ALTERNATIVE

void encode(char* str, char* key, char* encoded)
{
    char* k = key;
    int keyLen = strlen(k);
    while (*str)
    {
        *encoded++ = *str++ ^ *k++;
#ifdef ALTERNATIVE
        if ((k - key) / sizeof(char) == keyLen)
            k = key;
#endif
    }
    *encoded = '\0';
}

void decode(char* str, char* key, char* decoded)
{
    encode(str, key, decoded);
}
