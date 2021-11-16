//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <map>
//using namespace std;
//vector <int> component(200002);
//vector <int> size_of_component(200002);
////vector <int> in(1, INT_MAX);
////list <int> q;
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
////void min_ost_tree(int n, vector <vector <pair <int, int>> >& E)
////{
////	for (int i = 0; i < n; i++)
////	{
////		int x = -1;
////		for (int j = 0; j < n; j++)
////			if ((!used[j]) && (x == -1 || mine[j] < mine[x]))
////				x = j;
////		used[x] = true;
////		if (minv[x] != -1)
////			cout << x << " " << minv[x] << "\n";
////		for (int j = 0; j < E[x].size(); j++)
////			if (E[x][j].second < mine[j]) 
////			{
////				mine[j] = E[x][j].second;
////				minv[j] = x;
////			}
////	}
////}
////void min_ost_tree_builder()
////{
////
////}
////void dfs(int x, vector <vector <pair <int, int> > >& E, vector <int>& mark, int prevv)
////{
////	steck.push(x);
////	is_used[x] = true;
////	mark[x] = 1;
////	time++;
////	enter[x] = time;
////	retur[x] = time;
////	for (int i = 0; i < E[x].size(); i++)
////	{
////		pair<int, int> y;
////		y = E[x][i];
////		if (!mark[y.first])
////		{
////			dfs(y.first, E, mark, x);
////			retur[x] = min(retur[x], retur[y.first]);
////		}
////		else
////			if (is_used[y.first])
////			{
////				retur[x] = min(retur[x], enter[y.first]);
////			}
////	}
////	if (retur[x] == enter[x]) {
////		maxcomp++;
////		while (steck.top() != x)
////		{
////			components[steck.top()] = maxcomp;
////			steck.pop();
////		}
////		components[steck.top()] = maxcomp;
////		steck.pop();
////	}
////	is_used[x] = false;
////	return;
////}
//int find_component(int x) {
//	if (x == component[x]) return x;
//	component[x] = find_component(component[x]);
//	return component[x];
//}
//
//void union_components(int x, int y) {
//	x = find_component(x);
//	y = find_component(y);
//	if (x != y) {
//		if (size_of_component[x] < size_of_component[y]) {
//			swap(x, y);
//		}
//		component[x] = y;
//		size_of_component[x] += size_of_component[y];
//	}
//	return;
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//	int n, m, u, v, w;
//	cin >> n >> m;
//	vector <pair<int, pair<int, int>> > E;
//	//vector <list <int> > RE(n + 1);
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> u >> v >> w;
//		E.push_back(make_pair(w, make_pair(min(u, v), max(u, v))));
//	}
//
//	sort(E.begin(), E.end(), [](pair<int, pair<int, int>> left, pair<int, pair<int, int>> right) {
//		return (left.first < right.first);
//		});
//	for (int i = 1; i <= n; i++) {
//		component[i] = i;
//	}
//	long long answer = 0;
//	for (int i = 0; i < m; i++) {
//		int u = E[i].second.first;
//		int v = E[i].second.second;
//		//int w = pair.first;
//		//cout << u << " " << v << " " << w << " " << component[u] << " " << component[v] <<  "\n";
//		if (find_component(u) != find_component(v)) {
//			answer += E[i].first;
//			union_components(u, v);
//		}
//		//cout << component[u] << " " << component[v] << "\n";
//	}
//	cout << answer;
//	return 0;
//}