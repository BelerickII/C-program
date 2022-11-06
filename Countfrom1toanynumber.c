#include <stdio.h>
int main() {
    int num, counter;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (counter = 1; counter<=num; counter++){
        printf("%d\n", counter);
    }
    return 0;
}