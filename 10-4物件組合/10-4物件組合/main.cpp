#include <iostream>
#include "Date.h"
#include "Student.h"
#include <string>
using namespace std;

int main()
{
	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);

	string a;
	int b, c, d;
	cin >> a >> b >> c >> d;
	Date e(b, c, d);
	student1.setName(a);
	student2.setDate(e);

	student1.print();
	student2.print();

	return 0;
}


/*�Q�ΤW�Ǵ� Deitel �ҥ��d�� 10.8 �� Date ���O�A�A�Ѧ� Deitel �ҥ��d��10.10 �P 10.11 ���Ϊk�C

�ХH���}�����ɮפ覡�]�p�����O Date �P Student :

Date ���O�� data fields(private): month(int)�Bday(int)�Byear(int)

Student ���O�� data fields(private): name(string)�BbirthDay(Date)�Bscore(int)

Date ���O���г]�p�A��غc�̩M function: setMonth�BsetDay�BsetYear�BgetMonth�BgetDay�BgetYear�Bprint ( print ���\�ର��X�y��z�B�y��z�B�y�~�z )

Student ���O���г]�p�A��غc�̩M function: setName�BgetName�BsetDate�BgetDate�BsetScore�BgetScore�Bprint


��J�����G
�D�{���إߨ�� Date ���� birth1(6, 1, 1999) �Bbirth2(10, 8, 1997)�A��D�{���A�إߨ�� Student ���� student1("John", birth1, 90) �Mstudent2("Marry", birth2, 80)�A�M���J�W�r(string)�B�~(int)�B��(int)�B��(int)�A���O�ק� student1 ���W�r�M�ק� student2 ���ͤ�


��X�����G
�̫�Q�� Studen ���󤤪� print �i���X�C


�d�ҿ�J�G
Jerry 5 4 1991

�d�ҿ�X�G
Jerry 6/1/1999 90
Marry 5/4/1991 80



�� �D�{���]�i�H�ϥ� student1("John", Date(6, 1, 1999), 90) ���覡�إߪ���Cget function �Ьһݨϥ� const�C
*/