// 双链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include"Dlink.h"
using namespace std;
int main()
{
	DlinkList L;
	init_dLinkList(L);
	insertdL(L);
	int a[100];
	for (int i = 0; i <= 15; i++) {
		DlinkList P;
		int a[100];
		P = GetlElem(L, i + 1);
		if (P == NULL) {
			break;
		}; 
		a[i] = P->data;
		cout << a[i] << endl;
	}
}

