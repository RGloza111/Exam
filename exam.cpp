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
    cout << "Введите размер массива: ";
    cin >> length;

    int* newArr = new int[length]; // створюємо динамічний массив

    for (int i = 0; i < length; i++) {
        cout << "Введите число для индекса " << i << " : "; //створюємо цикли для задання чисел в масиві
        cin >> num;
        newArr[i] = num;
    }

    for (int i = 0; i < length; i += 2) // Цикл для множення 
    {
        dobutok *= newArr[i];

    }

    cout << "Произведение чисел с парными номерами: " << dobutok << endl;

    for (int i = 0; i < length; i++)
    {

        if (newArr[i] == 0) {
            indexZero = i;

        }

    }
    for (int i = 0; i < indexZero; i++) //Цикл для додавання
    {
        if (isZero) {
            sum += newArr[i];
        }
        if (newArr[i] == 0) {
            isZero = true;
        }
    }
    cout << "Сумма чисел: " << sum << endl;

   

    delete[] newArr; // очищаємо пам'ять

}