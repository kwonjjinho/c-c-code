#include <stdio.h>

int main(void)
{
    double w, h, area, perimeter;
    printf("밑변입력 ==>");
    scanf("%lf",&w);

    printf("높이입력 ==>");
    scanf("%lf",&h);

    area = w*h;
    perimeter = 2*(w+h);

    printf("사각형의 넓이: %g\n",area);
    printf("사각형의 둘레: %g\n",perimeter);

    return 0;
}