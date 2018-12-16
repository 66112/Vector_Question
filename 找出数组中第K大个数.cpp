#include <iostream>
#include <vector>
using namespace std;
void AdjustDown(vector<int>& nums, int num, int pos){
	int parent = pos;
	int child = parent * 2 + 1;
	while (child < num){
		if (child + 1 < num && nums[child] > nums[child + 1]){
			child++;
		}
		if (nums[parent] > nums[child]){
			swap(nums[parent], nums[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}
int HeapSortK(vector<int>& nums, int k){
	vector<int> tmp;
	for (size_t i = 0; i<k; i++){
		tmp.push_back(nums[i]);
	}
	for (int pos = (k - 2) / 2; pos >= 0; pos--)       //建一个K个元素的小堆
	{
		AdjustDown(tmp, k, pos);
	}
	for (size_t i = k; i<nums.size(); i++){        //遍历所有元素，将前K大个元素找出
		if (nums[i]>tmp[0])
		{
			tmp[0] = nums[i];
			AdjustDown(tmp, tmp.size(), 0);
		}
	}
	return tmp[0];                                 //堆顶的就是第K大的
}
int findKthLargest(vector<int>& nums, int k) {
	return HeapSortK(nums, k);
}
int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	v.push_back(6);
	v.push_back(0);
	cout << findKthLargest(v, 4) << endl;
	return 0;
}