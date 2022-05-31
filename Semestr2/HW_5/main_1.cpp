#include<bits/stdc++.h>
using namespace std;

//1. знайти та реалізувати алгоритм обчислення відстані між словами.
int lavenshtain(const string& s1, const string& s2)
{
	int len1 = s1.size(), len2 = s2.size();
	vector<vector<int>> d(len1 + 1, vector<int>(len2 + 1));

	d[0][0] = 0;
	for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
	for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

	for(int i = 1; i <= len1; ++i)
		for(int j = 1; j <= len2; ++j)
                      d[i][j] = min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });
	return d[len1][len2];
}

int main() {

}