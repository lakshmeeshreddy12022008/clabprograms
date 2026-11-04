#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Enter the coefficient a: ");
    scanf("%d",&a);
    printf("Enter the coefficient b: ");
    scanf("%d",&b);
    printf("Enter the coefficient c: ");
    scanf("%d",&c);
    discriminant = (b*b)-(4*a*c);
    if(discriminant>0){
    printf("\nRoots are real and distinct \n");
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b+sqrt(discriminant))/(2*b);
    printf("Root1=%.2f/n",root1);
    printf("Root2=%.2f/n",root2);
    }
    else if(discriminant==0){
    printf("\nRoots are requal\n");
     root1 = -b/(2*a);
     printf("Root1=Root2=%.2f\n",root1);
     }else{
     printf("\nRoots are imaginary\n");
     float realpart = -b/(2*a);
     float imagpart = sqrt(-discriminant)/(2*a);
      printf("Root1=%.2f+%.2f/n",realpart,imagpart);
      printf("Root2=%.2f+%.2f/n",realpart,imagpart);
     }
    return 0;
    }

