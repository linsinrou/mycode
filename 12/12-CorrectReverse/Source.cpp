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
print����int list[]�A�i�bmain�禡�إߤ@��*pList����m�A�Ƕi�h�Y�i�C




��J�����G

��J���ӼƦr�A��*reverse������A�A��print����X�C



��J�d�ҡG

1 3 5 7 9 10



��X�d�ҡG

10, 9, 7, 5, 3, 1

*/