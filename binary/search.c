#include <stdio.h>
int main()
{
int i,j, low, high, mid, n, key, array[100],temp;
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter %d integers\n", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);

for(i=0;i<n;i++)
	  for(j=i+1;j<=n;j++)
	   if(array[i]>array[j])
	   {
	     temp=array[i];
	     array[i]=array[j];
	     array[j]=temp;
	   } 
printf("Sorted array\n");
for(i=0;i<n;i++)
	printf("%d   ",array[i]);
printf("\n");
printf("Enter value to find\n");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d in sorted array\n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list\n", key);
return 0;
}