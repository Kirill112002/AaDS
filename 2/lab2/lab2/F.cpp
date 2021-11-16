#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll minim(ll a, ll b)
{
	if (a != LLONG_MAX)
		if (b != LLONG_MAX)
			return a + b;
	return LLONG_MAX;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, m, a, b, c, u, v, w;
	cin >> n >> m;
	vector <vector <pair <int, ll>> > RE(n);

	for (int i = 0; i < m; i++)
	{
		cin >> u >> v >> w;
		RE[v - 1].push_back(make_pair(u - 1, w));
	}
	cin >> a >> b >> c;

	vector <vector <ll>> dista(n, vector <ll> (n, LLONG_MAX));
	vector <vector <ll>> distb(n, vector <ll> (n, LLONG_MAX));
	vector <vector <ll>> distc(n, vector <ll> (n, LLONG_MAX));
	dista[a - 1][0] = 0;
	distb[b - 1][0] = 0;
	distc[c - 1][0] = 0;

	for (int k = 1; k < n; k++)
		for (int i = 0; i < n; i++)
		{
			dista[i][k] = dista[i][k - 1];
			distb[i][k] = distb[i][k - 1];
			distc[i][k] = distc[i][k - 1];
			for (auto pair : RE[i])
			{
				v = i;
				u = pair.first;
				w = pair.second;
				if(dista[u][k - 1] != LLONG_MAX)
					dista[v][k] = min(dista[v][k], dista[u][k - 1] + w);

				if (distb[u][k - 1] != LLONG_MAX)
					distb[v][k] = min(distb[v][k], distb[u][k - 1] + w);

				if (distc[u][k - 1] != LLONG_MAX)
					distc[v][k] = min(distc[v][k], distc[u][k - 1] + w);
				//cout << dist[v][k] << " " << v << " " << k << " " << u << " ";
			}

		}
	a--; b--; c--;
	ll a1 = minim(dista[b][n - 1], distb[c][n - 1]);
	ll a2 = minim(dista[c][n - 1], distc[b][n - 1]);
	ll b1 = minim(distb[a][n - 1], dista[c][n - 1]);
	ll b2 = minim(distb[c][n - 1], distc[a][n - 1]);
	ll c1 = minim(distc[a][n - 1], dista[b][n - 1]);
	ll c2 = minim(distc[b][n - 1], distb[a][n - 1]);

	ll mi = min(min(a1, a2), min(min(b1, b2), min(c1, c2)));
		
	if (mi == LLONG_MAX) cout << -1;
	else cout << mi;
	return 0;
}