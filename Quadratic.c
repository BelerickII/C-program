#include<stdio.h>
#include<math.h>
int main (){
    
    float a,b,c;
    float root1, root2;
    float discriminant, denominator;

    printf("Enter the values for a,b and c\n");
    scanf("%f%f%f", &a, &b, &c); 

    discriminant = sqrt(b * b - 4 * a * c);
    denominator = 2 * a; 

    root1 = (- b- discriminant) / denominator;
    root2 = (- b + discriminant) / denominator;

    printf("Root1 = %f\n", root1);
    printf("Root2 = %f", root2);
    return 0;
}