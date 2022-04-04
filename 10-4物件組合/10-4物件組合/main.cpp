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


/*利用上學期 Deitel 課本範例 10.8 之 Date 類別，再參考 Deitel 課本範例10.10 與 10.11 的用法。

請以分開五個檔案方式設計兩類別 Date 與 Student :

Date 類別的 data fields(private): month(int)、day(int)、year(int)

Student 類別的 data fields(private): name(string)、birthDay(Date)、score(int)

Date 類別中請設計適當建構者和 function: setMonth、setDay、setYear、getMonth、getDay、getYear、print ( print 的功能為輸出『月』、『日』、『年』 )

Student 類別中請設計適當建構者和 function: setName、getName、setDate、getDate、setScore、getScore、print


輸入說明：
主程式建立兩個 Date 物件 birth1(6, 1, 1999) 、birth2(10, 8, 1997)，於主程式再建立兩個 Student 物件 student1("John", birth1, 90) 和student2("Marry", birth2, 80)，然後輸入名字(string)、年(int)、月(int)、日(int)，分別修改 student1 的名字和修改 student2 的生日


輸出說明：
最後利用 Studen 物件中的 print 進行輸出。


範例輸入：
Jerry 5 4 1991

範例輸出：
Jerry 6/1/1999 90
Marry 5/4/1991 80



※ 主程式也可以使用 student1("John", Date(6, 1, 1999), 90) 的方式建立物件。get function 請皆需使用 const。
*/