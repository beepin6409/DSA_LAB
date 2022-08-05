// WAP to kind k th smallest & kth largest element in the array.

#include <stdio.h>
int main()
{
    int n, temp, k;

    printf("enter size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("enter elements of array\n");

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("enter the kth no.:");
    scanf("%d", &k);

    printf("the %dth smallest no. is %d\n", k, a[k - 1]);

    printf("the %dth largest no. is %d", k, a[n - k]);

    return 0;
}