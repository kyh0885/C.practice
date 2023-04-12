#include <list>
#include <unordered_map>
#include <iostream>
using namespace std;

class LRU {
	// 데이터를 저장할 list
	list<int> LRUList;

	// 참조를 저장할 map
	unordered_map<int, list<int>::iterator> LRUMap;

	// 최대 용량
	int LRUMaxSize;

public:
	LRU(int);
	void refer(int);
	void display();
};




// 클래스가 생성될 때 크기를 선언함.
LRU::LRU(int n)
{
	LRUMaxSize = n;
}

// 요소 x를 참조하는 함수 refer
void LRU::refer(int x)
{
	// 캐시 내에 없을 경우
	if (LRUMap.find(x) == LRUMap.end()) {
		// 캐시가 꽉 찼을 경우
		if (LRUList.size() == LRUMaxSize) {
			int last = LRUList.back();

			// 리스트에서 가장 오래 사용되지 않은 요소 pop
			LRUList.pop_back();

			// 참조도 함께 삭제
			LRUMap.erase(last);
		}
	}

	// 캐시 내에 있을 경우 해당 요소 삭제
	else
		LRUList.erase(LRUMap[x]);

	// 새로운 요소 x를 맨 앞에 push, 참조도 updqte
	LRUList.push_front(x);
	LRUMap[x] = LRUList.begin();
}

// 요소 x를 참조하는 함수 refer
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