#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int vowels=0,consonants=0;
    printf("Enter the String\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        else{
            if(ch>='a' && ch<='z'){
                consonants++;
            }
        }
    }
    printf("vowels =%d\n",vowels);
    printf("consonants =%d\n",consonants);

    return 0;
}