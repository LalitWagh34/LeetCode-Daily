#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<string, int> faces = {
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20}
    };

    int ans = 0;

    int n;
    cin>> n;

    while(n--){
        string s;
        cin>>s;

        ans+= faces[s];
    }
    cout<<ans;

    return 0;
}