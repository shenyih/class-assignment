// ConsoleApplication11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int p(int x, int n){
	if (n == 0){
		return 1;
	}
	else	if (n == 1){
		return x;
	}
	else if (n > 1){
		int y;
		y = ((2 * n - 1)*x*p(x, n - 1) - (n - 1)*p(x, n - 2)) / n;
		return y;
	}


}
int _tmain(int argc, _TCHAR* argv[])
{
	int x, n;
	cin >> x >> n;
	cout << p(x, n);
	return 0;
}

