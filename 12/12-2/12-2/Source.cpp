#include <iostream>
#include "stack.h"
using namespace std;

int main()
{

    return 0;
}




/*
首先，請先將Stack改為template形式接納各種型別，再利用此類別，完成將字元push到Stack（以字元處理），然後用pop輸出，並以中間的符號運算，然後將結果push回Stack。

輸入說明：
輸入9個字元push到Stack，其中包含數字字元與運算符號字元。

輸出說明：
用pop輸出三個字元後，以中間的符號運算，並將結果push回Stack。重複此動作直到算式結束，最後數字為結果。

範例輸入：
7-9/9-3*2

範例輸出：
6
3
3
4
*/