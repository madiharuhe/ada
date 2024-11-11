#include<stdio.h>
int swap(int *x, int *y);
int heap(int n);
int heapsort (int n);
int a[10];
int main()
{
int i,n;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements \n");
for (i=1;i<=n;i++)
scanf("%d",&a[i]);
heap(n);
heapsort(n);
printf("Sorted elements \n");
for (i=1;i<=n;i++)
printf("%d\t",a[i]);
}
int heap(int n)
{
int ch, ps, temp;
for (ch=1;ch<=n;ch++)
{
temp=a[ch];
ps=ch/2;
while (ch>1 && temp > a[ps])
{
a[ch] = a[ps];
ch=ps;
ps=ch/2;
if (ps< 1)
ps=1;
}
a[ch] = temp;
}
}
int heapsort (int n)
{
    while (n>1)
{
swap(&a[1],&a[n]);
{
n--;
heap(n);
}
}
}
int swap(int *x, int *y)
{
int temp;
temp=*x;
*x = *y;
*y =temp;
}
