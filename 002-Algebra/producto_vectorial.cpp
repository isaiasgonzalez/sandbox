#include <iostream>

int main() {

    float ax, ay, az, bx, by, bz, rx, ry, rz;

    std::cout << "ax: ";
    std::cin >> ax;
    std::cout << "ay: ";
    std::cin >> ay;
    std::cout << "az: ";
    std::cin >> az;

    std::cout << "bx: ";
    std::cin >> bx;
    std::cout << "by: ";
    std::cin >> by;
    std::cout << "bz: ";
    std::cin >> bz;

    rx = ( ay * bz - az * by );
    ry = ( az * bx - ax * bz );
    rz = ( ax * by - ay * bx );

    std::cout << "(" << rx << "; " << ry << "; " << rz << ")";

    system("pause");
    return 0;
}