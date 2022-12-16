#include <iostream>
#include <locale.h>
using namespace std;
/* ������� ��� ����������� ����� ����������������, � ������� ������� �������� ���� ����� ������� �� ������� �.main � ������������ ������������ � ����� ����� ���� ����-
�����. ������� ��������� ���, � �� ����� ����� ���� ����� � ��������. ������� ��������� ��� ���������� ���� ������������� � ��������� � ������ ������ ��������� ���, ��-
����� ����� ������� �� ���� ��������� (�� �.main). ���� �������� ���� �������� ����������� ��� � ����� ����� ���� ����������� � ������ ����� ��� �������� ��� �����.

                                                                        ���������� �������
1. ����� �� ������ ���� � ���� ��������� ���.
2. ������� � ������ ��������/����������� ����� ���������, ����������� �����-�� ��������. � ������, ���� ���� �����-�� ������� ����������� ��������� � ������� �� ����
��������� (������� ��������� ������� ��� ��������� �� �����/������/���������).

� ������� ����� �������� ��� ���������, ��������� ����� (if else, switch, �����, �������, ��������� ����������, ���������...)
� ������� ���� 2 �������� ����������, ��������� � ����. ��������� ���������� ��������� �������. ��������� ������� ��� ������������ ����� �������������, ������������
������� � ���������� �� �� ������ �������. �������, ��� � �������, �������������� ����� ������ ���������������� � ������� ��������� �� �������. ��������� ������� ���
���������� ���������� �������, � ���� - ���������� �������.

                                                                       ��������� ������� ��:
1. ��� ������� (�������� ���� ��� ���������� �������)
2. ��������� (���������) ������� - ��������, ������� ����� � ������� ��������, ����� ��� ������ �� �� ��������� ��������� �����-�� ��������. ��� ������� ������, ������-
   ����� ������� ��� ������ ��� �����. � �������� ���������� ����� ������������ ����� ����, �� ���� ����� ����������.
3. ������������ �������� - ��������� ������ �������. ������� ����������� ������ ���������� ��������. ���� � ������� ���� �����-�� �������� ��������� ������, ��������,
������� ��������� ������� ��������������, �� ��������� �� ����� ������� ��������������. ���� ��������� � ������� ����������� (���������, ������, ����������� ��������),
�� ��� ���������� (��������) ������� ���������� ������� ��� ������ ����� ��������, ����. int main().
���� � ������� ��� ���������� ������������ �������� ��� ��� ����������, ����. ������� ���� ���-�� ������� �� ����� �������, �� ��� ��� ���� ������� ����������, ���.���-
����� � ������� �� ���������, ����, � ����������� ���������� � ��� ���� ���. ��� ��� ������ ���� ������ ��� ������������� �������� void.

��� ������� ��������� ��� ������� main. ��������� ����� ������� ������ main ������, �� ����� ��������� ������� ������� ������������ ������ main.

                                                                ������� ����� ��������� ����� ���������:

I. ���������� � ���������� ������� � ����� ����� (���������� ��������� � ����)
II. ���������� ������� ���������� � ����������� ����� ������� main

                                                                    ���������� � ���������� �������
������ ����� ������������ �������� - ��������� ������ �������. ������� ��� "������, ���!" �������� �������� (����������� �����) ����� �� �����. ��� ���� ������� �����
�� �����. ������ �������� ����� void, ����� ��� ������� � ������ (). � () ������ ���������, ������� ������� ������ ������� ��� ����� ������. �.�. ��� ������� �������
���� ����� �� �����, �� �� ������� ���������� � �� ���� (����� ����� ����������, ��� ���������), () ����� �������. �����, ������ �������� ���.������, � ������� �������-
�� ���� �������. */

void Hello()                                                                                // �� ��������� ������� ���������� � �� ���������� ���������
{
    cout << "Hello world!" << endl;
}
/* � ��� ������, ��� ����� ������������ ���������� ���� ������� (������� ����� �� �����), ����� ���� ���������� � ������� Hello (������� �������). ����� ������� �������
����� �������� �� ��� � �������� �� ���������, ����������� ��� �� ������. �� �.�. ���� ������� Hello ������� ���������� ��� ������ �� ���������, �� ��������� ��� ����
������. ���, ��� ����� ������� �������, � ���� ������ �� ��� � ����� ������ ������ (). ������ () �����������, ���� ���� ��� ����������, �.�. ������ ������ () ����������
����� �������. ';' � ����� �����������, �.�. ����� ������� ��� ����������� �����. ��� ������� ��� ����������.

����� ������� ������ ����������� ��������� � ������������ ���������. �������� �������, ������� ����� ��������� ���� ��������, �� �� ����� ���������� ���������. ��������
������� ����� �������� �� ����� �������� ���������� ���������. ������� ������ ���������� ��������� � �������� ��������� � ������� �� ����� �������� ���������� ���������.
�.�. ���������� ��������� ��� ������ ����� ������, ������� �� ����� ������ ���������, � ����, ���������� ��������� ��� �� �����, ����� void. � ��������� ��� ����� ��-
�������� ��������� � �������� ���������, ����, ���������� � ������� ������� ������� ��������, ��� ��� ������ � ���. ��� ���������� ��������� ����� int. ������� ��������
����������, ������� ����� ������ ��� ���������� �����, �� � ����� ������� cin ���, ����, ����� ������ �������� ���������� ��� ������ �������. ��� ���������� ������� 1
�������� (���� ����������). �������� �������������� �������� ���������� � ������� ������� ��� ������ �������. */

void Stars(int Count)                                                                       // ��������� 1 �������� � �� ���������� ���������
{
    for (int i = 0; i < Count; i++)
    {
        cout << "*";
    }
    cout << endl;
}
/* ��� �������� �������?
� ������ ������ ������� �������� ��������� ������ �� �����. ��� ��������������� � ���������� ��������� � ������� (� �� ����� ��� ������� ������������������/����� � ���)
� ������� �������� ������. �� ��� ��� ���� ��� ��������, main ����� �� �����. ��� ������ ��� ��������, ��������� � ���� ������� ����������, ���������� �������� � �����
������ ������� � ��������� ���������� �������� �� ���� ���������. ��� ���� ����� � ��������� (Step Into/��� � �������). ��� ������� � ������� � �������, ������� ������-
�� ��� ���� ���������. ������� �������� '5' � ������� ��������:
��� ������ ������� ���������� ��������� � ������������� ���.������, ���������� ���������� ��������. �� ���������, ��������� � ��������� ������� (int Count) ���������� �
������� ��������, ���������� ��� ������ '5'. � ������ ������ ������� Stars ����� ������� ���������� int Count, ��� ������� �������� '5' � ����� �������������� � ����
�������.
(!) ���, ��� ��������� ������ �������, �������� ������ ������ ������� � ���� ������� ��������.
��� ������ ������� ��������� ������, ���������� Count ����� ���������� � ������ � ��� ������� �� �����. � ����, ����� ���������� ������� ����� ���� ����� ������ �� ���
� �������� ������ �������� ����. ��� ����� �� ����� �������. Count � ������� main � Count � ������� Stars ��� ��������� ������ ����������, ����� �� ��������� ����� ��-
���. Count � Stars ����� ������ � ������� Stars, � Count �� main ����� ������ � main. ����� � ������ ������� Stars � ������ � ��� Count �� main, �� �������� ����������
Count �� main �������� � Count �� Stars � ������� Stars ����� � ���� ��������� ��������.

�.�. ���������� �� ���� ���������� � �������, � ���� �� ��������, ����, � main ���������� ���������� ����� ����� ����� ���, ������������� ����� �� ��� � ������� Stars.
����� ����� ����� ��������� �������� � �������, ������ ��� �������� � ����������. ����� ������� ����� �������� �� ����� �� ��������, � ����� ������, ����, ��� �����
��������� ��� ��������� (���������� �������� � ��� ������). ������� ����� �������� �� ����� ����� �� �������� � �� ����� ������ ����������, �� �������, �� ������� �/�,
��� ������ ����� �������� ���������. */

void print_line(char Symbol, int Count)                                                     // ������� ��������� ��� ���������, �� �� ���������� ���������
{
    if (Count <= 0)
    {
        cout << "���������� �������� ������ ���� ������ ����!" << endl;
    }
    for (int i = 0; i < Count; i++)
    {
        cout << Symbol;
    }
    cout << endl;
}

/* ��������� ������� ��� void print_line(char Symbol, int Count). � ��� ������ ������������ ��������, ��� ������� � ��������� (�� ���������� � ���� ������).
���������� Count � ������� print_line �� ����� �������� ��������� � ���������� Count ������� main ��� ������� Stars. ��� ��� ������ ���������� � ����� ������, �������-
��� ������ �������� ���������. ����� ������������ ������� � 2-� � ����� �����������, ����� ��� ������ ������� ��������� ��� ������ ���������� � �� �������. �.�. ��� ��-
���� ������� � ����������� �� ������� ���������� � ��� ��������� ������ ����� ������, ����� ���������� ������� �������������� ����� ������ (�����������/��������) � ���-
������ ������� ������. ������ 2 �������:

    - ���� ������ ��� ������ ������� ������ ���������!
    - ������� ����� ������ �� ������ ����������!

���� ������ ���� char, � ����� int, �� ������ ��� ���������� �������� �������.
(!) void print_line(char Symbol, int Count);
    void print_line(int Count, char Symbol); ������ �������, �.�. ������� �� ���������� ������, � ����, �������� ��� ������� ����� ��-�������

C����� print_line(Symbol, Size); ������ �� setlocale(LC_ALL, "rus"); ��� ������� � ���, ��� setlocale(LC_ALL, "rus"); ��� ����� ������� � ����� �����������! ������ ��-
������ ��������� ��� ����� ������������, � ������ ��������� ����� ������ ��� ����� �������. */

int MyPow(int Digit, int Pow)                                                               // ������� ��������� 2 ��������� � ���������� ��������� ���� ������ int
{
    int Result = 1;
    for (int i = 0; i < Pow; i++)
    {
        Result *= Digit;
    }
    return Result;                                                                          // �������� return ���������� ��������� ������ ������� (��������)
    cout << "���!" << endl;                                                                 // �� ������� ��� ����� �� ������ �� ������, ������ ��� ��� �� ���������.
}

int main()
{
    setlocale(LC_ALL, "rus");
    Hello();                                                                                // ����� ������� ��� ����������
    Stars(5);                                                                               // ����� ������� � ����� ����������

    int Count = 10;
    Stars(Count);                                                                           // ����� ������� �� ��������� ���������� � �������� ���������

    cout << "������� �������� � ����������: "; cin >> Count;
    Stars(Count);

    print_line('%', 11);                                                                    // ����� ������� � ����� �����������

    int Size = 0;
    char Symbol = '+';
    cout << "������� ������: "; cin >> Symbol;
    cout << "������� ���������� ��������: "; cin >> Size;
    print_line(Symbol, Size);

    /* ������ ������� MyPow, ������������ ��������� ����� ������. ��� ����� ��������� � ������� ����� �����. ����������� ������� ����� �����, ����������� � �������, ����,
    ���������� ������� ��� ������ ����� ����������. ���� �� ����� ����� �������� � ����� �������, �� ������� ����� ��������� (int). �����, ����� ������� ������ ������� ��-
    �������, ����� ����������, � ������� ��������� ����������. int Result ����� ������� ������������� � �������� ��������� ���������. ����� � ����� for ������������ ����-
    ������ Digit � Result. ����� ������� ��������, ���������� � ���������� ������ �������, ����� ������������ ����������� �������� ����� return. � return ����� ������� ���
    ���� ������� (��� ����������� � ��������� � ���������� Result). ���������� Result ����� ���������� ������ � �� ����� ��� ���������� �������. �������� return �� ������
    ���������� ���������, �� � ��������� ������ �������, � ����, ��� ��� ����� �������� ����� return, ����� �� ���������, ��������� �� �����.

    (!) �������� return ����������� ������ ���� � ��� ������� � ������� ������������ ��������. ��� �������� ����-�� ����� void ��� �������� �������, ���������� ������� ���-
    ������ ��� ������ � ������ ���. ���� ������ int, �� � return ����� ������� �������� ���� int (� ����� �����). ���� ������� ���������� void (�� ���������� �������� ��-
    ��������), �� return � ��� �� �����. ����� ����, ���� return ����, �� �� ����������� ������ �����������. return-�� � ������� ����� ���� ���������, �� ������ ���������
    ������ ���� (���� �� �������, ���� � ����������� �� �������).

    ��� ������� ������� ������������ ���������? ���� ������ ��������� MyPow(5,3); �� �� ������ ������ �� �����, �.�. ������ �� ����� ���. ������� ����������, � � ��� �����
    ��������� ��������� �� ������, ����, ����� ������� ����� ��������� � cout.
    ����� ��������� ��������� ������ ������� ����� ���������� ���������. ����� ���������� ���������� ���. ����������. ��� ������ ���� � ����������� ������ ���� ������. ����
    ������� ���������� int, �� � ��������� ��� ����� ���������� ���� ������ ���� ���� ������ int. */

    MyPow(5, 3);                                                                            // ��� ����� ����� ������������ ������� ����������
    cout << "����� 5 � ������� 3: " << MyPow(5, 3) << endl;
    int Result = MyPow(Count, Size);                                                        // ������������� ���������� Result ����������� ������ ������� MyPow();

    /* � ��� ������ ����� ���������� ������ �� ������ ����, �� ������� ������� MyPow(); �������� � �� �������������, �������� � ��� �������� 5 � 3 (Digit ����� ����� 5,
    � Pow 3), ���������� ��� ��� ���� ������� � �������, � ����� ���������� return, ����������� ��������� �������� ���� ��� ������� ���� �������. � �����, ��������� ��-
    ���� ������� ����� ������� � ���������� Result � �� ����� ������� �� �� ����� � �������. */

    cout << "���������: " << Result << endl;

    /* �� ��� ������ ������� int Result = MyPow(5, 3); �� ��� int A = rand(); �� �� �������� � ��������� ��������� � ����������. �� ��� �������� � ���������, �� �� ��-
    ������ �� ��� ��������. �� ����� ������ ������� rand ���������� ��������� �� ����������, �������� ��� ��� ���� � ��� ������, ������� ���������, ������� ��� �������
    � return � ������� � ������ ���������� 'A'.

    ���� ������� ��������� �� ����������, ��� ��� ����� ����� ��������� �������� return �.�. return ��� � ��������� ������ ������� (��� ����-����). ��������, �������
    print_line (�������� ���������� ��������), � ��� ������-�� ����������� �������� ������� �� ���������, � ���� ��������� ������ ������� � ��������� � main. �.�.
    return ����� ������������ � ������� ��� break � �����. ���� ������� ���������� void, �� � ��� ���� ����� ���� return. �� ����� ��� �����-�� ��������, ������ ��� �
    ';'. �� ��������� ��� ���������� ����� �� ������� ���� ���-�� ����� �� ��� ��� ����������� ��� ��� �����. � void return ����� ������ �� ����������, � � �������,
    ������������ �������� return ���� ������. ��������� � ��������� ��� return ���������� ��� �������.

   (!) �������, ��� � ����������, ���������, ������� ��������� � �������� ����� � ���!
   (!) return � main ����, ��� ���������� ������ ��� ���� ��������� ��� return 0; �.�. ���� �� ��� �� ������� ����, �� ������� ���������� � ��������� ����. � ���� ��
       �������, ��������, return 555; �� ������� ���������� � ����� 555 (�� ������ 555 � ������ ����� ��������� ���������). � ������� main ����� �������� void main, ��
       ���������� ��� ������� void �� int �.�. ���������� ���������� ������ � ���, ������ �� ���������� ��������� (������ ����� ���� ������ ��� ����� ��������). �����
       ����, � ������� main ���� ���� ���������. */
}