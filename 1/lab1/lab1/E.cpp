/*#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int time = 0;
int maxcomps = 0;
vector <int> enter(20002);
vector <int> retur(20002);
vector <int> components(200002);
stack <int> steck;
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
void comp_maker(int x, vector <vector <pair <int, int> > >& E, vector <int>& visited, int component, int preve)
{
	visited[x] = 1;
	enter[x] = time;
	retur[x] = time;
	time++;
	for (int i = 0; i < E[x].size(); i++)
	{
		pair<int, int> y;
		y = E[x][i];
		//cout << y.first << " " << y.second << "mode: ";
		if (y.second == preve)
		{
			//cout << "1\n";
			continue;
		}
		if (!visited[y.first])
		{
			steck.push(y.second);
			comp_maker(y.first, E, visited, maxcomps, y.second);
			if (retur[y.first] >= enter[x])
			{
				maxcomps++;
				//cout << "2\n";
				while (steck.top() != y.second)
				{
					components[steck.top()] = maxcomps;
					steck.pop();
				}
				components[y.second] = maxcomps;
				steck.pop();
			}
			if (retur[y.first] < retur[x])
				retur[x] = retur[y.first];

		}
		else
			if (enter[y.first] < enter[x])
			{			
				steck.push(y.second);
				if (enter[y.first] < retur[x])
					retur[x] = enter[y.first];
			}
			else
				if (enter[y.first] < retur[x])
					retur[x] = retur[y.first];
		//else
			//cout << "4\n";
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
	vector <int> visited(n + 1, 0);
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
		if (!visited[i])
		{
			comp_maker(i, E, visited, maxcomps, -1);
		}
	}
	cout << maxcomps << "\n";
	for (int i = 1; i <= m; i++)
	{
		cout << components[i] << " ";
	}
	return 0;
}*/