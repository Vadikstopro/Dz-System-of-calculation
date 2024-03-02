#include <iostream>

using namespace std;

string to_other_base(int num, int base) {
    char digits[36] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                     'U', 'V', 'W', 'X', 'Y', 'Z' };
    string result;

    while (num) {
        int digit = num % base;
        result = digits[digit] + result;
        num /= base;
    }

    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int num, base;

    cout << "Введите число: ";
    cin >> num;

    cout << "Введите систему счисления (от 2 до 36): ";
    cin >> base;

    if (base < 2 || base > 36) {
        cout << "Неверная система счисления!" << endl;
        return 1;
    }

    string result = to_other_base(num, base);

    cout << "Число " << num << " в " << base << "-ой системе счисления: " << result << endl;

    return 0;
}