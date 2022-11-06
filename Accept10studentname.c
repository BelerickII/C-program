#include <stdio.h>

int main() {
    char student[1000];
    int counter;

    for (counter = 1; counter<=10; counter++) {
        printf("What is your name?: ");
        fgets(student, 1000, stdin);
    }
    return 0;
}