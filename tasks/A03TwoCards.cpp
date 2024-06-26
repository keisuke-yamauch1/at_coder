#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

using namespace std;

class A03TwoCards {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        int N, K;
        int P[109], Q[109];
        bool Answer = false;

        cin >> N >> K;
        for (int i = 1; i <= N; ++i) cin >> P[i];
        for (int i = 1; i <= N; ++i) cin >> Q[i];

        for (int x = 1; x <= N; x++) {
            for (int y = 1; y <= N; y++) {
                if (P[x] + Q[y] == K) Answer = true;
            }
        }

        if (Answer == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
};
