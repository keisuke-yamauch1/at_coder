#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

using namespace std;

class A05ThreeCards {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        int N, K, ans = 0;
        cin >> N >> K;

        for (int x = 1; x <= N ; ++x) {
            for (int y = 1; y <= N; ++y) {
                int z = K - x - y;
                if (z >= 1 && z <= N) ans += 1;
            }
        }

        cout << ans << endl;
    }
};
