#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int>& v, int start, int end)
{
	if (start >= end){
		return;
	}
	int key = v[start];
	int i = start;
	int j = end - 1;
	while (i != j)
	{
		while (i < j&&v[j] >= key){
			j--;
		}
		while (i < j&&v[i] <= key){
			i++;
		}
		swap(v[i], v[j]);
	}
	swap(v[i], v[start]);
	QuickSort(v, start, i);
	QuickSort(v, i + 1, end);
}
int Find(vector<int>& v)
{
	QuickSort(v, 0, v.size());             //先排序
	int mid = v.size() / 2;                //再取中
	return v[mid];
}
int main()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	cout << Find(v) << endl;
	return 0;
}