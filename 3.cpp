// ConsoleApplication10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int f(int n){
	if (n > 2){
		int x,y;
		x= f(n - 1);
		y = f(n - 2);
		cout << x << y;
		return x;
	}
	if(n==1&&n==2)
		return 1;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	cout<<f(n);
	system("pause");
	return 0;
}

