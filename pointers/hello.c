#include <stdio.h>

short small = 100;    // Saves memory but might be slower
int normal = 100;     // Best performance for general use
long big = 100;       // Uses more memory, needed for large numbers

int main()
{
	printf("size of a short is %lu\\n", sizeof(small));
	printf("size of a int is %lu\\n", sizeof(normal));
	printf("size of a long is %lu\\n", sizeof(big));

    return 0;
}

