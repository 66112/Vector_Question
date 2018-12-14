#include <iostream>
#include <vector>
using namespace std;
״̬ת�Ʒ��� �� sum[i] = max{sum[i-1]+a[i],a[i]}
int FindGreatestSumOfSubArray(vector<int> array) {
		int cursum = array[0];
		int maxsum = array[0];
		for (int i = 1; i<array.size(); i++){
			cursum += array[i];           
			if (cursum < array[i]){      //����ǰ������֮��С�ڵ�ǰԪ��
				cursum = array[i];       //�����������
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