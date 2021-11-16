//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//	int n, u, v, w;
//	cin >> n;
//	vector <vector <int>> E(n, vector <int>(n));
//	vector <int> prev(n);
//	vector <int> path;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			u = i;
//			v = j;
//			cin >> w;
//			E[u][v] = w;
//		}
//	}
//
//	vector <int> dist(n, 100000);
//	dist[0] = 0;
//	bool flag = true;
//	int count = 0;
//	for (int count = 0; count < n; count++)
//	{
//		flag = true;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				v = j;
//				u = i;
//				w = E[i][j];
//				if (w < 100000)
//					if (dist[v] > dist[u] + w)
//					{
//						dist[v] = dist[u] + w;
//						flag = false;
//						prev[v] = u;
//					}
//			}
//		if (flag)
//			break;
//	}
//	if (flag)
//	{
//		cout << "NO";
//		return 0;
//	}
//	cout << "YES\n";
//	for (int i = 0; i < n; i++)
//		v = prev[v];
//	path.push_back(v + 1);
//	for (int i = prev[v]; !(i == v && path.size() > 1); i = prev[i]) {
//		path.push_back(i + 1);
//	}
//
//	cout << path.size() << "\n";
//
//	reverse(path.begin(), path.end());
//
//	for (int i = 0; i < path.size(); i++)
//		cout << path[i] << " ";
//
//	return 0;
//}