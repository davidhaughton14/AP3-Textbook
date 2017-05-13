#include <stdio.h>

int main(){
    int curr, prev; // Current and previous chars
    prev = EOF;
    while ((curr = getchar()) != EOF){
        if (!((prev == ' ') && (curr == ' '))) // If both AREN'T blanks print Current
            putchar(curr);
        prev = curr;
    }
}
