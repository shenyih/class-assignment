// �¶�.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout<<"�¶�Ϊ"<<wendu(F);
	return 0;
}

