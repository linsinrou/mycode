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
�аѦҽҥ��d��:
Rational.h
Rational.cpp
TestRationalClass.cpp

�Q�βĤQ�|���Ҧ��[��
����4�Ӥ��ƥ��N�զX���|�h�B��
���򧹦�<, <=, >, >=, ==, !=, �M+, -, *, /
���򧹦�<<�M>>, [],+=,-=,*=, /=�M���k++, --, ���t��+,-
�̫�ק�D�{������
first��2/3+5/7*3/5
second=(7/2-5/6)/(5/7)


��X�����G
��Xfirst�Msecond, �H��++first�M--second, �̫���++first�M--second���j�p

�d�ҿ�X�G
first=23/21
second=56/15
++first=44/21
--second=41/15
44/21<41/15
*/