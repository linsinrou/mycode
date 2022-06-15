#include <iostream>
#include <cstring>
#include <string>
#include "InformationCard.h"
using namespace std;


int main()
{
	ofstream output;
	output.open("Identity.txt");
	InformationCard a[4];
	string b[4];
	int c[4];
	double d[4], e[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> b[i] >> c[i] >> d[i] >> e[i];
		a[i] = InformationCard(b[i], c[i], d[i], e[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		a[i].writeToFile(output);
	}
	output.close();

	ifstream input;
	input.open("Identity.txt");
	InformationCard na[4];
	for (int i = 0; i < 4; i++)
	{
		na[i].readFromFile(input);
		na[i].writeToFile(cout);

	}
	input.close();

}

/*
�ХH���}�ɮפ覡�]�p���OInformationCard

InformationCard���O�� data fields(private):
�m�W char[25] name �B �~�� int age �B�魫double weight�B ����double height

Student ���O���г]�p�A�� constructor �M function:
setName(string)�BsetAge(int)�BsetWeight(double)�BsetHeight(double)�B
getName(): string�BgetAge():int�BgetWeight: double�BgetHeight: double

�M��b����̼W�[ readFromFile �M writeToFile ���\��
�H�`�Ǥ�r�ɪ��覡�g�J�A�ɮצW�١u"Identity.txt"�v�C

��J�����G
�п�J�|����ơA�ñN����Ƽg�J�ɮסC

��X�����G
Ū���ɮרæL�X��ơC

��J�d�ҡG
Kenny 26 98.88 44.33
Anna 56 42.38 96.07
Jerry 64 55.14 62.76
Ava 40 41.37 76.13

��X�d�ҡG
Kenny 26 98.88 44.33
Anna 56 42.38 96.07
Jerry 64 55.14 62.76
Ava 40 41.37 76.13


p.s:�п�X��p���I����
p.s:��include "cstring" �ýФŨϥ� strcpy_s �бĥ� strcpy
*/