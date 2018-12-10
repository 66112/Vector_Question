//#include <iostream>
//#include <vector>
//using namespace std;
//vector<vector<int>> gentater(int rowNum)
//{
//	vector<vector<int>> vv;
//	vv.resize(rowNum);
//	//初始化
//	for (int i = 1; i <= rowNum; i++){
//		vv[i-1].resize(i, 0);               
//		vv[i-1][0] = vv[i-1][i-1] = 1;
//	}
//	if (rowNum <= 2){
//		return vv;
//	}
//	for (int i = 2; i < rowNum; i++){               //从第三行开始加
//		for (int j = 1; j < vv[i].size() - 1; j++){    
//			vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//		}
//	}
//	return vv;
//}
//int main()
//{
//	vector<vector<int>> vv = gentater(2);
//	for (int i = 0; i < vv.size(); i++)
//	{
//		for (int j = 0; j < vv[i].size(); j++)
//		{
//			cout << vv[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}