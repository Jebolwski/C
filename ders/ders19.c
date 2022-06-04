#include <stdio.h>

int main()
{
    int math;
    int physics;
    int chemistry;
    printf("--------------------\n");
    printf("Write a C program to find the eligibility of admission for a professional course based on the following criteria\n");
    printf("Math : ");
    scanf("%d", &math);
    printf("Physics : ");
    scanf("%d", &physics);
    printf("Chemistry : ");
    scanf("%d", &chemistry);

    if (math >= 65 && physics >= 55 && chemistry >= 50 && math + physics + chemistry > 190 && math + physics >= 140)
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }
    printf("--------------------\n");
}