//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <set>
//
//using namespace std;
//typedef long long ll;
//
//int mex(set <int>& a)
//{
//	int i = -1;
//	while (true)
//	{
//		i++;
//		if (a.find(i) == a.end())
//			return i;
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//
//	ll n, m, u, v, w;
//	while (cin >> n >> m)
//	{
//		vector <vector <int> > E(n);
//		vector <vector <int> > RE(n);
//		vector <int> eout(n, 0);
//		vector <char> result(n, '?');
//		vector <int> count(n, 0);
//		queue <int> q;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> u >> v;
//			E[u - 1].push_back(v - 1);
//			RE[v - 1].push_back(u - 1);
//			eout[u - 1]++;
//		}
//
//		for (int i = 0; i < n; i++)
//			if (eout[i] == 0)
//			{
//				result[i] = '-';
//				q.push(i);
//			}
//
//		while (!q.empty())
//		{
//			v = q.front();
//			q.pop();
//
//			if (result[v] == '-')
//			{
//				for (auto u : RE[v])
//					if (result[u] == '?')
//					{
//						result[u] = '+';
//						q.push(u);
//					}
//			}
//			else
//			{
//				for (auto u : RE[v])
//				{
//					count[u]++;
//					if (count[u] == eout[u])
//					{
//						result[u] = '-';
//						q.push(u);
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			switch (result[i])
//			{
//			case '-':
//				cout << "SECOND\n";
//				break;
//			case '+':
//				cout << "FIRST\n";
//				break;
//			case '?':
//				cout << "DRAW\n";
//				break;
//			}
//		}
//		cout << "\n";
//	}
//	return 0;
//}