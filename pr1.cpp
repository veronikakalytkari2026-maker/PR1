#include <iostream>

using namespace std;

int main()
{
    cout << "Hi, World!" << endl;

    // Обчислення добутку чисел від 1 до 10
    int p = 1;
    int i = 1;

    while (i <= 10)
    {
        p *= i;
        i++;
    };
    cout << "p = " << p << " i = " << i << endl;
    system("pause");
    cout << "Новий коміт у main" << endl;
    return 0;
}