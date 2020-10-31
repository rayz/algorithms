#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

struct SegmentTree {
    int n;
    vector<ll> a, t;

    void init(int x) {
        n = x;
        t.assign(4 * n, 0);
    }

    void init(int x, vector<ll> y) {
        n = x;
        a = move(y);
        t.resize(4 * n);
        build(1, 0, n - 1);
    }

    ll merge(ll x, ll y) { return x + y; }

    ll upd(ll x, ll y) { return y; }

    void build(int i, int l, int r) {
        if (l == r) {
            t[i] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(lc(i), l, mid);
        build(rc(i), mid + 1, r);
        t[i] = merge(t[lc(i)], t[rc(i)]);
    }

    void modify(int i, int l, int r, int pos, ll val) {
        if (l == r) {
            t[i] = upd(t[i], val);
            return;
        }
        int mid = (l + r) >> 1;
        if (pos <= mid) modify(lc(i), l, mid, pos, val);
        else modify(rc(i), mid + 1, r, pos, val);
        t[i] = merge(t[lc(i)], t[rc(i)]);
    }

    ll query(int i, int l, int r, int ql, int qr) {
        if (l > qr || r < ql) return 0;
        if (l >= ql && r <= qr) return t[i];
        int mid = (l + r) >> 1;
        return merge(query(lc(i), l, mid, ql, qr), query(rc(i), mid + 1, r, ql, qr));
    }

    void modify(int pos, ll val) { modify(1, 0, n - 1, pos, val); }

    ll query(int l, int r) { return query(1, 0, n - 1, l, r); }

    int lc(int i){ return i * 2;}
    int rc(int i){ return i * 2 + 1;}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SegmentTree seg;
    int n,m;
    cin >> n >> m;
    vector<ll> y;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        y.push_back(x);
    }
    seg.init(n,y);
    for(int i = 0; i < m; i++){
        int op;
        cin >> op;
        if(op == 1){
            int index,v;
            cin >> index >> v;
            seg.modify(index, v);
        }else if(op == 2){
            int l,r;
            cin >> l >> r;
            cout << seg.query(l,r-1) << '\n';
        }
    }
}
