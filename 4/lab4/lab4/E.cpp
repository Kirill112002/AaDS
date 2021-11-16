//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector <int> Match(25555, -1);
//bool dfs(int v, vector<int>& used, vector<vector<int>>& E) 
//{
//	if (used[v])
//		return false;
//	used[v] = true;
//	for (int u : E[v])
//	{
//		if (Match[u] == -1 || dfs(Match[u], used, E))
//		{
//			Match[u] = v;
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int n, m, a, b;
//	cin >> n >> m >> a >> b;
//
//	vector <vector<int>> E(n*m + 1);
//	vector <vector<int>> Board(n, vector<int> (m));
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			char c;
//			cin >> c;
//			if (c == '*')
//				Board[i][j] = 1;
//			else
//				Board[i][j] = 0;
//		}
//	}
//	int ostavsheesya = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (Board[i][j]) {
//
//				ostavsheesya++;
//				if ((i + j + 1) % 2)
//				{
//					int k = i*m + j;
//					if (i > 0 && Board[i - 1][j])
//						E[k].push_back(k - m);
//					if (j > 0 && Board[i][j - 1])
//						E[k].push_back(k - 1);
//					if (j < m - 1 && Board[i][j + 1])
//						E[k].push_back(k + 1);
//					if (i < n - 1 && Board[i + 1][j])
//						E[k].push_back(k + m);
//				}
//			}
//		}
//	}
//	
//	for (int i = 0; i < n * m; i ++) 
//	{
//		vector <int> used(n * m);
//		dfs(i, used, E);
//	}
//
//	if (a >= 2 * b)
//	{
//		cout << b * (ostavsheesya);
//		return 0;
//	}
//	/*cout << "krya";
//	for (int i = 0; i < n * m + 1; i++)
//		{
//			for (auto u : E[i])
//				cout << i << ":" << u << " ";
//			cout << "\n";
//		}*/
//	int count = 0;
//	for (int i = 0; i < n * m + 1; i++)
//	{
//		//cout << Match[i] << " ";
//		if (Match[i] > -1)
//		{
//			//cout << i << " ";
//			count++;
//		}
//	}
//	cout << count * a + (ostavsheesya - 2 * count) * b << "\n";
//
//	return 0;
//}