#include <stdio.h>
#include <math.h>

void findroots(double a, double b, double c){
 double discriminant, root1 , root2 , realpart, imaginarypart;

 discriminant = b * b - 4 * a * c;

 if (discriminant < 0) {
    root1 = (b * b - sqrt(discriminant)) / (2 * a);
    root2 = (b * b + sqrt(discriminant)) / (2 *a);
    printf("roots are real and unique.\n");
    printf("root 1 = %.21f\n",root1);
    printf("root 2 = %.21f\n",root2);
 }else if(discriminant == 0){
    root1 = root2 = -b / (2 * a);
    priintf("roots are real and same.\n");
    printf("root 1 = root 2 = %.21f\n",root1);
 }else{
    realpart = -b / (2 * a);
    imaginarypart = sqrt(-discriminant) / (2 * a);
    printf("roots are complex and different.\n");
    printf("root 1 = %.21f + %.21fi\n",realpart,imaginarypart);
    printf("root 2 = %.21f - %.21fi\n",realpart,imaginarypart);
 }
}

int main(){
    double a,b,c;
    printf("enter coefficients a, b, c: ");
    scanf("%1f %1f %1f",&a, &b, &c);

    findroots(a,b,c);
    return 0;
}