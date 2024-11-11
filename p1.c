#include<stdio.h>
#include<time.h>
#define max 20
int a[max],n,key;
void main()
{
int i,key,ch,mid,low,high,L;
clock_t start1,end1,start2,end2;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("\n LINEAR SEARCH \n");
start1=clock();
printf("Enter the key element to search\n");
scanf("%d",&key);
L=ls(1,key);
end1=clock();
f(L==-1)
printf("Element is not found \n");
else
printf("Element is found \n");
printf("Time=%f",((double)(end1-start1))/CLOCKS_PER_SEC);
printf("\n");
printf("\n BINARY SEARCH \n");
start2=clock();
printf("enter the key element to be searched\n");
scanf("%d",&key);
low=1;
high=n;
ch=bs(low,high,key);
end2=clock();
if(ch==-1)
printf("element is not found\n");
else
printf("element is found\n");
printf("Time=%f",((double)(end2-start2))/CLOCKS_PER_SEC);
}
int ls(int i, int key)
{
if(i>n)
return(-1);
if(a[i]==key)
return i;
else
ls(++i,key);
return;
}
int bs(int low,inthigh,int key)
{
int mid;
if(low>high)
return (-1);
mid=(low+high)/2;
if(a[mid]==key)
return mid;
else
{
if(key<a[mid])
bs(low,mid-1,key);
else
bs(mid+1,high,key);
}
}
