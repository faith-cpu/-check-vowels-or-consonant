#include<stdio.h>
int main(){


    char voel;
    bool lowercase_Vowel, uppercase_Vowel;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &voel);

    lowercase_Vowel = (voel == 'a' || voel == 'e' || voel == 'i' || voel == 'o' || voel == 'u');
    uppercase_Vowel = (voel == 'A' || voel == 'E' || voel == 'I' || voel == 'O' || voel == 'U');

    if (lowercase_Vowel || uppercase_Vowel) {
    	printf("\n %c is a VOWEL.", voel);
	}
    else {
    	printf("\n %c is a CONSONANT.", voel);
	}
    return 0;
}
