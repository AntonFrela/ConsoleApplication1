// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Изменение 1
#include <iostream>
using namespace std;

class Auto {
private:
    int year, month, day;
public:
    Auto() {
        year = 2000;
        month = 12;
        day = 31;
        get();
        cout << endl;
    }
    void message() {
        cout << "Class is working!" << endl;
    }

    void set(int date_year, int date_month, int date_day) {
        year = date_year;
        month = date_month;
        day = date_day;
    }

    void get() {
        cout << "Year of this auto is " << year << ", month is " << month << ", day is " << day << endl;
    }
};
class b;
class a {
    friend int sum(a, b);
private:
    int i;
public:
    a() {
        cout << "Enter i:";
        cin >> i;
    }
};
class b {
    friend int sum(a, b);
private:
    int y;

public:
    b() {
        cout << "Enter y:";
        cin >> y;
    }
};


int sum(a first, b second) {
    return (first.i + second.y);
}
int main()
{
    //Auto shkoda;
    //shkoda.message();
    //shkoda.set(2005, 11, 23);
    //shkoda.get();
    a first;
    b second;
    cout << sum(first, second);

    cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
