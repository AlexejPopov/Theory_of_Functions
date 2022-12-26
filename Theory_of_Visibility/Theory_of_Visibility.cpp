#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
/* ������ �.main ��� ����������. �� ����� ��� ����, �� ��� �� �����, �.�. ������ ���� �� ��������� ��� ����������. �� ����� �������� ���� ����. � �������� 1-�� �������-
�� �.main �������� ��� � ���� � ���������:

C:\Users\alexej.popov\OneDrive - Accenture\Documents\Visual Studio 2022\Projects\Visible\x64\Debug\Visible.exe
��������� ��������� ���������� ��� ������.

��������, ������� ping (�������� ����������� ����) ��� ��������� �� ���������. ������� ping � IP �����, ������� ����� ���������: ping 8.8.8.8 (��� IP ����� DNS �������
Google). �� ping ��� �� ������ �������, ��� ����������� .exe ���� (ping.exe), ������� �������� � ����� System32. �.main ������� ping.exe ��������� � 1-� �������� IP ��-
���, � �� 2-� �����. ���� -t �������� ��� ��� ����� ����������� ����.
��� ��������� ���� ����� ��������� �����. 1-� �������� ������� ���������� � main ��� ���� � �� .exe �����. �� ��� ���� ������, �� ������ ��� �� ����� ��� ��������. �.�.
main ��� ����� �� �������, ��� � �����������, �� ���������� ���� ��� ��� ��� ������������ � ������ �� ������ �������� ������ ������ ���������. � ����� main ���������
������, ��������� ������ � ��� ���������.
                                                                   �������� �������
������ �������, ������������ max �� 2-� �����. ����� ������� ������ ���� �.main � ���������� �� ����.������������. ����� ��� �� �������� � ������������ ��� ��������
����.�. � �. ���� �������� �������. ��� ��������� ������� ��� ����������. � ���������� ������� �������� ����� �.main. ��������� ������� ����� main �.�. ����� ��������-
���� ������� ����� �������� �� �� ������������� � main. ������� ��� �����.��������, ���������� ��� ����� ����.�������� Max, � ��������� ����� 2 ����� int A � int B �
����� ������ ����� ��� max. �������� ������������ ';'.

    int Max(int A, int B); - �������� �������.

';' � ��������� �����������, � � ������� ������� �� ���� �� ������. ���������� ������� ������� ��� ������� ������� ��� ';'. �������� �������� ����������� ��� ���-�� �
��������� ���� ���������� ������� ��� ������ Max, ������������ int � ����������� 2 ��������� ���� int.
(!) � ��������� ����� �� ������ ����� ����������, �� �� ���������� � ���� ������ ����������� ������ ���� int Max(int, int); � � ���������� ������� ����������� ������
���� � ���� ������ � ����� ����������.
                                                                ������� ��������� (�.�.)
���. ���.������ � ���� ������������ ����� �.�. (�.�.), � ��� ��� ���������� ������ ���.������ �������� ������ ������ ���.������. ���� ������� ������ ������ ���.������,
�� ���� �� ����� ���� ������ ���� ���.������. � ������� ������� ���������� �.�. � ����� ������ ���.��������: if else, switch, �����... ��� ������ ��������� ������� ��
������� ���.������, ���� ������ �������� � ������ � ���� ����� ������. �.main �������� ���.������, ������� ��� ��� ��������� ������ �.main �������� ���� ������ main.
����, ���� 2 �������: ���. � ����.�.�. (���. � ����.������). ���.�.�. ���������� ���.��������, � ����.�.�. ��� ��� ��� ��������� �� � ����� ���.������ �.main. ��� ���-
�������� ������� (�� ������ �����������) ��������� � ����.�.�. � �������� ��� ������ ������ �.main.

(!) ����.������� ��������� �� ������� �.main �� ����� ������� ��������� (����������), � ����� ����������� �.main � ��������� ��� ���.������� �.main.
(!) ��������� � ����.������������ �������� �� ���������� ���� ��������� � ���.�����, ������� �� �������� ������� � �� ����� ���������: ����.�./�./�������.
(!) ����.�. �� ����� ���������� � ������� � �������� ���������, ��� � ��� � ��� ����� ��������, �.�. �������� �� ����� ���� ���������.

   ����� ����� ����.�.?
1. ����� �������� �������� �� ����� ������� � ������ (� �.Max �������, � � main ���������� � ��������)
2. ����� ������������ �������������� ������� (����. ��� �������� ���������� ������� �������) */

int Max(int A, int B);                                    // ����������� ��������� �� ���� �����

int global;                                               // ����.�. ���� ���������������� �����, � ���.�. �������
const float PI = 3.14F;                                   // ����.�. ���� �� ���������������� �����, �� ���� ����������������
int ccount = 0;                                           // ������� ������� �������

int main(int argc, char* argv[])                          // argc - argument count; argv - argument value
{
    setlocale(LC_ALL, "rus");
    int digit = 0;
    cout << "���������� ����������: " << global << endl;
    cout << "���������� ���������: " << PI << endl;
/* ���������� ����.�.: ���� ���-�� � ���� ��������� ����.������� (������������ ��� � ����.�. ccount = 555), �� �� ���� ����.�������� ����� �������� �������� ����������
������� ������� (�� 4, � 559). ���. ��������� ����.�. ������ �� ��� ����������� ����� �� �������������. ����.�. ������� ��������� ��������������. */
    //�count = 555;
    Max(3, 5);
    cout << "���������� ����������: " << global << endl;
    //callcount;                                                    // ���.�. �.Max �������� ������ � �.Max
    Max(3, 5);
    Max(3, 5);
    Max(3, 5);
    Max(3, 5);
    cout << "���������� ������� �������: " << ccount << endl;
    system("pause");
    system("cls");
/* ���������� ����� ����� ������������ � ������ �.�. �.�. ��� ����� �� �����������. � ����� �.�. ������ ������� ���������� � ���������� ������ ���� ����� ���� ������.
� �.�. � ���� ������� ��� �.digit, �� ����� ���� ������� ���� �.digit �� �.main ��� ��������� �� �.�. � ���. ������� ��� ���� (���� ������ ��� � ��� �������� �� �����
while, � ������������� ��� ������ �����). ����� ���������� ��������� �� �.�. �������� � ���!

���� ������ �.�. (���.�.�.) ������� ��� digit, �� ��� ������ ���.�. �.�. 2-� digit ���� �� �����. ���.�. �������� ����� � �������, � ����.�. � ��������� (Locals) �����
���������� ������� ��������� ��� ������� ����� ���� �.digit, � ����� �� ����� 2-�, �� 2-� ����� ���� ������ �.�. ������ � �.�. 2-� �.digit. ��� �������� �.�. ��� ���-
����� � ������ ������ ������, � ������ �� ����� ��������� ������� �� �� �������������� � ������, � �� �� �� ������.
������ �.�. ������� ���. ���� ���.digit = 100. � � digit �� main, ������ �������� �.�. ���.digit �������� ����� digit �� main, �� ���� �� ����� ������ �.�. ����� ���
�.�. ����������, ���.digit ���������� ������� �� digit �� main � ����� ����� �������� digit �� main, � � ���.digit �.�. ������ ��������. ���� ����� ����� � � ����.�. */
    {
        double G = 9.8;                                                                  // ���.�., ��������� ������ � ���� �.�.
        cout << "��������� ���������� G ����� ����: " << G << endl;
        cout << "��������� ���������� digit �.main: " << digit << endl;                  // �.digit �� main �������� � ���� �.�.
        int digit = 100;                                                                 // ������� �.digit �� main ���.�.digit ����� �.�.
        cout << "��������� ���������� digit ����� ����� ����: " << digit << endl;
        cout << "���������� ���������: " << PI << endl;
        /* ������ ������ �.�. ���.�.PI. ��� �������� ����� ����.�.PI. ��� ������ �� ����� �������� (����� double). ���� ��� �������, �� ����� ������. */
        double PI = 3.14519;
        cout << "��������� ���������� PI ����� ����: " << PI << endl;
        /* ���� ��� ������ ����.������� ��������� � �.�. ����� ���������� �� ����.������� � ����� �� ������ � ���� �.�. ���� �������� ���������� �.�. "::". */
        cout << "���������� ���������: " << ::PI << endl;
        /* (!) ���������� ����� ���� �� ����.��������, ������� ������� �� �.main. ��� �������� �� �������� ��� �������� ��������� � �.main. */
    }
    cout << "��������� ���������� digit �.main: " << digit << endl;                      // �������������� �������� ������� ���.�.digit �� digit �� main
    //cout << "��������� ���������� G ����� ���� " << G << endl;                         // ������ ������� � "G" �.�. ��� ����� �� ������� �.�.
    return 0;
}
/* ����.���.�. �� ��������� ��� ������ �� �.�. ���� � ������ ����.���.�. ������ �.Max, �� �� ���������� ������ �.Max ��� ���������� ��������� ���� � ����� ���� �� �����
������ ���������. ����.���.�. ��������� 1 ��� ��� 1-� ������ �������. ��� ��������� ������ ������� ������ �� ���������, � ������ �������� ���������� �� ����������� ��-
���� �.Max (������ �.Max, �.�. ��� ���.�. �.Max). ����.���.�. ����� �������� ���� ������ �.Max, �� ����� ���� � ������� �������� � �� ����� ������ ���������. �������� �
��� ������ ����� ������ ������ �.Max. ���������� � ����.�. � �.main ��� ��� ���-���� ������.
(!) ����� �������� ������ � ��������� ����.�. ��� ������� �� ��������, ����� �������� ���� ���������� ������� � �������� ���������� ������ ������� (� return). �� � ����
������� return �����, ������� callcount � ���� ������������ ������ ������ �������.
(!) ����� ����.�. ���������� � ����.�. (ccount = callcount;), �� ��� ���� ����� �������, ����� ����� ��� �������� �� �����������. */

int Max(int A, int B)                                                // ���������� ������� (�� ����� ���������� ����.�. � ���� ��������� � �������)
{
    //digit = -100;
/* � �.main ���� �.digit, � � �.Max ��� ���������� �.�. ��� ���.�. �.main. � ����.�. ����� ��������. */
    global = 100;
/* ���� ���-�� �������� �������� ����.�., �� ����� � ��� ����� ����� ��������. ��� ������ �.Max, �������� ����.�. ����� ��� �� 0, � 100 �.�. � ������� ����� ���������
��������� ����.�. �� ������� ������ �.Max �.global ����� ����� ����� ��������. ���� ����.�. ���-�� �������� ��������, ��� �������� �� ��������� ������ ���� �������, �
������� �.global ������������. � ������ �������, ����.������� ����� ������ ������������ ������������ �� ���� �������� ��� ������ ���������� ��� ��� ��������. */
    int callcount = 0;
/* ������ ���.�. ������ �������, ��� ����� ������ ������ ������� � ���� ������ ������������ ������ ���� �������. ����� � �.Max ����� ������� callcount, ������� �������-
�� ���������� ������� �.Max. �� ����� ������������� � ������ ������� �������. ������ �.main ��� ���������� ����������. ������ �.Max 4 ���� � �����, ��� �.Max ���� ���-
���� 4 ����, � ������� �� ��������� (��� ��� 1, ��� � �������). ��� ��� �.�. ���.�. �.Max ��� ������ ������ ������� ��������� ����� (��� ������ ������� ��������� ������
callcount ��������� � ��� ������ ����.������ ������� ��������� �����), ������������ �� 1. �.�. ������ ��������� ����� ������� - "������".
(!) ���.�. ��� ��������� ������ ������� ��������� ������ � ������������ �� � �������� �������� ������� ������� ����������. � ����.�. ��������. ��������� � ������ ������
���������, ��� ����� �������� ��� ��������� � �������� ���� ����� ��������� �������� ���� ������. ����.�. ���� ���������������� �����, � �� �������! ������ ����.�. ���-
�����, � ��� ����� ���������� ����� ����. */
    callcount++;                                                      // ���.�. �.Max (�� ���������� ��� ����.�������)
    ccount++;                                                         // ����.�. ����� �������������� ��� �������
    
    static int callcount2 = 0;
    callcount2++;
    cout << "���������� ������� ������� �� ���.����������: " << callcount << endl;                         // ���.�. �� ����������� �� ��������� ��� �������� �� ���������� ������ �������
    cout << "���������� ������� ������� �� ����.����������: " << ccount << endl;         // ����� ����.�������� �� ����� � �������
    cout << "���������� ������� ������� �� ����.����������: " << callcount2 << endl;
    if (A > B)return A;
    else
        if (A == B)
        {
            cout << "�������� �����!" << endl;
            return A;                                                                    // return-�� ����� ���� ���������, �� � ������ �������� ����� �������� ������
        }                                                                                // ���� ����
        else return B;
}