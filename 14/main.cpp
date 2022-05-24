#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
	Rational a(2, 3);
	Rational b(5, 7);
	Rational c(3, 5);
	Rational d(7, 2);
	Rational e(5, 6);
	Rational f(5, 7);

	Rational first = a + (b * c);
	Rational second = ((d - e) / f);
	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
	cout << "++first=" << ++first << endl;
	cout << "--second=" << --second << endl;
	(first.compareTo(second) ? cout << first << "<" << second << endl : cout << first << ">" << second << endl);

}




/*
請參考課本範例:
Rational.h
Rational.cpp
TestRationalClass.cpp

利用第十四章所有觀念
完成4個分數任意組合的四則運算
陸續完成<, <=, >, >=, ==, !=, 和+, -, *, /
陸續完成<<和>>, [],+=,-=,*=, /=和左右++, --, 正負號+,-
最後修改主程式完成
first＝2/3+5/7*3/5
second=(7/2-5/6)/(5/7)


輸出說明：
輸出first和second, 以及++first和--second, 最後比較++first和--second的大小

範例輸出：
first=23/21
second=56/15
++first=44/21
--second=41/15
44/21<41/15
*/