#include <iostream>
#include <vector>

using namespace std;
vector <int> Match(255, -1);
bool dfs(int v, vector<int>& used, vector<vector<int>>& E) 
{
	if (used[v])
		return false;
	used[v] = true;
	for (int u : E[v])
	{
		if (Match[u] == -1 || dfs(Match[u], used, E))
		{
			Match[u] = v;
			return true;
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, v;
	cin >> n >> v;
	vector <vector<int>> E(n);


	for (int i = 0; i < n; i++)
	{
		char h1, h2, m1, m2, dv;
		int x, y;
		cin >> h1 >> h2 >> dv >> m1 >> m2 >> x >> y;
		int h = h1 * 10 + h2;
		int m = h*60 + m1 * 10 + m2;
		while (u != 0)
		{
			E[i].push_back(u - 1);
			cin >> u;
		}
	}
	
	for (int i = 0; i < n; i++) 
	{
		vector <int> used(n);
		dfs(i, used, E);
	}

	int count = 0;
	for (int i = 0; i < m; i++)
	{
		if (Match[i] > -1)
			count++;
	}
	cout << count << "\n";
	for (int i = 0; i < m; i++)
	{
		if (Match[i] > -1)
			cout << Match[i] + 1 << " " << i + 1 << "\n";
	}

	return 0;
}