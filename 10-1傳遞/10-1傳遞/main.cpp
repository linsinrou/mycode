#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void printStringArray(string word[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << word[i] << endl;
    }

}
int main()
{
    int i = 0;
    string a;
    getline(cin, a);
    stringstream ss(a);
    string word[10];
    while (!ss.eof())
    {
        ss >> word[i];
        i++;
    }
    printStringArray(word, i);
    cout << "Length:" << a.length();
}
/*��J�@�r��ñN���ഫ��stringstream�i��r����ΡA�v���s�J�@��string�}�C��(string word[10])�A�M��v����X�A��X�\��n�g�� printStringArray(string word[], int size)�A�̫�ݨϥ� string �� length() �\���X���r�ꪺ����(�]�t�ť�)

��J�����G
��J�@�r��(�����i��|�H�ťչj�}��r)�óv���s�J�@��string�}�C

��X�����G
�v����Xstring�}�C�A�̫��X���r�ꪺ����(�]�t�ť�)

�d�ҿ�J�G
Programming is fun

�d�ҿ�X�G
Programming
is
fun
Length:18


�� �аѦҽҥ��d�� ExtractWords.cpp
*/