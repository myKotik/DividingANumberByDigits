// �����������

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "RUS");
    int a;
    cout << "������� 5������� �����" << endl;
    cin >> a;
    if (a >= 0 && a <= 9999)
    {
        cout << "�� ����� �������� �����. ����� ������ ���� �����������.\n\n";
    }
    else {
        if (a >= 100000)
        {
            cout << "�� ����� �� ������ �����. ����� ������ ���� �����������.";
        }
        else
        {
            cout << "1 ����� ����� " << (a / 10000) << endl;
            cout << "2 ����� ����� " << (a / 1000)%10 << endl;
            cout << "3 ����� ����� " << (a / 100) % 10 << endl;
            cout << "4 ����� ����� " << (a / 10) % 10 << endl;
            cout << "5 ����� ����� " << a % 10 << endl;
        }
        cout << endl;
        return 0;
    }
}


