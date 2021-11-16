/*#include <iostream>
#include <vector>
using namespace std;

//vector <int> in(1, INT_MAX);
//list <int> q;
vector <int> ans;
bool cycle = false;
void findcycle(int x, vector <vector <int> > &E, vector <int> &mark)//found cycle
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
/*
void dfs(int x, vector <list <int> > E)
{
	used[x] = true;
	for (auto y : E[x])
		if (!used[y])
			dfs(y, E);
	q.push_back(x);

	return;
}

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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, m, u, v;
	cin >> n >> m;
	vector <int> used(n + 1, 0);
	vector <int> mark(n + 1, 0);
	vector <vector <int> > E(n + 1);
	//vector <list <int> > RE(n + 1);

	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;
		E[u].push_back(v);
		//RE[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		/*RE[i].unique();
		in.push_back(RE[i].size());
		//E[0].push_back(i);
		if (!mark[i])
			findcycle(i, E, mark);
	}
	if (!cycle)
	{
		for (int i = ans.size() - 1; i >= 0; i--)
			cout << ans[i] << " ";
	}
	else
		cout << -1;
	return 0;
}*/