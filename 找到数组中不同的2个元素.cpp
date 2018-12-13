#include <iostream>
#include <vector>
using namespace std;
vector<int> singleNumber(vector<int>& nums) {
	vector<int> v;
	int result = nums[0];
	for (int i = 1; i<nums.size(); i++){
		result ^= nums[i];                  //异或结果
	}
	int num1 = 0, num2 = 0, pos = 0;
	while (((result >> pos) & 1) == 0)            //注意优先级
		pos++;
	for (int i = 0; i<nums.size(); i++){
		if (((nums[i] >> pos) & 1) == 1)
		{
			num1 ^= nums[i];
		}
		else
			num2 ^= nums[i];
	}
	v.push_back(num1);
	v.push_back(num2);
	return v;
}
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v = singleNumber(v);
	for (auto x : v){
		cout << x << endl;
	}
	return 0;
}