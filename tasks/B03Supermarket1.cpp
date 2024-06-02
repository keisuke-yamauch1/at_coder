#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

using namespace std;

class B03Supermarket1 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        int N;
        int A[1009];
        bool ans = false;

        cin >> N;
        for (int i = 0; i < N; ++i) cin >> A[i];

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (A[i] + A[j] + A[k] == 1000) ans = true;
                }
            }
        }

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
};
