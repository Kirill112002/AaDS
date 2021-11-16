/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int time = 0;
int maxcomps = 0;
vector <int> enter(20002);
vector <int> retur(20002);
vector <int> components(20002);
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
	for (int i = 0; i < E[x].size(); i++)
	{
		pair<int, int> y;
		y = E[x][i];
		if (y.second == preve)
			continue;
		if (!mark[y.first])
		{
			dfs(y.first, E, mark, y.second);
			retur[x] = min(retur[x], retur[y.first]);
		}
		else
		{
			retur[x] = min(retur[x], enter[y.first]);
		}
	}
	return;
}
void comp_maker(int x, vector <vector <pair <int, int> > >& E, int component)
{
	components[x] = component;
	for (int i = 0; i < E[x].size(); i++)
	{
		pair<int, int> y;
		y = E[x][i];
		if (!components[y.first])
		{
			if (retur[y.first] > enter[x])
			{
				maxcomps++;
				comp_maker(y.first, E, maxcomps);
			}
			else
				comp_maker(y.first, E, component);
		}
	}
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
	for (int i = 1; i <= n; i++)
	{
		if (!components[i])
		{
			maxcomps++;
			comp_maker(i, E, maxcomps);
		}
	}
	cout << maxcomps << "\n";
	for (int i = 1; i <= n; i++)
	{
		cout << components[i] << " ";
	}
	return 0;
}*/