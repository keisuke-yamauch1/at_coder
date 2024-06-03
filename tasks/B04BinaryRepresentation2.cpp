#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

using namespace std;

class B04BinaryRepresentation2 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        string N;
        cin >> N;

        int ans = 0;
        for (int i = 0; i < N.size(); ++i) {
            int keta;
            int kurai = (1 << (N.size() - 1 - i));
            if (N[i] == '0') keta = 0;
            if (N[i] == '1') keta = 1;
            ans += keta * kurai;
        }

        cout << ans << endl;
    }
};
