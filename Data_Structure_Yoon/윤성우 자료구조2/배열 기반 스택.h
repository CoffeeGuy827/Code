#ifndef  __�迭��ݽ���__
#define __�迭��ݽ���__

class Stack {
public:
	int arr[1000];
	int cur_index;
	

	Stack() : cur_index(-1) {}
	bool SIsEmpty() {
		if (cur_index == -1)
			return true;
		else
			return false;
	}
	void SPush(int data) {
		if (cur_index == 999)
			return;

		cur_index++;
		arr[cur_index] = data;
	}
	int SPop() {
		if (this->SIsEmpty()) {
			exit(-1);
		}
		int subData = arr[cur_index];
		cur_index--;
		return subData;
	}
	int SPeek() {
		return arr[cur_index];
	}
};
#endif // ! __�迭��ݽ���__
