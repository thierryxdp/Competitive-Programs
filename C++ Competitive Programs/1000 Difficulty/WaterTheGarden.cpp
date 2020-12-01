#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t){
        int n, k;
        cin >> n >> k;
        int array[n];

        for (int i = 0; i < n; i++){
            array[i] = 0;
        }
        
        for(int i = 0; i < k; i++){
            int a;
            cin >> a;
            array[a - 1] = 1;
        }

        int seconds = 0;
        int watered = 0;
        while(watered == 0){
            watered = 1;

            for (int i = 0; i < n; i++){
                if (array[i] == 0 || array[i] == 1) watered = 0;
                if (array[i] == 2){
                    if (i >= 1){
                        array[i-1] = 2;
                    }

                    if (i + 1 < n){
                        if (array[i+1] != 2){
                            array[i+1] = 2;
                            i++;
                            watered = 0;
                        }
                        
                    }
                }
                if (array[i] == 1) array[i] = 2;
            }
            if (!watered) seconds++;
            
        }
        
        cout << seconds << endl;
        t--;
    }
    
    
    return 0;
}