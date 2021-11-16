#/*include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int time = 0;
vector <int> enter(20002);
vector <int> retur(20002);
//vector <i nt> in(1, INT_MAX);
//list <int> q;
vector <int> ans;
vector <int> realans;

void dfs(int x, vector <vector <pair <int, int> > >& E, vector <int>& mark, int preve)
{
	mark[x] = 1;
	enter[x] = time;
	retur[x] = time;
	time++;
	int count = 0;
	for (int i = 0; i < E[x].size(); i++)
	{
		pair<int, int> y;
		y = E[x][i];
		if (y.second == preve)
			continue;
		if (!mark[y.first])
		{
			dfs(y.first, E, mark, y.second);
			count++;
			retur[x] = min(retur[x], retur[y.first]);
			if (retur[y.first] >= enter[x])
				if (preve != -1)
					ans.push_back(x);
		}
		else
		{
			retur[x] = min(retur[x], enter[y.first]);
		}
	}
	if (preve == -1)
		if (count >= 2)
			ans.push_back(x);
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, m, u, v;
	cin >> n >> m;
	vector <int> mark(n + 1, 0);
	vector <vector <pair <int, int>> > E(n + 1);
	//vector <list <int> > RE(n + 1);

	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;
		E[u].push_back(make_pair(v, i));
		E[v].push_back(make_pair(u, i));
		//RE[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!mark[i])
			dfs(i, E, mark, -1);
	}
	sort(ans.begin(), ans.end());
	int an = -1;
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i] != an)
		{
			realans.push_back(ans[i]);
		}
		an = ans[i];
	}
	cout << realans.size() << "\n";
	for (int i = 0; i < realans.size(); i++)
	{
		cout << realans[i] << " ";
	}
	return 0;
}*/