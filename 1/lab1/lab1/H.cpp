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
//void dfs(int x, vector <vector <pair <int, int> > >& E, vector <int>& mark, int prevv, int m, int component)
//{
//	components[x] = component;
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
//		if (y.second > m)
//			continue;
//		if (!mark[y.first])
//		{
//			//cout << " 1\n";
//			dfs(y.first, E, mark, x, m, component);
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
//
//
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
//	freopen("avia.in", "r", stdin);
//	freopen("avia.out", "w", stdout);
//	int n, m, u, v;
//	cin >> n;
//	vector <int> used(n + 1, 0);
//	
//	vector <vector <pair <int, int>> > E(n + 1);
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
//	while (l < r - 1)
//	{
//		int m = (l + r) / 2;
//		maxcomp = -1;
//		vector <int> mark(n + 1, 0);
//		components = mark;
//		for (int i = 1; i <= n; i++)
//		{
//			if (!mark[i])
//			{
//				maxcomp++;
//				dfs(i, E, mark, -1, m, maxcomp);
//			}
//		}
//		/*cout << m << "\n";
//		for (int i = 1; i <= n; i++)
//		{
//			cout << components[i] << " ";
//		}
//		cout << maxcomp << "\n";*/
//		if (maxcomp == 1)
//			r = m;
//		else
//			l = m;
//	}
//	cout << r;
//	fclose(stdin);
//	fclose(stdout);
//	/*cout << maxcomp << "\n";
//	for (int i = 1; i <= n; i++)
//		cout << enter[i] << " " << retur[i] << " " << components[i] << "\n";*/
//
//		//for (int i = 0; i < ans; i++)
//		//	cout << answer[i] << " ";
//		//cout << "\n";
//		//for (int i = 1; i <= m; i++)
//		//	cout << enter[i] << " " << retur[i] << "\n";
//	return 0;
//}