#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> ans;
        for (int step = 1; step <= y - x; ++step){
            if ((y-x) % step != 0) continue;
            vector<int> res;
            bool foundx = false;
            int cur = y;
            int need = n;

            while (cur >= 1 && need > 0){
                res.push_back(cur);
                foundx = foundx | cur == x;
                --need;
                cur = cur - step;
            }

            cur = y;

            while (need > 0){
                cur = cur + step;
                res.push_back(cur);
                need--;
            }

            sort(res.begin(), res.end());

            if (need == 0 && foundx){
                if (ans.empty() || ans.back() > res.back()){
                    ans = res;
                }
            }
        }

        assert(!ans.empty());
        for (auto it: ans) cout << it << " ";
        cout << endl;
    }
    
    
    
    
    return 0;
}