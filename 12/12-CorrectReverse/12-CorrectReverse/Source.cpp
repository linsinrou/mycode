#include <iostream>

using namespace std;
int* gList;

int* reverse(const int list[], int size)
{
    int* newList = new int[size];
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[size - i - 1];
    }
    return newList;
}

void print(const int list[], int size)
{
    cout << list[0];
    for (int i = 1; i < size; i++)
    {
        cout << "," << list[i];
    }
}

int main()
{
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    gList = reverse(a, 6);
    print(gList, 6);

}


/*
print中的int list[]，可在main函式建立一個*pList的位置，傳進去即可。




輸入說明：

輸入六個數字，用*reverse左反轉，再用print做輸出。



輸入範例：

1 3 5 7 9 10



輸出範例：

10, 9, 7, 5, 3, 1

*/