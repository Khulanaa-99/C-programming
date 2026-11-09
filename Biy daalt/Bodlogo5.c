#include <stdio.h>

float average(int a, int b, int c)
{
    int sum;
    sum=a+b+c;
    return sum/3.0;
}
char grade(float avg)
{
   if (avg >= 90)
       return 'A';
   else if (avg >= 80)
      return 'B';
   else if (avg >= 70)
       return 'C';
   else if (avg >= 60)
       return 'D';
   else
       return 'F';
}

void report(int a, int b, int c)
{
   float avg = average (a,b,c);
   char dun = grade (avg);
   printf("Dundaj:%.2f Dun:%c", avg , dun);
    
}
int main()
{
   int a , b , c;
   scanf("%d %d %d", &a , &b , &c);
   report (a,b,c);
   return 0;

}