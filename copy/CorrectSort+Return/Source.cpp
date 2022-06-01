int* CorrectSortReturn(const int list[], int size)
{
    int* newList = new int[size];
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[size - i - 1];
    }
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (newList[j] > newList[j + 1])
            {
                int a = newList[j];
                newList[j] = newList[j + 1];
                newList[j + 1] = a;
            }
        }
    }

    return newList;
}