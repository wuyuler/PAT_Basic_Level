// 1002_写出这个数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

void int_pinyin(int a) {
	switch (a) {
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	}
}

int main()
{
	
	/*cin >> n;
	int count = 0;
	while (n != 0) {
		count+= n % 10;
		n /= 10;
	}
	cout << count;
	//失败,整数常量太大,转换思维
	*/

	char n[101];
	cin >> n;
	int sum = 0,i=0;
	while (n[i] != '\0') {
		sum += n[i] - '0';
		i++;
	}

	if (sum == 0) {
		int_pinyin(0);
		return 0;
	}
	int b[11],j=0;
	while (sum != 0) {
		
		b[j]= sum % 10;
		sum /= 10;
		++j;
	}
	while (j > 1) {
		int_pinyin(b[--j]);
		cout << " ";
	}
	int_pinyin(b[0]);

    return 0;
}

