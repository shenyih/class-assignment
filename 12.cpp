// 嵌套

#include"stdafx.h"
#include <iostream>
using namespace std;

int fun2(int m){
	return m * m;
}

int fun1(int x, int y){
	return fun2(x) + fun2(y);
}


int main(){
	int a, b;
	cout << "取两个数a和b";
	cin >> a >> b;
	cout << "a和b的平方和为：" << fun1(a, b) << endl;
	return 0;

}