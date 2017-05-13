#include <stdio.h>

int main(){
    int curr, prev; // Current and previous chars
    prev = EOF;
    while ((curr = getchar()) != EOF){
        if (curr == '\t'){
            putchar('//');
            putchar('t');
        }
        else if (curr == '\b'){
            putchar('//');
            putchar('b');
        }
        else putchar(curr);
    }

    return 0;
}
