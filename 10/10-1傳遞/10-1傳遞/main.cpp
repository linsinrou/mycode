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
/*輸入一字串並將其轉換為stringstream進行字串分割，逐項存入一維string陣列中(string word[10])，然後逐項輸出，輸出功能要寫成 printStringArray(string word[], int size)，最後需使用 string 的 length() 功能輸出此字串的長度(包含空白)

輸入說明：
輸入一字串(中間可能會以空白隔開文字)並逐項存入一維string陣列

輸出說明：
逐項輸出string陣列，最後輸出此字串的長度(包含空白)

範例輸入：
Programming is fun

範例輸出：
Programming
is
fun
Length:18


※ 請參考課本範例 ExtractWords.cpp
*/