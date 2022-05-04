#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void stuAve(vector<vector<double>>& x)
{
    for (int i = 0; i < 5; i++)
    {
        double total = 0;
        for (int j = 0; j < 3; j++)
        {
            total += x[i][j];
        }
        x[i][3] = total / 3.0;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << fixed << setprecision(1) << x[i][j] << ",";
        }
        cout << fixed << setprecision(1) << x[i][3] << endl;
    }
    
}

double* courseAve(vector<vector<double>> x)
{
    double* a = new double[3];
    for (int i = 0; i < 3; i++)
    {
        double total = 0;
        for (int j = 0; j < 5; j++)
        {
            total += x[j][i];
        }
        a[i] = total / 5.0;
    }
    return a;
}



int main()
{
    vector<vector<double>> x(5,vector<double>(4));
    double a[5][3] = {
        {80.0, 70.0, 90.0},
        {85.0, 77.0, 95.0},
        {83.0, 75.0, 70.0},
        {73.0, 95.0, 67.0},
        {88.0, 79.0, 71.0},
    };
    double* b;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = a[i][j];
        }
    }
    stuAve(x);
    b = courseAve(x);
    cout << "Average:";
    for (int i = 0; i < 2; i++)
    {
        cout << fixed << setprecision(1) << b[i] << ",";
    }
    cout << fixed << setprecision(1) << b[2];
    

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