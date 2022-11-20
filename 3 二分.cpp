//#include<iostream>
//using namespace std;
//
//int n, m;
//const int n = 100010;
//int q[n];
//
//
//int main888() {
//    cin >> n>>m;
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//    }
//
//
//    while (m--) {
//
//        int x;
//        cin >> x;
//
//
//        int l = 0, r = n - 1;
//        while (l < r) {
//            int mid = l + r >> 1;
//            if (q[mid] >= x)r = mid;
//            else l = mid + 1;
//
//        }
//        if (q[l] != x)cout << "-1 -1" << endl;
//        else {
//            cout << l << " ";
//            int l = 0, r = n - 1;
//            while (l < r) {
//                int mid = r + l + 1 >> 1;      /////////≥¨º∂÷ÿµ„£°£°£°£°£°£°£°
//                if (q[mid] <= x)l = mid;
//                else r = mid - 1;
//            }
//            cout << l << endl;
//        }
//
//
//
//    }
//
//
//
//
//
//
//    return 0;
//}