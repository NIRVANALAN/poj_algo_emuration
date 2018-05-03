#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int x = 10, y = 10;
	vector<vector<int>> mat(y);
	auto count = 0;



	for (auto i = 0; i < y; i++)
		mat[i].resize(x);
	for(auto i=0;i <10;i++)
		for(auto j=0;j<10;j++)
		{
			if ((i + 1) % 2 == 1)
				mat[i][j] = ++count;
			else mat[i][mat[0].size() - 1 - j] = ++count;
		}
	cout << mat[9][0]<<endl;

	system("pause");
	return 0;
}
