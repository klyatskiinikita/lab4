#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b;
    cout << "Введіть число, більше за 999: ";
    cin >> a;
    b = static_cast<int>(a) / 100 % 10;
    cout << b << endl;
    cout << "Кількість розрядів сотень в записі цього числа: " << b << endl;
    system("pause");
    return 0;
}
