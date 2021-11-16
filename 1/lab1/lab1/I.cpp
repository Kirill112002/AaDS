//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <set>
//using namespace std;
//vector <int> component(10002);
//vector <int> size_of_component(10002);
////vector <int> in(1, INT_MAX);
////list <int> q;
//int maxcomp = 0;
//set <int> A;
//set <int> B;
//vector <double> Q;
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
//	int n, x, y;
//	cin >> n;
//	long long m = 0;
//	vector <pair<float, pair<int, int>> > E;
//	vector <pair<int, int>> V;
//	//vector <list <int> > RE(n + 1);
//	V.push_back(make_pair(-1, -1));
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x >> y;
//		V.push_back(make_pair(x, y));
//		B.insert(i);
//	}
//	Q.push_back(0);
//	for (int i = 1; i <= n; i++)
//		Q.push_back(sqrt((V[1].first - V[i].first) * (V[1].first - V[i].first) + (V[1].second - V[i].second) * (V[1].second - V[i].second)));
//	float answer = 0;
//	A.insert(1);
//	B.erase(1);
//	for (int i = 1; i <= n - 1; i++)
//	{
//		float mini = INT_MAX;
//		int v = 0;
//		for (int j : B)
//		{
//			if (Q[j] < mini)
//			{
//				mini = Q[j];
//				v = j;
//			}
//		}
//		answer += mini;
//		A.insert(v);
//		B.erase(v);
//		for (int j : B)
//				Q[j] = min(Q[j], (sqrt((V[v].first - V[j].first) * (V[v].first - V[j].first) + (V[v].second - V[j].second) * (V[v].second - V[j].second))));
//	}
//	
//	cout << answer;
//	return 0;
//}