#include <stdio.h>  
main()  
{  
    int n,i,j;  
    scanf("%d",&n);  
  
    long int a[1000],max,min;  
    for(i=0;i<n;i++)  
            scanf("%ld",&a[i]);  
  
    min = a[0];  
  
    for(i=0;i<n;i++)  
        if(a[i]<=min)  
            min = a[i];  
  
    max = a[0];  
  
    for(i=0;i<n;i++)  
        if(a[i]>=max)  
            max = a[i];  
  
    printf("%ld\n%ld",min,max);  
  
    return 0;  
}
