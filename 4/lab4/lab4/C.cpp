//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector <int> Match(255, -1);
//bool dfs(int v, vector<int>& used, vector<vector<int>>& E)
//{
//	if (used[v])
//		return false;
//	used[v] = true;
//	for (int u = 0; u < E[v].size(); u++)
//	{
//		if(E[v][u])
//			if (Match[u] == -1 || dfs(Match[u], used, E))
//			{
//				Match[u] = v;
//				return true;
//			}
//	}
//	return false;
//}
//
//void dfs2(int v, vector<vector<int>>& E, vector<int>& usedL, vector<int>& usedR, int mode, int m, int n)
//{
//	if (mode == 1)
//	{
//		if (usedL[v])
//			return;
//		usedL[v] = true;
//		for (int u = m; u < n + m; u++)
//		{
//			//cout << "sth1" << v;
//			if (E[v][u]) {
//				//cout << "byak";
//				dfs2(u, E, usedL, usedR, (mode % 2 + 1), m, n);
//			}
//		}
//	}
//	else{
//		if (usedR[v])
//			return;
//		usedR[v] = true;
//		
//		for (int u = 0; u < m; u++)
//		{
//			//cout << "sth2" << v;
//			if (E[v][u]) {
//				//cout << "krya";
//				dfs2(u, E, usedL, usedR, (mode % 2 + 1), m, n);
//			}
//			
//		}
//	}
//	
//	return;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int k;
//	cin >> k;
//	for(int i = 0; i < k; i++)
//	{
//		int n, m;
//		cin >> m >> n;
//		vector <vector<int>> E(m, vector <int> (n, 1));
//		vector <vector<int>> EOriented(n + m, vector <int>(n + m, 0));
//		for (int i = 0; i < Match.size(); i++)
//			Match[i] = -1;
//		for (int i = 0; i < m; i++)
//		{
//			int u;
//			cin >> u;
//			while (u != 0)
//			{
//				E[i][u - 1] = 0;
//				cin >> u;
//			}
//		}
//
//		for (int i = 0; i < m; i++)
//		{
//			vector <int> used(m);
//			dfs(i, used, E);
//		}
//
//		vector <int> freeV(m, 1);
//
//		/*cout << "kurlicin/n";
//		for (int i = 0; i < n; i++)
//				{
//					if (Match[i] > -1)
//						cout << Match[i] + 1 << " " << i + 1 << "\n";
//				}
//		cout << "kurlicout/n";*/
//		for (int i = 0; i < m; i++)
//		{
//			for (int u = 0; u < E[i].size(); u++)
//			{
//				if (E[i][u])
//				{
//					if (Match[u] == i) {
//						EOriented[m + u][i] = 1;
//						freeV[i] = 0;
//					}
//					else
//					{
//						EOriented[i][m + u] = 1;
//					}
//				}
//			}
//		}
//		/*for (int i = 0; i < n + m; i++)
//		{
//			for (int j = 0; j < n + m; j++)
//				cout << EOriented[i][j] << " ";
//			cout << "\n";
//		}*/
//		vector <int> usedL(m);
//		vector <int> usedR(m + n);
//
//		for (int v = 0; v < m; v++)
//		{
//			if (freeV[v]) {
//				dfs2(v, EOriented, usedL, usedR, 1, m, n);
//			}
//		}
//
//		int countL = 0, countR = 0;
//		vector<int> ans;
//		for (int i = 0; i < m; i++)
//			if (usedL[i])
//			{
//				countL++;
//				ans.push_back(i + 1);
//			}
//		for (int i = m; i < m + n; i++)
//			if (!usedR[i])
//			{
//				countR++;
//				ans.push_back(i - m + 1);
//			}
//		//cout << "krya"; for (int i = 0; i < m; i++) cout << usedL[i] << " ";
//		//cout << "\n";
//		//cout << "krya"; for (int i = 0; i < m + n; i++) cout << usedR[i] << " ";
//		cout << countL + countR << "\n";
//		cout << countL << " " << countR << "\n";
//		for (int i = 0; i < countL; i++)
//			cout << ans[i] << " ";
//		cout << "\n";
//		for (int i = countL; i < countL + countR; i++)
//			cout << ans[i] << " ";
//		cout << "\n";
//	}
//	return 0;
//}