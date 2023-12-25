#include <stdio.h>
void main()
{
    int i=0,j=0,n1,n2,n3,k=0;
    int a[100], b[100], c[200];
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the array elements:");
    for (i = 0; i < n1; i++)
        scanf("%d",&a[i]);
    printf("Enter the size of the second array:");
    scanf("%d", &n2);
    printf("Enter the elements of second array:");
    for (i=0;i<n2;i++)
        scanf("%d",&b[i]);
    n3=n1+n2;
    i=0,j=0,k=0;
    while (i < n1 && j < n2)
    {
        if (a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while (i<n1)
        c[k++]=a[i++];

    while (j<n2)
        c[k++]=b[j++];
    printf("The merged array is :");
    for (i=0;i<n3;i++)
        printf("\n%d",c[i]);
}
