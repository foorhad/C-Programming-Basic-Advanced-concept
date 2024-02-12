//Program to find all of a Quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c, discriminant,x1,x2;
 printf("Enter the value of a: ");
 scanf("%lf",&a);   
 printf("Enter the value of b: ");
 scanf("%lf",&b); 
 printf("Enter the value of c: ");
 scanf("%f",&c);

 discriminant = b*b - 4*a*c;
 if (discriminant == 0){
    x1 = -b / (2*a); 
    printf("Roots are real and equal are = %.2lf",x1);
 }
 else if (discriminant > 0)
 {
   x1 = (-b + sqrt(discriminant)) / (2*a);
   x1 = (-b - sqrt(discriminant)) / (2*a);
   printf("The Roots are real and defferent are = %.2lf, %.2lf",x1,x2);
 }
 else{
    printf("The roots are imaginary");
 }
 

    return 0;
}