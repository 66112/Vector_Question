#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
	if (nums.empty())
		return 0;
	int pos = 1;      //��ָ����ɾ���Ĳ�ͬԪ�صĺ�һ��
	for (int i = 0; i < nums.size(); i++){ 
		for (int j = i + 1; j < nums.size(); j++){
			if (nums[i] != nums[j]){
				nums[pos++] = nums[j];
				i = j-1;       //����iҪ��j����ʼ�ߣ������ϱ߻�Ҫ++i;
				break;
			}
		}
	}
	return pos;
}
int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	int ret = removeDuplicates(nums);
	for (int i = 0; i < ret; i++){
		cout << nums[i] << endl;
	}
	return 0;
}