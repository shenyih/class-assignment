// 温度.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int wendu(int F){
int c;
c=(F-32)*5/9;
	return c;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int F;
	cin>>F;
	cout<<"温度为"<<wendu(F);
	return 0;
}

