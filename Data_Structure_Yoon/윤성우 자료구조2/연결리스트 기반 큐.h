#ifndef __���Ḯ��Ʈ ��� ť__
#define __���Ḯ��Ʈ ��� ť__

#include "�⺻ ���� ����Ʈ.h"

class LQueue {
public:
	Node* front;
	Node* rear;

	LQueue() :front(nullptr),rear(nullptr) {}
	bool QIsEmpty() {
		if (front == nullptr)
			return true;
		else
			return false;
	}
	void Enqueue(int data) {
		Node* newNode = new Node(data);

		if (front == nullptr) {
			front = rear = newNode;
		}
		else {
			rear->next = newNode;
			rear = newNode;
		}
	}
	int Dequeue() {

		if (front == nullptr)
			return 0;
		int subData = front->data;
		Node* subNode = front;
		front = front->next;

		delete subNode;
		return subData;
	}
	int QPeek() {
		return front->data;
	}
};
#endif // !__���Ḯ��Ʈ ��� ť__
