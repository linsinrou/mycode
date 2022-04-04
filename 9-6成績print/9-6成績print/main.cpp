#include <iostream>
#include <iomanip>
#include <string>
#include "Score.h"
using namespace std;

int main()
{
	Score score1;
	Score score2;

	score1.setName("John");
	score1.setMath(90);
	score2.setName("Mary");
	score2.setMath(80);

	string n1, n2;
	int m1, m2;
	cin >> n1 >> m1 >> n2 >> m2;

	score1.setName(n1);
	score2.setMath(m2);
	score1.print();
	score2.print();

	return 0;
}

/*
請以分開檔案方式設計Score封裝物件
data fields(private)：string name, int math
function:setName, setMath, getName, getMath

輸入說明：主程式建立兩個Score物件score1("John", 90)和score2("Mary", 80)，然後然後輸入2組參數，將score1的名字修改成第一組物件的名字以及將score2的成績修改成第二組物件的成績。

輸出說明：輸出修改後的兩物件名字與成績。

範例輸入：
Jerry 70
May 85

範例輸出：
Jerry 90
Mary 85

※ .h 檔內請務必避免多重載入(if no define)
*/