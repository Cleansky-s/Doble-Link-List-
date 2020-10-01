#pragma once
#define Dlinklist
#ifdef Dlinklist

typedef struct dNode {
	int data;
	struct dNode* pre, * next;

}dNode, * DlinkList;

DlinkList insertdL(DlinkList& L);
DlinkList GetlElem(DlinkList L, int e);
bool init_dLinkList(DlinkList& L);

#endif // Dlinklist
