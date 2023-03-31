#include <iostream>
#include <math.h>

class Line{
public:
    int sx, sy;
    int ex, ey;
};

int main()
{
    Line myline;
    std::cout << "시작점 좌표 정수 두 개를 입력하세요\n";
    std::cin >> myline.sx >> myline.sy;
    std::cout << "끝점 좌표 정수 두 개를 입력하세요\n";
    std::cin >> myline.ex >> myline.ey;

    double d = sqrt(pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2));
    printf("myline의 길이는 %f 입니다.\n", d);
}