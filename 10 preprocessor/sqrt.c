#include<stdio.h>
#include<math.h>
#define cubeRoot(number) cbrt(number)
int main()
{
    int n =  125;
    // double cubeRoot = cbrt(n);
    double x = cubeRoot(n);
    printf("%.lf",x);
    return 0;
}