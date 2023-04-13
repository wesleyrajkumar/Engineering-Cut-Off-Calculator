#include<stdio.h>

void main()

{

    char name[20];

    int m,p,h;

    float result;

    float a,b,c;

    printf("Enter your name: ");

    scanf("%s",name);

    printf("Enter your maths mark: ");

    scanf("%d",&m);

    printf("Enter your physics mark: ");

    scanf("%d",&p);

    printf("Enter your chemisty mark: ");

    scanf("%d",&h);

    a=m;

    b=p/2.0;

    c=h/2.0;

    result=(a+b+c);

    printf("%s's Engineering cutoff: %f/200",name,result);

    getch();

}