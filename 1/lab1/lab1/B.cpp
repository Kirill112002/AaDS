/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int time = 0;
vector <int> enter(20002);
vector <int> retur(20002);
//vector <int> in(1, INT_MAX);
//list <int> q;
vector <int> ans;
bool cycle = false;
void findcycle(int x, vector <vector <int> >& E, vector <int>& mark)//found cycle
{
	mark[x] = 1;
	for (int i = 0; i < E[x].size(); i++)
	{
		int y = E[x][i];
		if (mark[y] == 0)
			findcycle(y, E, mark);
		if (mark[y] == 1)
		{
			cycle = true;
		}
	}
	mark[x] = 2;
	ans.push_back(x);

	return;
}

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
			retur[x]= min(retur[x], enter[y.first]);
		}
	}
	if(retur[x] == enter[x])
		if (preve != -1)
			ans.push_back(preve);

	return;
}
/*
void topsort(int x, vector <list <int> > E)
{
	/*for (int x = 1; x <= n; x++)
		if (!used[x])
			dfs(x, E);
	q.reverse();
	//
	used[x] = 1;
	for (auto y : E[x])
		if (mark[y] == 0)
			topsort(y, E);
	ans.push_back(x);
	return;
}

*
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, m, u, v;
	cin >> n >> m;
	vector <int> used(n + 1, 0);
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
	cout << ans.size() << "\n";
	for (int i = 0; i < n; i++)
		cout <<"krya" << i + 1 << " " << enter[i+1] <<" " << retur[i+1] << "\n";
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	/*cout << "\n";
	for (int i = 1; i <= m; i++)
		cout << enter[i] << " " << retur[i] << "\n";*
	return 0;
}*/