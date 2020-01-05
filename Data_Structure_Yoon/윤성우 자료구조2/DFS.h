#ifndef __DFS__
#define __DFS__

#include "�⺻ ���� ����Ʈ.h"
#include "�迭 ��� ����.h"

enum { A, B, C, D, E, F, G, H, I, J };

class ALGraph {
public:
	int numV;
	int numE;
	LinkedList* adjList;
	int* visitInfo;

	ALGraph(int nv) : numV(nv), numE(0) {
		adjList = new LinkedList[nv];
		visitInfo = new int[nv]; // DFS �����ϸ鼭 ������ ������ �׷��� �ڵ忡�� �߰��� ��

		memset(visitInfo, 0, sizeof(int)*numV);
	}
	void GraphDestroy() {
		if (adjList != nullptr)
			delete adjList[];

		if (visitInfo != nullptr)// DFS �����ϸ鼭 ������ ������ �׷��� �ڵ忡�� �߰��� ��
			delete visitInfo;
	}
	void AddEdge(int fromV, int toV) {

	}
	void ShowGraphEdgeInfo();
	void DFShowGraphVertax(int startV) {
		Stack stack;
		int visitV = startV;
		int nextV;

		this->VisitVertex(visitV);
		stack.SPush(visitV);

		while (adjList[visitV].LFirst() == true) {
			int visitFlag = false;

			if (this->VisitVertex(nextV) == true) {
				stack.SPush(visitV);
				visitV = nextV;
				visitFlag = true;
			}
			else {
				while (adjList[visitV].LNext() == true) {
					if (this->VisitVertex(nextV) == true) {
						stack.SPush(visitV);
						visitV = nextV;
						visitFlag = true;
						break;
					}
				}
			}

			if (visitFlag == false) {
				if (stack.SIsEmpty() == true)
					break;
				else
					visitV = stack.SPop();
			}
		}
	}
	bool VisitVertex(int visitV) {
		if (visitInfo[visitV] == 0) {
			visitInfo[visitV] = 1;
			//�湮�� ������ �̸��� ���
			return true;
		}
		return false;
	}
	void DFSShowGraphVertex(int startV) {
		Stack stack;
		int visitV = startV;
		int nextV = -1;

		this->VisitVertex(visitV);
		stack.SPush(visitV);

		while (adjList[visitV].LFirst() == true) {
			nextV = adjList[visitV].LFirst();
			int visitFlag = false;

			if (this->VisitVertex(nextV) == true) {
				stack.SPush(visitV);
				visitV = nextV;
				visitFlag = true;
			}
			else {
				while (adjList[visitV].LNext() == true) {
					nextV = adjList[visitV].cur->data;

					if (this->VisitVertex(nextV) == true) {
						stack.SPush(visitV);
						visitV = nextV;
						visitFlag = true;
						break;
					}
				}
			}
			if (visitFlag == false) {
				if (stack.SIsEmpty() == true)
					break;
				else
					visitV = stack.SPop();
			}
		}
		memset(visitInfo, 0, sizeof(int)*numV);
		
	}
};


#endif