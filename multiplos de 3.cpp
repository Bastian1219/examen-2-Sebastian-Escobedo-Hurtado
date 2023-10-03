#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    for (n = 1; n <= 100; n++) {
        if (n % 3 == 0)
		{
            printf("%d: es multiplo de 3\n", n);
        }
        if (n % 3 != 0) 
		{
            printf("%d: no es multiplo de 3\n", n);
        }
    }
    return 0;
}
