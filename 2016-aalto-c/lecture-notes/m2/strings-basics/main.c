#include <stdio.h>
#include <stddef.h>

void encode(char *str)
{
    while (*str) {  /* Terminates when we come to \0 */
        printf("%c", *str+1);
        *str = *str + 1;  // modify the character behind pointer
        str++;  // move the pointer to next character
    }
}

int main()
{
    char message[] = "It is going to rain tomorrow";
    encode(message);
    printf("encoded: %s\n", message);
}