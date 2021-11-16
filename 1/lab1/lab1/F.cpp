//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//int time = 0;
//vector <int> enter(20002);
//vector <int> retur(20002);
//vector <int> components(20002);
//stack <int> steck;
//vector <bool> is_used(20002);
////vector <int> in(1, INT_MAX);
////list <int> q;
//vector <int> answer;
//int maxcomp = 0;
//
////bool cycle = false;
////
////void findcycle(int x, vector <vector <int> >& E, vector <int>& mark)//found cycle
////{
////	mark[x] = 1;
////	for (int i = 0; i < E[x].size(); i++)
////	{
////		int y = E[x][i];
////		if (mark[y] == 0)
////			findcycle(y, E, mark);
////		if (mark[y] == 1)
////		{
////			cycle = true;
////		}
////	}
////	mark[x] = 2;
////	ans.push_back(x);
////
////	return;
////}
//
//void dfs(int x, vector <vector <pair <int, int> > >& E, vector <int>& mark, int prevv)
//{
//	steck.push(x);
//	is_used[x] = true;
//	mark[x] = 1;
//	time++;
//	enter[x] = time;
//	retur[x] = time;
//	//cout << "dfs[" << x << "]\n";
//	for (int i = 0; i < E[x].size(); i++)
//	{
//		pair<int, int> y;
//		y = E[x][i];
//		//cout << x << " " << y.first;
//		if (!mark[y.first])
//		{
//			//cout << " 1\n";
//			dfs(y.first, E, mark, x);
//			retur[x] = min(retur[x], retur[y.first]);
//		}
//		else
//			if (is_used[y.first])
//			{
//				//cout << " 2\n";
//				retur[x] = min(retur[x], enter[y.first]);
//			} //else 
//				//cout << " 3\n";
//	}
//	//cout << "krya";
//	if (retur[x] == enter[x]) {
//		maxcomp++;
//		while (steck.top() != x)
//		{
//			components[steck.top()] = maxcomp;
//			is_used[steck.top()] = false;
//			steck.pop();
//		}
//		components[steck.top()] = maxcomp;
//		is_used[steck.top()] = false;
//		steck.pop();
//	}
//	
//	return;
//}
//
////void topsort(int x, vector <list <int> > E)
////{
////	for (int x = 1; x <= n; x++)
////		if (!used[x])
////			dfs(x, E);
////	q.reverse();
////	//
////	used[x] = 1;
////	for (auto y : E[x])
////		if (mark[y] == 0)
////			topsort(y, E);
////	ans.push_back(x);
////	return;
////}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//	int n, m, u, v;
//	cin >> n >> m;
//	vector <int> used(n + 1, 0);
//	vector <int> mark(n + 1, 0);
//	vector <vector <pair <int, int>> > E(n + 1);
//	//vector <list <int> > RE(n + 1);
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> u >> v;
//		E[u].push_back(make_pair(v, i));
//		//RE[v].push_back(u);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!mark[i])
//			dfs(i, E, mark, -1);
//	}
//	int n2 = maxcomp;
//	int ans = 0;
//	map <pair <int, int>, int> E2;
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j < E[i].size(); j++)
//			if (components[i] != components[E[i][j].first])
//			{
//				if (E2.find(make_pair(components[i], components[E[i][j].first])) == E2.end())
//				{
//					ans++;
//					E2[make_pair(components[i], components[E[i][j].first])] = E[i][j].second;
//				}
//			}
//
//	/*cout << maxcomp << "\n";
//	for (int i = 1; i <= n; i++)
//		cout << enter[i] << " " << retur[i] << " " << components[i] << "\n";*/
//	
//	cout << ans << "\n";
//	//for (int i = 0; i < ans; i++)
//	//	cout << answer[i] << " ";
//	//cout << "\n";
//	//for (int i = 1; i <= m; i++)
//	//	cout << enter[i] << " " << retur[i] << "\n";
//	return 0;
//} 