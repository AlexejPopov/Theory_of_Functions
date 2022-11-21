#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

/* Задам вместо нуля значение параметра по умолчанию, которое задается только начиная с конца, а параметр "а" равный нулю стоит первым, то даже если задав в "с" и "b"
нули, это мне не поможет, т.к. чтобы реально вызвать функцию для со значением только "а" по умолчанию нужно поменять порядок параметров. Саму функцию это не изменит во-
обще, а вызов поменяется. */

//int Equalization(double a, double b, double c)                        // первый вариант
int Equalization(double b, double c, double a = 0)                        // второй вариант
{
    double x1 = 0.0, x2 = 0.0, D = 0.0;
    if (a == 0)
    {
        x1 = -c / b;
        cout << "x= " << x1 << endl;
        return 1;
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
        return 20;
    }
    x1 = ((-b) - sqrt(D)) / (2 * a);
    x2 = ((-b) + sqrt(D)) / (2 * a);
    cout << "x1= " << x1 << "\nx2= " << x2 << endl;
    return 22;
}

int main()
{
    system("chcp");
    system("cls");
    int choise = 0;
    double a = 0.0, b = 0.0, c = 0.0;
    do
    {
        cout << R"(------------------------------------------------Программа для решения уравнений!-------------------------------------------------------------------
1 - Линейное уравнение (kx + b = 0)
2 - Квадратное уравнение (ax^2 + bx + c = 0)
0 - Выход из программы
)";
        do
        {
            cout << "Выберите тип уравнения: "; cin >> choise;
            if (choise < 0 || choise > 2)cout << "Неверно выбран тип уравнения! Введите еще раз!" << endl;
        } while (choise < 0 || choise > 2);
        if (choise == 0)break;
        switch (choise)
        {
        case 1:
            cout << "Введите коэффициент \"k\": "; cin >> b;
            cout << "Введите коэффициент \"b\": "; cin >> c;
            //Equalization(0, b, c);                                // первый вариант
            Equalization(b, c);                                     // второй вариант (со значением параметра по умолчанию)
            break;
        case 2:
            cout << "Введите коэффициент \"a\": "; cin >> a;
            cout << "Введите коэффициент \"b\": "; cin >> b;
            cout << "Введите коэффициент \"c\": "; cin >> c;
            Equalization(a, b, c);                                  // первый вариант
            Equalization(b, c, a);                                  // второй вариант
            break;
        }
        system("pause");
        system("cls");
    } while (choise != 0);
    cout << "Выход..." << endl;
    Sleep(1500);
}
/* Данный вариант работоспособен, но запутаться в bca/abc очень просто, да и функция все еще громоздская. Для пользователя ничего не меняется. */