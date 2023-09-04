#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int i,j;
int checking_the_inputs(int flag,int counter1,int counter2)
{
if(flag==0 && counter1==counter2 || counter1==counter2+1 || counter2==counter1 + 1)
{
 printf("Entered moves are valid\n");
}
else
{
 printf("Entered moves are invalid\n");
 exit(0);
}
}
int print_array(int a[])
{
 printf("Entered moves are ");
 for(i=0; i<=8;i++)
 {
 printf("%d",a[i]);
 }
 printf("\n");
 return 0;
}
int index_calculation(int a[])
{
 int index=0;
for(i=0,j=0;i<=8 && j>=0;i++,j++)
{
 index = index + a[i] * pow(3,8-j);
}
printf("Calculating the index.......\n");
printf("Calculated index is %d",index);
return 0;
}
int main()
{
 int a[9],counter1,counter2;
 counter1=0;
 counter2=0;
 int flag=0;
 printf("Enter the your moves: (0 == blank, 1 == X, 2 == O)");
 for(i=0; i<=8;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=8;i++)
 {
 if((a[i]!=0) && (a[i]!=1) && (a[i]!=2))
 {
 flag=1;
 }
 if(a[i]==1 && flag==0)
 {
 counter1=counter1 + 1;
 }
 else if(a[i]==2 && flag==0)
 {
 counter2=counter2+1;
 }
}
// printf("entred moves are \n");
 print_array(a);
 checking_the_inputs(flag,counter1,counter2);
 index_calculation(a);
return 0;
}