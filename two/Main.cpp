// комментарий

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "RUS");
    int a;
    cout << "Введите 5значное число" << endl;
    cin >> a;
    if (a >= 0 && a <= 9999)
    {
        cout << "Вы ввели неверное число. Число должно быть пятизначным.\n\n";
    }
    else {
        if (a >= 100000)
        {
            cout << "Вы введи не верное число. Число должно быть пятизначным.";
        }
        else
        {
            cout << "1 цифра равна " << (a / 10000) << endl;
            cout << "2 цифра равна " << (a / 1000)%10 << endl;
            cout << "3 цифра равна " << (a / 100) % 10 << endl;
            cout << "4 цифра равна " << (a / 10) % 10 << endl;
            cout << "5 цифра равна " << a % 10 << endl;
        }
        cout << endl;
        return 0;
    }
}


