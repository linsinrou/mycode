#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex a(3, 4);
	Complex b(2, -4);
	Complex c(3, -1);
	Complex d(4, 3);
	Complex e(5, 6);

	Complex first = a + (b * c);
	Complex second = d - e;
	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
	cout << "++first=" << ++first << endl;
	cout << "--second=" << --second << endl;

}

/*
以一般function: add, subtract, multiply, toString
和建構者Complex(), Complex(a,b)
陸續完成+, -, *,<<和>>,[],+=,-=,*=和左右++, --, 正負號+,-
最後修改主程式完成
first＝(3+4i)+(2-4i)*(3-i)
second=(4+3i)-(5+6i)

<<：輸出答案
>>：輸入2數分別更改實數及虛數
[]：[0]取得實數、[1]取得虛數
+：1*(a+bi)
-：-1*(a+bi)

輸出說明：
輸出first和second, 以及++first和--second

範例輸出：
first=5-10i
second=-1-3i
++first=6-10i
--second=-2-3i
*/