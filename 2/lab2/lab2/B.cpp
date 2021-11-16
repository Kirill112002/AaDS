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
//	int n, m, u, v, w;
//	cin >> n >> m;
//	vector <vector <pair <int, ll>> > E(n);
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v >> w;
//		E[u - 1].push_back(make_pair(v - 1, w));
//		E[v - 1].push_back(make_pair(u - 1, w));
//	}
//
//	vector <ll> dist(n, INT_MAX);
//	dist[0] = 0;
//	bool flag = true;
//	while (true) {
//		flag = true;
//		for (ll i = 0; i < n; i++)
//			for (auto pair : E[i])
//			{
//				v = pair.first;
//				u = i;
//				w = pair.second;
//				if (dist[v] > dist[u] + w)
//				{
//					dist[v] = dist[u] + w;
//					flag = false;
//				}
//			}
//		if (flag)
//			break;
//	}
//	for (int i = 0; i < n; i++)
//		cout << dist[i] << " ";
//	return 0;
//}