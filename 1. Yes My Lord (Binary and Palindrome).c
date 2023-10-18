/*

Problem 1 - Yes, My Lord

As you entered the hall walking slowly. A loud voice saying "I am your god. And I will only accept those who are deemed worthy. Show me what you have got." As you continue to walk, in the wall shows the inscribed text that translates as follows:

• Only those soul who's clean are deemed acceptable.
• The good deeds are weighted in a scale. 
• Balancing the good and the bad.

"How is this possible?" you have asked in your head. A man just walkout in the dark alley towards you saying, "Nah, It's easy my lad, just give a number and get the good (1) and bad (0) equivalent and if your souls value is clean (means that either left or right direction it would be the same). Then you are deemed worthy.
Hint: Create a program that would accept a number. And checks if the binary equivalent is a palindrome.

*/

#include <stdio.h>

void main() {
    int num, i, rem = 0, bin = 0, bin2, placeval = 1, rem2, result = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

	while(num) {
		rem = num % 2;
		num = num / 2;
		bin = bin + (rem * placeval);
		placeval *= 10;
	}

	printf("The value of your soul is %d.\n", bin);

	bin2 = bin;

	while(bin2){
		rem2 = bin2 % 10;
		result = result * 10 + rem2;
		bin2 /= 10;
	}

	if (result == bin){
		printf("You are worthy my child.");
	} else {
		printf("Ahh, you are filty. Be gone.");
	}

}
