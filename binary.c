#include<Stdio.h>

int binary(int arr[], int f, int l, int s)
{
    if (l >= f) {
		int mid = f + (l - f) / 2;

		if (arr[mid] == s)
			return mid;

		if (arr[mid] > s)
			return binary(arr, f, mid - 1, s);
		
		return binary(arr, mid + 1, l, s);
	}
	return -1;
}

int main()
{
    int f,l,arr[100],n,s,mid;

    printf("enter the no. of elements you want to enter in array: ");
    scanf("%d \n",&n);

    printf("enter the elements");
    for(int i=0;i<n;i++)
        scanf("%d/n",&arr[i]);

    printf("enter the elemnt you want to find");
    scanf("%d /n",&s);

	mid = n/2;

	int result = binary(arr, 0, mid - 1, s);
	if(result==-1)
    printf("Element is not present in array");
    else
    printf("Element is present at index %d", result);

	return 0;
}