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
�ǥͪ����Z���T����Z�@��5�H
�L�̪����Z�p�U�G
80.0, 70.0, 90.0
85.0, 77.0, 95.0
83.0, 75.0, 70.0
73.0, 95.0, 67.0
88.0, 79.0, 71.0
�ЧQ��vector�覡�إߤ@�ӤG���}�C�x�s���Z

�íp��C�ӤH���T�쥭��
�ϥΨ�Ƭ�stuAve(vector)

�M���Z�C�쥭��
�ϥΨ��double* courseAve(vector)

��X�����G
�̷ӽd�ҿ�X�T�즨�Z�Υ����A�̫��X���Z�C�쥭��

�d�ҿ�X�G
80.0, 70.0, 90.0, 80.0
85.0, 77.0, 95.0, 85.7
83.0, 75.0, 70.0, 76.0
73.0, 95.0, 67.0, 78.3
88.0, 79.0, 71.0, 79.3
Average: 81.8, 79.2, 78.6
*/