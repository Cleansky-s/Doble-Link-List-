#include <iostream>

typedef struct dNode {
	int data;
	struct dNode* pre,* next;

}dNode,*DlinkList;


bool init_dLinkList(DlinkList& L) {
	L = (dNode*)malloc(sizeof(dNode));
	if (L == NULL) {
		return false;
	}
	L->pre = NULL;
	L->next = NULL;
	return true;
}


DlinkList GetlElem(DlinkList L, int e) {
	DlinkList P;
	P = L;
	for (int i = 1; i <= e; i++) {
		P = L->next;
		L = P;
	};
	return L;
}

DlinkList deleteElem(DlinkList& L,int i ) {
	dNode* P;
	dNode* S;
	L = GetlElem(L, i);
	P = L->next;
	S= L->pre;
	S->next = P;
	P->pre = S;
	return L;
}

DlinkList insertdL(DlinkList& L) {
	dNode* S;
	dNode* P;
	int x;
	std::cin >> x;
	P = L;
	while (P != NULL && x != 9999) {
		S = (dNode*)malloc(sizeof(dNode));
		S->data = x;
		S->next = P->next;
		if (P->next != NULL) {
			P->next->pre = S;
		}; 
		S->pre = P;
		P->next = S;
		P = S;
		std:: cin >> x;
	}
	P->next = NULL;
	return L;
}