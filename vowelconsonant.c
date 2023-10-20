// Check wether the given vharacter is a vowel or consonant by using conditional operator
#include<stdio.h>
int main()
{
    char x;
    printf("enter the character\n");
    scanf("%c",&x);
    (x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'|| x=='A'|| x=='E'|| x=='I'|| x=='O'|| x=='U')?
    printf("the character is a vowel\n"):printf("it is a consonant\n");

    return 0;
    }