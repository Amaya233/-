//#include<iostream>
//using namespace std;
//
//
//const int N = 1010;
//int A[N][N], S[N][N];
//
//int main() {
//
//    int a, b, c;
//    cin >> a >> b >> c;
//    for (int i = 1; i <= a; i++) {
//        for (int j = 1; j <= b; j++) {
//            cin >> A[i][j];
//        }
//    }
//    for (int i = 1; i <= a; i++) {
//        for (int j = 1; j <= b; j++) {
//            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];
//        }
//    }
//    while (c--) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 - 1] + S[x1 - 1][y1 - 1] << endl;
//    }
//
//
//
//
//    return 0;
//}