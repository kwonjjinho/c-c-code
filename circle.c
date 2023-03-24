#include <stdio.h>

# define PI 3.141592

int main(void)
{
    double rad;

    printf("반지름 입력:");
    scanf("%lf", &rad);

    printf("원의 넓이는 %lf \n",rad*rad*PI);

    return 0;
}