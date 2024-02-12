#include<stdio.h>
#include<math.h>
typedef struct {
    int n[100];
    double root[100];
}   squareroot;

int main()
{
    int i=0;
    squareroot squareroot1;
    
    for ( i = 0; i < 100; i++){
        squareroot1.n[i]  = i;
        squareroot1.root[i]= sqrt(i);
    }
    for ( i = 0; i < 100; i++){
        printf("Square root of  %d ",i,squareroot1.n[i]);
        printf("is : %.3lf\n",squareroot1.root[i]);
    }
    

    return 0;
}