//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//	int n, x, y;
//	cin >> n;
//	long long m = 0;
//	vector <vector <int> > E(n, vector <int>(n, 0));
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> E[i][j];
//		}
//	}
//	for (int k = 0; k < n; k++)
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				E[i][j] = min(E[i][j], E[i][k] + E[k][j]);
//	for (int i = 0; i < n; i++)
//	{		
//		for (int j = 0; j < n; j++)
//			cout << E[i][j] << " ";
//		cout << "\n";
//	}
//	return 0;
//}