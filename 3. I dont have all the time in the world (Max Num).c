/*
Problem 3 - I don't have all the time in the world!

You are an employee in charge of auctioning out your products in an infinite market, inside the infinite market there is an infinite crowd. 
It wouldn't be smart if you took all your time in a day to ask for offers from the infinite crowd, because that would take an infinite amount of time, 
and you just have other tasks you need to handle. So you decide that as soon as you see an offer for O you stop, but at the same time after a change in 
the highest offer 3 times, you will directly sell it to the current greatest offer.

Create a program that asks the user for an input until the user inputs O and display the greatest number inputted, If the greatest number has changed
3 times throughout the course of the program, stop asking for other inputs and instead display the greatest number up to that point.
*/

#include <stdio.h>

int main() {
    int num, count = 1, max, prev;
    
    printf("Input a Number: ");
    
    do {
        scanf("%d", &num);
        
        if(num > max){
            max = num;
            if(max > prev){
                count++;
                if(count == 3){
                    break;
                }
            } else {
                count = 1;
            }
        }
        
        if(num == 0){
            break;
        }
        
        prev = max;
        printf("Input a Number: ");
        
    } while (num != 0);
    
    if (num == 0){
        printf("\nProgram Ended due to an input of 0\n");
    }
    
    if (count == 3){
        printf("\nProgram Ended due to 3 changes in the Greatest Number\n");
    }
    
    printf("\nThe Greatest Number is : %d\n", max);
}

