// 1001_害死人不偿命的(3n+1)猜想.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int n=12;
	//cin >> n;
	int count = 0;
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else n = (3 * n + 1) / 2;
		count++;
	}
	cout << count;
    return 0;
}

