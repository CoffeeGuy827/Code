#ifndef __������׷���__
#define __������׷���__

#include "�⺻ ���� ����Ʈ.h"

enum {A,B,C,D,E,F,G,H,I,J};

class ALGraph {
public:
	int numV;
	int numE;
	LinkedList* adjList;
	
	AlGraph(int numV) : numV(numV), numE(0), adjList(new int[numV]) {
		//������ ����ŭ ����Ʈ �迭 for������ ���鼭 �ʱ�ȭ ex) ���� ���� �Լ�
	}
	void GraphDestroy() {
		if (adjList != nullptr)
			delete adjList;
	}
	void AddEdge(int fromV, int toV) {
		adjList[fromV].LInsert(toV);
		adjList[toV].LInsert(fromV);
		numE += 1;
	}
	viud ShowGraphEdgeInfo() {
		for (int i = 0; i < numV; i++) {
			// A���� ����� ���� �������� ���
		}
	}
};
#endif // !__������׷���__
