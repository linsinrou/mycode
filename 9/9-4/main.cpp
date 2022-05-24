#include <iostream>
#include <iomanip>
#include "BMI.h"

using namespace std;

int main()
{
    BMI a;
    string n;
    double x, y;

    cin >> n >> x >> y;
    a.setw(x);
    a.seth(y);

    cout << n << " " << fixed << setprecision(2) << a.getBMI();

    return 0;
}




/*
請以分開檔案方式設計BMI封裝物件

data fields(private):
string name
double weight
double height

function: getBMI() -> weight / (height*height)

輸入說明：主程式將輸入name、weight、height。

輸出說明：將name和BMI輸出，不論 BMI 是否為整數，請輸出到小數點後兩位。

範例輸入：
John 80 1.7

範例輸出：
John 27.68

※ .h 檔內請務必避免多重載入(if no define)
*/