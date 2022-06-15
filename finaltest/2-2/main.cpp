#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include "InformationCard.h"
using namespace std;

void display(InformationCard& InformationCard)
{
	cout << InformationCard.getName() << " ";
	cout << InformationCard.getAge() << " "; 
	cout << fixed << setprecision(2) << InformationCard.getWeight() << " " << InformationCard.getHeight() << endl;
}

int main()
{
	fstream io;
	io.open("Identity.bin", ios::out | ios::binary);
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
		io.write(reinterpret_cast<char*>(&a[i]), sizeof(InformationCard));
	}
	io.close();

	io.open("Identity.bin", ios::in | ios::binary);
	InformationCard na[4];
	for (int i = 0; i < 4; i++)
	{
		io.read(reinterpret_cast<char*>(&na[i]), sizeof(InformationCard));
		display(na[i]);

	}
	io.close();

}

/*
�ХH���}�ɮפ覡�]�p���OInformationCard

InformationCard���O�� data fields(private):
�m�W char name[25] �B �~�� int age �B�魫double weight�B ����double height

InformationCard���O���г]�p�A�� constructor �M function:
setName(string)�BsetAge(int)�BsetWeight(double)�BsetHeight(double)�B
getName(): string�BgetAge():int�BgetWeight: double�BgetHeight: double



�M��H�H���G���ɪ��覡�g�J�A�ɮצW�١uIdentity.bin�v�C
�çQ�Φ��ɮ�Ū�J�C����ơA��ܦb�ù��W


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



p.s:��include "cstring" �ýФŨϥ� strcpy_s �бĥ� strcpy
*/