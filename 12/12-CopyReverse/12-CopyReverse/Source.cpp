#include <iostream>

using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
    for (int i = 0, j = size - 1; i < size, j >= 0; i++, j--)
    {
        newList[i] = list[j];
    }
}

template<typename T>
void print(T list[], int size)
{
    cout << "To:" << list[0];
    for (int i = 1; i < size; i++)
    {
        cout << "," << list[i];
    }
    cout << endl;
}

int main()
{
    int a[10], c[10] = {};
    double b[10], d[10] = {};

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }

    reverse(a, c, 10);
    reverse(b, d, 10);
    cout << "From:" << a[0];
    for (int i = 1; i < 10; i++)
    {
        cout << "," << a[i];
    }
    cout << endl;
    print(c, 10);

    cout << "From:" << b[0];
    for (int i = 1; i < 10; i++)
    {
        cout << "," << b[i];
    }
    cout << endl;
    print(d, 10);
}

/*
建立一個int list1[10], double list2[10]，連續各輸入10個數字，分別為整數及浮點數，輸出時請反轉。

利用 void reverse(const int list[], int newList[], int size)做反轉

再利用void print(int list[], int size)輸出。

將函式改成template(T) 接納多種型別。






範例輸入：

80 45 65 75 85 95 80 33 45 11

30.7 25.8 60.9 51.4 77.7 40.7 98.9 58.6 41.5 99.9



輸出：

From: 80, 45, 65, 75, 85, 95, 80, 33, 45, 11
To: 11, 45, 33, 80, 95, 85, 75, 65, 45, 80

From: 30.7, 25.8, 60.9, 51.4, 77.7, 40.7, 98.9, 58.6, 41.5, 99.9
To: 99.9, 41.5, 58.6, 98.9, 40.7, 77.7, 51.4, 60.9, 25.8, 30.7
*/