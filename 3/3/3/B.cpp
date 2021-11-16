//#include <iostream>
//#include <vector>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    string s;
//    ll k = 0;
//    cin >> s;
//    vector<ll> pref(s.size(), 0);
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
//    for (ll i = 0; i < s.size(); i++) {
//        cout << pref[i] << " ";
//    }
//}