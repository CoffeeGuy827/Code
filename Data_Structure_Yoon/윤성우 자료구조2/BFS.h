#ifndef __BFS__
#define __BFS__

#include "������ �׷���.h"
#include "�⺻ ���� ����Ʈ.h"
#include "�迭 ��� ���� ť.h"

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
	bool VisitVertex(int visitV) {
		if (visitInfo[visitV] == 0) {
			visitInfo[visitV] = 1;
			//�湮�� ������ �̸��� ���
			return true;
		}
		return false;
	}
	void BFShowGraphVertax(int startV) {
		CQueue queue;
		int visitV = startV;
		int nextV;

		this->VisitVertex(visitV);

		while (adjList[startV].LFirst() == true) {
			nextV = adjList[startV].cur->data;

			if (this->VisitVertex(nextV) == true)
				queue.Enqueue(nextV);

			while (adjList[visitV].LNext() == true) {
				if (this->VisitVertex(nextV) == true)
					queue.Enqueue(nextV);
			}

			if (queue.QISEmpty() == true)
				break;
			else
				visitV = queue.Dequeue();
		}

		memset(visitInfo, 0, sizeof(int)*numV);
	}
	
};
#endif // !__BFS__
