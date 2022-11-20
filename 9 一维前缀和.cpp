//#include<iostream>
//using namespace std;
//
//
//const int N = 100010;
//int A[N], S[N];
//
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        cin >> A[i];
//    }
//    for (int i = 1; i <= n; i++) {
//        S[i] = S[i - 1] + A[i];
//    }
//    while (m--) {
//        int l, r;
//        cin >> l >> r;
//        cout << S[r] - S[l - 1] << endl;
//    }
//
//
//    return 0;
//}