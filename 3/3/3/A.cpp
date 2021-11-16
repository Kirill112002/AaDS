//#include <iostream>
//#include <vector>
//using namespace std;
//typedef long long ll;
//ll mod = 1000000001;
//ll p = 31;
//ll coef[100005];
//ll pref[100005];
//
//int main() {
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    string S;
//    cin >> S;
//    int M;
//    cin >> M;
//
//    coef[0] = 1;
//    pref[0] = 0;
//    for (int i = 0; i < S.length(); i++){
//        coef[i + 1] = (coef[i] * p) % mod;
//        pref[i + 1] = (pref[i] * p + S[i] - 'a' + 1) % mod;
//    }
//
//    ll first, second;
//    for (int i = 0; i < M; i++) {
//        int a, b, c, d;
//        cin >> a >> b >> c >> d;
//        a--; 
//        c--;
//        if (b - a != d - c) {
//            cout << "No \n";
//        }
//        else {
//            first = (pref[b] - pref[a] * coef[b - a] + mod * mod) % mod;
//            second = (pref[d] - pref[c] * coef[d - c] + mod * mod) % mod;
//            if (first == second)
//                cout << "Yes \n";
//            else
//                cout << "No \n";
//        }
//    }
//
//}
