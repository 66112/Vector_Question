#include <iostream>
#include <vector>
using namespace std;
状态转移方程 ： sum[i] = max{sum[i-1]+a[i],a[i]}
int FindGreatestSumOfSubArray(vector<int> array) {
		int cursum = array[0];
		int maxsum = array[0];
		for (int i = 1; i<array.size(); i++){
			cursum += array[i];           
			if (cursum < array[i]){      //若当前子序列之和小于当前元素
				cursum = array[i];       //则更新子序列
			}
			if (cursum > maxsum)
			{
				maxsum = cursum;
			}
		}
		return maxsum;
}
int main()
{
	vector<int> array;
	array.push_back(1);
	array.push_back(-2);
	array.push_back(3);
	array.push_back(10);
	array.push_back(-4);
	array.push_back(7);
	array.push_back(2);
	array.push_back(-5);
	cout << FindGreatestSumOfSubArray(array) << endl;
}