//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    string s;
//    int k, l, r;
//    l = 0; r = 0;
//    cin >> s;
//    vector<int> z(s.size(), 0);
//    for (int i = 1; i < s.size(); i++) {
//        z[i] = max(0, min(l + z[l] - i, z[i - l]));
//        while (s[z[i]] == s[i + z[i]]) {
//            z[i]++;
//        }
//        if (i + z[i] > l + z[l]) {
//            l = i;
//        }
//    }
//    for (int i = 1; i < s.size(); i++) {
//        cout << z[i] << " ";
//    }
//}
//
