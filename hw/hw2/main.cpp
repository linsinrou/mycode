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
�H�@��function: add, subtract, multiply, toString
�M�غc��Complex(), Complex(a,b)
���򧹦�+, -, *,<<�M>>,[],+=,-=,*=�M���k++, --, ���t��+,-
�̫�ק�D�{������
first��(3+4i)+(2-4i)*(3-i)
second=(4+3i)-(5+6i)

<<�G��X����
>>�G��J2�Ƥ��O����Ƥε��
[]�G[0]���o��ơB[1]���o���
+�G1*(a+bi)
-�G-1*(a+bi)

��X�����G
��Xfirst�Msecond, �H��++first�M--second

�d�ҿ�X�G
first=5-10i
second=-1-3i
++first=6-10i
--second=-2-3i
*/