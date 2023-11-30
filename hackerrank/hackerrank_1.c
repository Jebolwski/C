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

// https://www.hackerrank.com/challenges/functions-in-c

int max_of_four(int a, int b, int c, int d){
    if(d>a && d>b && d>c){
        return d;
    }
    else if (b>a && b>d && b>c) {
        return b;
    }
    else if (c>a && c>b && c>d) {
        return c;
    }
    else{
        return a;
    }
    
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

// https://www.hackerrank.com/challenges/pointer-in-c


void update(int *a,int *b) {
    printf("%d\n%d\n",*a+*b,abs(*b-*a));
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    update(pa, pb);

    return 0;
}

// https://www.hackerrank.com/challenges/conditional-statements-in-c

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    if(n==1){
        printf("one");
    }
    else if (n==2) {
        printf("two");
    }
    else if (n==3) {
        printf("three");
    }
    else if (n==4) {
        printf("four");
    }
    else if (n==5) {
        printf("five");
    }
    else if (n==6) {
        printf("six");
    }
    else if (n==7) {
        printf("seven");
    }
    else if (n==8) {
        printf("eight");
    }
    else if (n==9) {
        printf("nine");
    }
    else{
        printf("Greater than 9");
    }
    return 0;
}

// https://www.hackerrank.com/challenges/for-loop-in-c/

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for(int i = a;i<=b;i++){
          if(i==1){
        printf("one\n");
    }
    else if (i==2) {
        printf("two\n");
    }
    else if (i==3) {
        printf("three\n");
    }
    else if (i==4) {
        printf("four\n");
    }
    else if (i==5) {
        printf("five\n");
    }
    else if (i==6) {
        printf("six\n");
    }
    else if (i==7) {
        printf("seven\n");
    }
    else if (i==8) {
        printf("eight\n");
    }
    else if (i==9) {
        printf("nine\n");
    }
    else{
        if(i%2==0){
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
      }
      }
    return 0;
}

// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/

int main() {
	
    int n;
    scanf("%d", &n);
    int birler = n%10;
    int onlar = (n%100-birler)/10;
    int yuzler = (n%1000-n%100)/100;
    int binler = (n%10000-n%1000)/1000;
    int onbinler = (n/10000);
    int sonuc = birler+onlar+yuzler+binler+onbinler;
    printf("%d",sonuc);
    return 0;
}

// hackerrank.com/challenges/1d-arrays-in-c/

int main()
{
    int n, *arr, i, sum = 0;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("%d\n", sum);
    free(arr);
    return 0;
}

// https://www.hackerrank.com/challenges/recursion-in-c/

int find_nth_term(int n, int a, int b, int c) {
  if(n==1){
      return a;
  }
  else if(n==2){
      return b;
  }
  else if(n==3){
      return c;
  }
  else{
      return find_nth_term(n-1,a,b,c);
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

// https://www.hackerrank.com/challenges/students-marks-sum/

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0;
    if(gender == 'g'){
        for(int i=1;i<number_of_students;i=i+2){
          sum=sum+*(marks+i);
        }
    }
    else{
        for(int i=0;i<number_of_students;i=i+2){
          sum=sum+*(marks+i);
      }
    }
    return sum; 
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

