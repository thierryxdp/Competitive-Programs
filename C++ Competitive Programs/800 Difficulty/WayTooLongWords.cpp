#include <iostream>

int main(){
    int number_of_words;

    scanf("%d", &number_of_words);

    int b = getchar();

    int loop;
    for (loop = 0; loop < number_of_words; loop++){
        int c, number_of_letters = 0;
        char string[101];
        while ((c = getchar()) != '\n'){
            string[number_of_letters] = c;
            number_of_letters++; 
        }
        if (number_of_letters > 10){
            std::cout << string[0] << number_of_letters-2 << string[number_of_letters - 1] << '\n';
        } else {
            int i;
            for (i = 0; i < number_of_letters; i++){
                std::printf("%c", string[i]);
            }
            putchar('\n');
        }
    }
}