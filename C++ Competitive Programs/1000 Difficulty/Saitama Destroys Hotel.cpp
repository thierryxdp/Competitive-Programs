#include <bits/stdc++.h>

using namespace std;

void subtractN(int array[], int range, int quantity);

int main(void){
    int passengers, floors;
    cin >> passengers >> floors;
    int floor_time[floors + 1];
    int loop;
    for (loop = 0; loop <= floors; loop++){
        floor_time[loop] = 0;
    }
    while (passengers--){
        int floor, time;
        cin >> floor >> time;
        if (time > floor_time[floor])
            floor_time[floor] = time;
    }
    
    int *ip, time_total = 0;

    for (loop = floors; loop >= 0; loop--){
        ip = &floor_time[loop];
        if (*ip == 0){
            time_total += 1;
            subtractN(floor_time, floors, 1);
        } else {
            time_total += *ip + 1;
            subtractN(floor_time, floors, (*ip + 1)); 
        }
    }
    cout << time_total - 1 << '\n';
    return 0;
}

void subtractN(int vetor[], int range, int quantity){
    int loop;
    for (loop = 0; loop <= range; loop++){
        if (vetor[loop] > 0){
            if (quantity < vetor[loop]){
                vetor[loop] -= quantity;
            } else {
                vetor[loop] = 0;
            }
            
        }
        
    }
}