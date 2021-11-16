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
//	int n, m, k, s, u, v, w;
//	cin >> n >> m >> k >> s;
//	vector <vector <pair <int, ll>> > RE(n);
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		RE[v - 1].push_back(make_pair(u - 1, w));
//	}
//
//	vector <vector <ll>> dist(n, vector <ll> (k + 1, INT_MAX));
//	dist[s - 1][0] = 0;
//
//	for (int h = 1; h <= k; h++)
//		for (int i = 0; i < n; i++)
//		{
//			//dist[v][k] = dist[v][k - 1];
//			for (auto pair : RE[i])
//			{
//				v = i;
//				u = pair.first;
//				w = pair.second;
//				if(dist[u][h - 1] != INT_MAX)
//					dist[v][h] = min(dist[v][h], dist[u][h - 1] + w);
//				//cout << dist[v][h] << " " << v << " " << h << " " << u << " ";
//			}
//
//		}
//	for (int i = 0; i < n; i++)
//		if (dist[i][k] != INT_MAX) cout << dist[i][k] << "\n";
//		else cout << -1 << "\n";
//	return 0;
//}