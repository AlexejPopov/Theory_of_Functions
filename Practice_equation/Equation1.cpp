﻿#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
/* kx + b = 0           - линейное уравнение
   ax^2 + bx + c = 0    - квадратное уравнение (если а==0, то будет лин.ур. bx + c = 0)
Линейное уравнение это частный случай квадратного уравнения, след, можно решить любое лин. или кв.уравнение с помощью одной функции.
Перегрузка и прочие механизмы нужны в первую очередь для программиста, чтобы ему было удобнее работать. */

/* Функция решения линейного и квадратного уравнения с учетом частного случая квадратного уравнения (а==0).
В квадратном уравнении либо нет корней, либо два одинаковых или два разных. А в линейном уравнении один корень. Возвращаться будет в качестве значения количество корней
в уравнении, т.к. вернуть 2 значения при помощи return нельзя.
(!) return прерывет всю функцию, поэтому если он в if, то else можно не писать. */
int Equalization(double a, double b, double c)
{
    double x1 = 0.0, x2 = 0.0, D = 0.0;                             // вспомогательные переменные
    if (a == 0)
    {
        x1 = -c / b;
        cout << "x= " << x1 << endl;
        return 1;                                                   // возвращаем количество корней (1 корень линейного уравнения)
    }
    D = (b * b) - 4 * a * c;
    if (D < 0)
    {
        cout << "D = " << D << endl;
        cout << "No actual roots!" << endl;
        return 0;
    }
    if (D == 0)
    {
        x1 = (-b) / (2 * a);
        cout << "x1=x2= " << x1 << endl;
        return 20;                                                   // два одинаковых корня
    }
    // D > 0 - 2 разных корня
    x1 = ((-b) - sqrt(D)) / (2 * a);                                // sqrt функция, вычисляющая кв.корень для double
    x2 = ((-b) + sqrt(D)) / (2 * a);
    cout << "x1= " << x1 << "\nx2= " << x2 << endl;
    return 22;
}
/* Один из минусов этого варианта, необходимо какое-то другое значение вернуть и неудобно будет анализировать такой результат работы функции, а для пользователя все бу-
дет хорошо. Вызову функцию сперва для лин.уравнения. Тут есть нюанс с коэфф.а, т.к. он мог сперва использоваться в решении кв.уравнения и не быть нулем, нужно его обя-
зательное обнуление либо использование литерала 0. Вызывать функцию вот так с нулем неэтично. */
int main()
{
    system("chcp");
    system("cls");
    int choise = 0;
    double a = 0.0, b = 0.0, c = 0.0;
    do                                                              // цикл повторных вычислений
    {
        cout << R"(------------------------------------------------Программа для решения уравнений!-------------------------------------------------------------------
1 - Линейное уравнение (kx + b = 0)
2 - Квадратное уравнение (ax^2 + bx + c = 0)
0 - Выход из программы
)";
        do                                                          // проверка пользовательского ввода
        {
            cout << "Выберите тип уравнения: "; cin >> choise;
            if (choise < 0 || choise > 2)cout << "Неверно выбран тип уравнения! Введите еще раз!" << endl;
        } while (choise < 0 || choise > 2);
        if (choise == 0)break;                                      // выход из программы
        switch (choise)
        {
        case 1:                                                     // линейное уравнение
            cout << "Введите коэффициент \"k\": "; cin >> b;
            cout << "Введите коэффициент \"b\": "; cin >> c;
            //a = 0; => Equalization(a, b, c);
            Equalization(0, b, c);                                  // I вариант
            break;
        case 2:                                                     // квадратное уравнение
            cout << "Введите коэффициент \"a\": "; cin >> a;
            cout << "Введите коэффициент \"b\": "; cin >> b;
            cout << "Введите коэффициент \"c\": "; cin >> c;
            Equalization(a, b, c);                                  // II вариант
            break;
        }
        system("pause");
        system("cls");
    } while (choise != 0);
    cout << "Выход..." << endl;
    Sleep(1500);
}
/* Заключение: для простого вычисления выполняется такой грамоздский код, да еще и с неэтичным нулем и нюансами с return. Так писать не стоит. */