#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,count;
    printf("Enter number of data bits: ");
    scanf("%d",&n);
    int a[n+1];
    int b[n+1];
    printf("Enter data bits: \n");
    for(int i=0;i<n;i++)
    {
        int d;
        scanf("%d",&d);
        a[i]=d;
        if(d==1)
        {
            ++count;
        }
    }

    if ((count%2)==0)
    {
        a[n]=0;
    }
    else
    {
        a[n]=1;
    }
    printf("The data sent is: ");
    for(int k=0;k<n+1;k++)
    {
        printf("%d",a[k]);
    }
    count=0;
    printf("\n\n");
    printf("Enter recieved data bit: \n");
    for(int i=0;i<n+1;i++)
    {
        int d;
        scanf("%d",&d);
        b[i]=d;
        if(i==n)
        {
            continue;
        }
        if(d==1)
        {
            ++count;
        }
    }
    int ac;
    if((count%2)==0)
    {
        ac=0;
    }
    else{
        ac=1;
    }
    if(ac==b[n])
    {
        printf("Data has been recieved correctly");
    }
    else
    {
        printf("There is an error in the recieved data.");
    }
    return 0;
}
