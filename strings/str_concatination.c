#include <stdio.h>
#include <string.h>

int main() {
    char dest[40] = "Hello, ";
    char src[20];

    printf("Enter a name or word: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0';
    strcat(dest, src);
    printf("Result: %s\n", dest);
    return 0;
}