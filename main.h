#include <stdio.h>

int _printf(const char *format, ...);

int main() {
    char character = 'A';
    char *string = "World";

    int num_characters = _printf("Hello, %s! The character is %c and this is a percent sign: %%\n", string, character);
    
    printf("Number of characters printed: %d\n", num_characters);

    return 0;
}

