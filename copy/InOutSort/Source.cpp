void InOutSort(int list[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int a = list[j];
                list[j] = list[j + 1];
                list[j + 1] = a;
            }
        }
    }
}


