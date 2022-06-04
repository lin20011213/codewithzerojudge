/*
題目:https://zerojudge.tw/ShowProblem?problemid=a015

內容
已知一(m x n)矩陣A，我們常常需要用到另一個將A中之行與列調換的矩陣。這個動作叫做矩陣的翻轉。舉例來說，若

A =	[	3	1	2	]
		8	5	4
則

AT =	[	3	8	]
		1	5
		2	4
現在 請您針對所讀取到的矩陣進行翻轉。

*/

#include<iostream>
using namespace std;
int main() {
	int x, y;
	int a[100][100];
	while (cin >> x >> y) {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				cin >> a[i][j];
			}
		}
		for (int j = 0; j < y; j++) {
			for (int i = 0; i < x; i++) {
				cout << a[i][j];
			}
			cout << "\n";
		}
	}
}