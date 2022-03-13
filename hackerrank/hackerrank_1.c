// https://www.hackerrank.com/challenges/hello-world-c/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n");
    printf("%s",s);    
    return 0;
}

// https://www.hackerrank.com/challenges/playing-with-characters/

#define MAX_LEN 128
int main() 
{
    char ch;
    char word[MAX_LEN];
    char sen[MAX_LEN];
    
    scanf("%c", &ch);
    scanf("%s\n", &word);
    scanf("%[^\n]%*c", &sen);
    
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);
    return 0;
}

// https://www.hackerrank.com/challenges/sum-numbers-c/

int main()
{
    int a;
    int b;
	scanf("%d",&a);
	scanf("%d",&b);
    int sum = a+b;
    int min = a-b;
    printf("%d %d\n",sum,min);
    float c;
    float d;
    scanf("%f",&c);
    scanf("%f",&d);
    float sumf = c+d;
    float minf = c-d;
    printf("%.1f %.1f",sumf,minf);
    
    
    return 0;
}