// 和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int sum(int x){

	if(x>=0)
		x=x+sum(x-1);
	return x;


}


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cin>>x;
	
	cout<<sum(x);
	system("pause");
	return 0;
}

