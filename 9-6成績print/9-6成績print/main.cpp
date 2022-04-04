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
�ХH���}�ɮפ覡�]�pScore�ʸ˪���
data fields(private)�Gstring name, int math
function:setName, setMath, getName, getMath

��J�����G�D�{���إߨ��Score����score1("John", 90)�Mscore2("Mary", 80)�A�M��M���J2�հѼơA�Nscore1���W�r�ק令�Ĥ@�ժ��󪺦W�r�H�αNscore2�����Z�ק令�ĤG�ժ��󪺦��Z�C

��X�����G��X�ק�᪺�⪫��W�r�P���Z�C

�d�ҿ�J�G
Jerry 70
May 85

�d�ҿ�X�G
Jerry 90
Mary 85

�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/