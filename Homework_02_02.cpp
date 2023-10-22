
#include <iostream>

class Calculator {
public:
    double num1;
    double num2;
    double add(double num1, double num2) {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
        return num1 + num2;
    }
    double multiply(double num1, double num2) {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return num1 * num2;
    }
    double subtract_1_2(double num1, double num2) {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
        return num2 - num1;

    }
    double subtract_2_1(double num1, double num2) {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return num1 - num2;
    }
    double divide_1_2(double num1, double num2) {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return num1 / num2;
    }
    double divide_2_1(double num1, double num2) {
        std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            return true;
        }
        else std::cout << "Неверный ввод!" << std::endl;
        return false;

    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            return true;
        }
        else std::cout << "Неверный ввод!" << std::endl;
        return false;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    double a;
    double b;
    Calculator num;
    while (true) {

        std::cout << "Введите num1: ";
        std::cin >> a;
        if (num.set_num1(a) != true)
        {
            do {
                std::cout << "Введите num1: ";
                std::cin >> a;
            } while (num.set_num1(a) != true);
        }

        std::cout << "Введите num2: ";
        std::cin >> b;
        if (num.set_num2(b) != true)
        {
            do {
                std::cout << "Введите num2: ";
                std::cin >> b;
            } while (num.set_num2(b) != true);
        }
        num.add(a, b);
        num.subtract_2_1(a, b);
        num.subtract_1_2(a, b);
        num.multiply(a, b);
        num.divide_1_2(a, b);
        num.divide_2_1(a, b);
        std::cout << std::endl;
    }
}
