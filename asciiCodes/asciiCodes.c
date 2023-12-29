#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ascii_section(char* section);

int main() {

    print_ascii_section("lowers");

    return(0);
}

// function to print a section of the ascii code system
// print as decimal, octal, hexadecimal, char, and binary
// sections: digits, caps, lowers
void print_ascii_section(char* section) {
    
    if (strcmp(section, "digits") == 0) {
        printf("ASCII digits:\n");
        for (int i = 48; i <= 57; i++) {
            printf("char: %c, int: %i, octal: %o, hex: %x \n", i, i, i, i);
        }
    }
    else if (strcmp(section, "caps") == 0) {
        printf("ASCII caps:\n");
        for (int i = 65; i <= 90; i++) {
            printf("char: %c, int: %i, octal: %o, hex: %x \n", i, i, i, i);
        }
    }
    else if (strcmp(section, "lowers") == 0) {
        printf("ASCII lowers:\n");
        for (int i = 97; i <= 122; i++) {
            printf("char: %c, int: %i, octal: %o, hex: %x \n", i, i, i, i);
        }
    }
    else {
        printf("print_ascii_section() failed: invalid section received as argument\n");
    }

}