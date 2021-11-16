//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    string p, t;
//    cin >> p >> t;
//    string s = p;
//    s = s + '#';
//    s = s + t;
//    vector<int> pref(s.size());
//    pref[0] = 0;
//    int k;
//    for (int i = 1; i < s.size(); i++) {
//        k = pref[i - 1];
//        while ((s[i] != s[k]) && (k > 0)) {
//            k = pref[k - 1];
//        }
//        if (s[i] == s[k]) {
//            k++;
//            pref[i] = k;
//        }
//    }
//    vector<int> res;
//    for (int i = p.size() + 1; i < s.size(); i++) {
//        if (pref[i] == p.size())
//            res.push_back(i - 2 * p.size() - 1);
//    }
//    cout << res.size() << '\n';
//    for (int i = 0; i < res.size(); i++)
//        cout << res[i] << " ";
//}