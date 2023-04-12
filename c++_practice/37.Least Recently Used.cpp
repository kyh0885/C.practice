#include <list>
#include <unordered_map>
#include <iostream>
using namespace std;

class LRU {
	// �����͸� ������ list
	list<int> LRUList;

	// ������ ������ map
	unordered_map<int, list<int>::iterator> LRUMap;

	// �ִ� �뷮
	int LRUMaxSize;

public:
	LRU(int);
	void refer(int);
	void display();
};




// Ŭ������ ������ �� ũ�⸦ ������.
LRU::LRU(int n)
{
	LRUMaxSize = n;
}

// ��� x�� �����ϴ� �Լ� refer
void LRU::refer(int x)
{
	// ĳ�� ���� ���� ���
	if (LRUMap.find(x) == LRUMap.end()) {
		// ĳ�ð� �� á�� ���
		if (LRUList.size() == LRUMaxSize) {
			int last = LRUList.back();

			// ����Ʈ���� ���� ���� ������ ���� ��� pop
			LRUList.pop_back();

			// ������ �Բ� ����
			LRUMap.erase(last);
		}
	}

	// ĳ�� ���� ���� ��� �ش� ��� ����
	else
		LRUList.erase(LRUMap[x]);

	// ���ο� ��� x�� �� �տ� push, ������ updqte
	LRUList.push_front(x);
	LRUMap[x] = LRUList.begin();
}

// ��� x�� �����ϴ� �Լ� refer
void LRU::display()
{
	for (auto it = LRUList.begin(); it != LRUList.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;
}





int main()
{
	int s, n;
	int data[50] = { 0 };
	
	cin >> s;
	cin >> n;
	LRU ca(s);

	for (size_t i = 0; i < n; i++)
	{
		cin >> data[i];
		ca.refer(data[i]);
	}
	ca.display();

	return 0;
}