#include <iostream>

int main(){
    int a;

    scanf("%d", &a);

    if (a % 2 == 0 && a != 2){
        int begin, end;
        for (begin = 0, end = a; begin < end; end -= 2, begin += 2){
            if (end + begin == a){
                std::cout << "YES" << '\n';
                break;
            }
        }
    } else {
        std::cout << "NO" << '\n';
    }     

}