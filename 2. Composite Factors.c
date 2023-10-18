/*

Problem 2 - Composite Factors

Find the factors of the number inputted. Highlight the factors that are composite

*/

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf(" %d", &num);

    for(int i = 1; i <= num; i++){
        if (num % i == 0){
            if (i > 0) {
                int isComposite = 0;
                for (int j = 2; j < i; j++){
                    if (i % j == 0){
                        isComposite = 1;
                        break;
                    }
                }
                if (isComposite){
                    printf("{%d} ", i);
                } else {
                    printf("%d ", i);
                }
            }
            }
        }

        return 0;
    }
