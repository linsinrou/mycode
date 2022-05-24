#include <iostream>

using namespace std;

int* reverse(int list[], int size)
{
    int* newList = new int[size];
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[size - i - 1];
    }
    return newList;
}

int main()
{
    int* gList;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "From:" << a[0];
    for (int i = 1; i < 5; i++)
    {
        cout << "," << a[i];
    }
    cout << endl;
    gList = reverse(a, 5);
    cout << "*reverse:" << gList[0];
    for (int i = 1; i < 5; i++)
    {
        cout << "," << gList[i];
    }
    
}


/*
�H����J���Ӿ�ơA��J�iint list[5]�A�Q��int *reverse(int list[], int size)�A�^�ǫ��X�C



��J�d�ҡG

1 2 3 4 5

��X�d�ҡG

From: 1, 2, 3, 4, 5
*reverse: 5, 4, 3, 2, 1
*/