#include <stdio.h>

int main()
{
    int k, e, m, sum;
    printf("국어점수 입력");
    scanf("%d",&k);

    printf("영어점수 입력");
    scanf("%d",&e);

    printf("수학점수 입력");
    scanf("%d",&m);
    
    sum = k+e+m;

    printf("==> 합계 %d, 평균 %.2f입니다.",sum,sum / 3.0);

    return 0;

}
