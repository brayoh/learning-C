#include <stdio.h>


int main(){
    // Integer examples
    int num = 42;
    unsigned int unum = 123;
    long lnum = 123456789L;
    short snum = 321;
    
    printf("Integers:\n");
    printf("Decimal: %d\n", num);           // 42
    printf("Unsigned: %u\n", unum);         // 123
    printf("Long: %ld\n", lnum);            // 123456789
    printf("Short: %hd\n", snum);           // 321
    printf("Hexadecimal: %x %X\n", num, num); // 2a 2A
    printf("Octal: %o\n", num);             // 52
         // Floating point examples
    float f = 3.14159f;
    double d = 3.14159265359;
    
    printf("\nFloating points:\n");
    printf("Float: %f\n", f);               // 3.141590
    printf("Float (2 decimals): %.2f\n", f); // 3.14
    printf("Scientific: %e\n", d);           // 3.141593e+00
    printf("Scientific (uppercase): %E\n", d); // 3.141593E+00
    
    // Character and string examples
    char ch = 'A';
    char str[] = "Hello";
    int* ptr = &num;
    
    printf("\nCharacters and strings:\n");
    printf("Character: %c\n", ch);          // A
    printf("String: %s\n", str);            // Hello
    printf("Pointer: %p\n", (void*)ptr);    // Memory address
    
    // Width and alignment
    printf("\nFormatting:\n");
    printf("Right-aligned (width 5): %5d\n", num);    //    42
    printf("Left-aligned (width 5): %-5d\n", num);    // 42   
    printf("Zero-padded (width 5): %05d\n", num);     // 00042
    
    // Combined format specifiers
    printf("\nCombined examples:\n");
    printf("Hex with 0x: 0x%02X\n", num);            // 0x2A
    printf("Float in 8 chars, 2 decimals: %8.2f\n", f); // 3.14
                                                        //
    return 0;
}
