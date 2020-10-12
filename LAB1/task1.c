#include<stdio.h>
struct complex
{
    float real;
    float img;
};
int main()
{
    struct complex c1,c2,sum;
    printf("Enter the first complex num\n");
    scanf("%f",&c1.real);
    scanf("%f",&c1.img);
    printf("Enter the second complex num\n");
    scanf("%f",&c2.real);
    scanf("%f",&c2.img);
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    printf("The result is:-\n");
    printf("%.2f+%.2fi",sum.real,sum.img);
    return 0;
}
