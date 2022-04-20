#include <iostream>
#include <vector>
using namespace std;

double stuAve(vector<vector<double>>& x)
{
    for (int i = 0; i < 5; i++)
    {
        double total = 0;
        for (int j = 0; j < 4; j++)
        {
            total += x[i][j];
            x[i][4] = total / 3;
        }
        return x[i][4];
    } 
}
int main()
{
    vector< vector<double>> x;
    double a[5][4] = {
        {80.0, 70.0, 90.0},
        {85.0, 77.0, 95.0},
        {83.0, 75.0, 70.0},
        {73.0, 95.0, 67.0},
        {88.0, 79.0, 71.0},
    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            x[i][j] = a[i][j];
        }
    }
    cout << stuAve(x);
    




    return 0;
}


/*
學生的成績有三科全班共有5人
他們的成績如下：
80.0, 70.0, 90.0
85.0, 77.0, 95.0
83.0, 75.0, 70.0
73.0, 95.0, 67.0
88.0, 79.0, 71.0
請利用vector方式建立一個二維陣列儲存成績

並計算每個人的三科平均
使用函數為stuAve(vector)

和全班每科平均
使用函數double* courseAve(vector)

輸出說明：
依照範例輸出三科成績及平均，最後輸出全班每科平均

範例輸出：
80.0, 70.0, 90.0, 80.0
85.0, 77.0, 95.0, 85.7
83.0, 75.0, 70.0, 76.0
73.0, 95.0, 67.0, 78.3
88.0, 79.0, 71.0, 79.3
Average: 81.8, 79.2, 78.6
*/