#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
int time = 0;
vector <int> enter(20002);
vector <int> retur(20002);
vector <bool> is_used(20002);
//vector <i nt> in(1, INT_MAX);
//list <int> q;
stack <int> steck;
vector <int> components(20002);
int maxcomp = -1;

void dfs(int x, vector <vector <pair <int, int> > > & E, vector <int> & mark, int prevv, int component)
{
	components[x] = component;
	steck.push(x);
	is_used[x] = true;
	mark[x] = 1;
	time++;
	enter[x] = time;
	retur[x] = time;
	//cout << "dfs[" << x << "]\n";
	for (int i = 0; i < E[x].size(); i++)
	{
		pair<int, int> y;
		y = E[x][i];
		//cout << x << " " << y.first;
		if (!mark[y.first])
		{
			//cout << " 1\n";
			dfs(y.first, E, mark, x, component);
			retur[x] = min(retur[x], retur[y.first]);
		}
		else
			if (is_used[y.first])
			{
				//cout << " 2\n";
				retur[x] = min(retur[x], enter[y.first]);
			} //else 
				//cout << " 3\n";
	}


	//cout << "krya";
	if (retur[x] == enter[x]) {
		maxcomp++;
		while (steck.top() != x)
		{
			components[steck.top()] = maxcomp;
			is_used[steck.top()] = false;
			steck.pop();
		}
		components[steck.top()] = maxcomp;
		is_used[steck.top()] = false;
		steck.pop();
	}

	return;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n, m, u, v;
	map <string, int>Names;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string w1, w2;
		cin >> w1;
		w2 = "-" + w1;
		w1 = "+" + w1;
		Names[w1] = 2*i;
		Names[w2] = 2*i + 1;
		cout << w1 << " " << w2
			<< " " << i << "\n";
		//reNames toDo
	}
	vector <int> mark(2*n + 1, 0);
	vector <vector <pair <int, int>> > E(2*n + 1);
	vector <vector <pair <int, int>> > RE(2*n + 1);
	vector <vector <pair <int, int>> > E(n + 1);
	//	//vector <list <int> > RE(n + 1);
	//	int l, r;
	//	r = 0;
	//	l = -1;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		for (int j = 1; j <= n; j++)
	//		{
	//			int w;
	//			cin >> w;
	//			E[i].push_back(make_pair(j, w));
	//			//RE[v].push_back(u);
	//			r = max(r, w);
	//		}
	//	}
	for (int i = 0; i < m; i++)
	{
		string w1, w, w2;
		cin >> w1 >> w >> w2;
		int u, v;
		u = Names[w1];
		v = Names[w2];
		E[u].push_back(make_pair(v, i));
	}
	
	//vector <list <int> > RE(n + 1);

	for (int i = 0; i < 2*n; i++)
	{
		if (!mark[i])
		{
			maxcomp++;
			dfs(i, E, mark, -1, maxcomp);
		}
	}
	
	bool flag = false;
	for (int i = 0; i < 2*n; i += 2)
		if (components[i] == components[i + 1]) 
		{
			flag = true;
			break;
		}
	for (int i = 0; i < 2 * n; i++)
		cout << components[i] << " ";
	if (!flag)
	{
		for (int i = 0; i < 2*n; i += 2)
			if (components[i] < components[i + 1])
				cout << (i + 1);
			else
				cout << i;
	}
	else
		cout << -1;

	return 0;
}