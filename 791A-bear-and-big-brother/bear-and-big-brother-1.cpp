#include <stdio.h>
 
int main() {
    int limak, bob;
    int year = 0;
 
    scanf("%d %d", &limak, &bob);
 
    while (limak <= bob) {
        limak = limak * 3;
        bob = bob * 2;
        year = year + 1;
    }
 
    printf("%d", year);
}
