#include <iostream>

using namespace std;

void func();

int main()
{
    setlocale(0, "");
    func();
    return 0;
    
}
void func() {
    int num, length;
    int dobutok = 1;
    int indexZero = 0;
    bool isZero = false;
    int sum = 0;
    cout << "������� ������ �������: ";
    cin >> length;

    int* newArr = new int[length]; // ��������� ��������� ������

    for (int i = 0; i < length; i++) {
        cout << "������� ����� ��� ������� " << i << " : "; //��������� ����� ��� ������� ����� � �����
        cin >> num;
        newArr[i] = num;
    }

    for (int i = 0; i < length; i += 2) // ���� ��� �������� 
    {
        dobutok *= newArr[i];

    }

    cout << "������������ ����� � ������� ��������: " << dobutok << endl;

    for (int i = 0; i < length; i++)
    {

        if (newArr[i] == 0) {
            indexZero = i;

        }

    }
    for (int i = 0; i < indexZero; i++) //���� ��� ���������
    {
        if (isZero) {
            sum += newArr[i];
        }
        if (newArr[i] == 0) {
            isZero = true;
        }
    }
    cout << "����� �����: " << sum << endl;

   

    delete[] newArr; // ������� ���'���

}