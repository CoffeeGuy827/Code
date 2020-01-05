#ifndef __����Ž��Ʈ��3__
#define __����Ž��Ʈ��3__

#include "AVLƮ��.h"

BTreeNode* BSTInsert(BTreeNode** pRoot, int data) {
	if (*pRoot == nullptr) {
		*pRoot = MakeBTreeNode();
		SetData(*pRoot, data);
	}
	else if (data < GetData(*pRoot)) {
		BSTInsert(&((*pRoot)->left), data);
		*pRoot = Rebalance(pRoot);
	}
	else if (data > GetData(*pRoot)) {
		BSTInsert(&((*pRoot)->right), data);
		*pRoot = Rebalance(pRoot);
	}
	else
		return nullptr;

	return *pRoot;
}
BTreeNode* BSTRemove(BTreeNode** pRoot, int data);
#endif // !__����Ž��Ʈ��3__
