#include <iostream>
#include <cmath>
#include<Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 1251");



    std::cout << "������� �������� 5 ������ � ������������:" << std::endl;
    std::cout << "A (2,2)  B (4,4) C(4,6) D(2,7) E(1,5)" << std::endl;
    int x1, x2, x3, x4, x5;
    int y1, y2, y3, y4, y5;
    std::cout << "������� ���������� 1-�� ������" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "������� ���������� 2-�� ������" << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "������� ���������� 3-�� ������" << std::endl;
    std::cin >> x3 >> y3;
    std::cout << "������� ���������� 4-�� ������" << std::endl;
    std::cin >> x4 >> y4;
    std::cout << "������� ���������� 5-�� ������" << std::endl;
    std::cin >> x5 >> y5;

    double s = fabs((x1 * y2 - x2 * y1) + (x2 * y3 - x3 * y2) + (x3 * y4 - x4 * y3) + (x4 * y5 - x5 * y4) + (x5 * y1 - x1 * y5)) / 2;

    std::cout <<"������ ������������� �� ������� ������ ABCDE =  " << s <<std::endl;




}