#include "../utils.cc"

void solve() {
    ll res = 0;
    getInp([&](auto& cin, int) {
        char c; int l1, l2, h1, h2;
        cin >> l1 >> c >> h1 >> c >> l2 >> c >> h2;

        if((l1 <= l2 && l2 <= h1) || (l2 <= l1 && l1 <= h2))
            res++;
    });

    cout << res << endl;
}

