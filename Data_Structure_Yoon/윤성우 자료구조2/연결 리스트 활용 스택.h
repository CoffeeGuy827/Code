#ifndef __���Ḯ��ƮȰ�뽺��__
#define __���Ḯ��ƮȰ�뽺��__

#include "������ ���� ���� ����Ʈ.h"


class Stack {
public:
	CLinkedList list;

	bool SIsEmpty() {
		if (list.LCount() == 0)
			return true;
		else
			return false;
	}
	void SPush(int data) {
		list.LInsertFront(data);
	}
	int SPop() {
		int subdata = -99999;
		if (list.LFirst()) {
			subdata = list.LRemove();
		}

		return subdata;
	}
	int SPeek() {
		if (list.LFirst()) {
			return list.cur->data;
		}
	}
};
#endif // !__���Ḯ��ƮȰ�뽺��__
