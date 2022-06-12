#include <iostream>
#include <string>
#include "Date.h"
#include "StuCard.h"

using namespace std;

double* classAver(StuCard arr[5], int a)
{
	double* y = new double[4];
	for (int i = 0; i < 3; i++)
	{
		double x = 0;
		for (int j = 0; j < a; j++)
		{
			x += arr[j].getScore(i);
		}
		y[i] = x / 5.0;
	}
	return y;
}

int main()
{
	Date birthday1(3, 20, 1997);
	Date birthday2(5, 20, 1995);
	Date birthday3(2, 18, 2007);
	Date birthday4(11, 8, 2003);
	
	StuCard a("Jerry", 1, 80.0, 70.0, 90.0, birthday1);
	StuCard b("John", 1, 85.0, 77.0, 95.0, birthday2);
	StuCard c("Mary", 0, 83.0, 75.0, 70.0, birthday3);
	StuCard d("Tom", 1, 73.0, 95.0, 67.0, birthday4);

	string name;
	bool sex;
	double arr[3], * aver;
	int x, y, z;
	cin >> name >> sex;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	cin >> x >> y >> z;

	Date birthday5(x, y, z);
	StuCard e(name, sex, arr[0], arr[1], arr[2], birthday5);
	StuCard q[5] = { a,b,c,d,e };
	
	for (int i = 0; i < 5; i++)
	{
		q[i].printCard();
	}
	
	aver = classAver(q, 5);
	cout << "Average:" << aver[0] << "," << aver[1] << "," << aver[2] << endl;
}



/*
�Ф��}�ɮפ覡�]�p�����O Date �P StuCard:

Date ���O�� data fields(private):
���int month�B
���int day�B
�~��int year

StuCard ���O�� data fields(private):
�m�Wstring name�B
�ʧO bool sex�B
�T�����double scoreAry[3]�B
�ͤ�Date birthday�C

Date ���O���г]�p�A�� constructor �M function:
setMonth(int)�BsetDay(int)�BsetYear(int)
getMonth(): int�BgetDay(): int�BgetYear(): int

Student ���O���г]�p�A�� constructor �M function:
setName(string)�B setSex(bool)�B setScore(int, double)�B setDate(Date)
getName(): string�B getSex(): bool�B getScore(int): double�B getDate(): Date
average(): double �p��T�쥭��
getAge(int): int �p��~�� (���~��2020�~)
printCard(): void �C�L�ӤH�A�]�A�G�m�W�B�ʧO�B���Z�B�ͤ�B����

�D�{�������@�Ө�ƭn�p��C�쪺����
double* classAver(StuCard[], int)

��J�����G
�D�{�����إ�4�ӤH����ơA��T�p�U�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997
John, 1, 85.0, 77.0, 95.0, 5/20/1995
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003
�M��A��J�@�խӤH��ƫإ߲�5�ӤH

��X�����G
�z�LprintCard()��X5�ո�ơA�æb�̫��X�C�쪺����

�d�ҿ�J�G
Claire 0 88.0 79.0 71.0 9 1 2000

�d�ҿ�X�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 23
John, 1, 85.0, 77.0, 95.0, 5/20/1995, 85.7, 25
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007, 76.0, 13
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003, 78.3, 17
Claire, 0, 88.0, 79.0, 71.0, 9/1/2000, 79.3, 20
Average: 81.8, 79.2, 78.6


�� get function �Ьһݨϥ� const�C
*/