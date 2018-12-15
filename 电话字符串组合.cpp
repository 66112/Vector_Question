#include <iostream>
#include <vector>
using namespace std;

string letterMap[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void CombineStr(const string& digits, int pos, const string str,vector<string>& ret)
{
	if (pos == digits.size())       //pos���ַ�Ϊһ��,posΪstr�ĸ���
	{
		ret.push_back(str);         //ѹ��str
		return;
	}
	string letters = letterMap[digits[pos] - '0'];    // ��ȡ���ֶ�Ӧ���ַ�����
	for (size_t i = 0; i < letters.size(); ++i)       // ѭ����letters���ÿ���ַ�ƥ��
	{
		CombineStr(digits, pos + 1, str + letters[i], ret);
	}
}

vector<string> letterCombinations(string digits) 
{
	vector<string> ret;
	if (digits.empty())
		return ret;
	int pos = 0;
	string str;
	CombineStr(digits, pos, str, ret);
	return ret;
}

int main()
{
	vector<string> ret = letterCombinations("23");
	for (auto x : ret){
		cout << x.c_str() << endl;
	}
	return 0;
}