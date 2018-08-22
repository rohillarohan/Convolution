// This Program finds the convolution of two sequences.
// Primarily an input signal (which is causal) and a filter coefficient vector.
#include<stdio.h>

int main()
{
    int lenx,lenh;
    printf("enter the number of elements in input vector and the number of filter coefficients: ");
    // Enter the length of your input sequence and press space, then enter the length of your filter coefficient vector
    scanf("%d %d",&lenx,&lenh);
    int x[lenx],h[lenh],x_len,h_len;
    for(int i=0;i<lenx;i++)
    {
        printf("\nenter the input at n = %d: ",i);
        scanf("\n%d",&x[i]);
        // Enter the input signal starting from the time t = 0
    }
    for(int i=0;i<lenh;i++)
    {
        printf("\nenter the filter coefficient at n = %d: ",i);
        scanf("\n%d",&h[i]);
        // Enter the coefficients of your filter
    }
    int M = lenx + lenh - 1;
    int y[M],sum = 0,term = 0;
    for(int i=0;i<M;i++)
    {
        printf("\n %d",i);
        sum = 0;
        y[i]=0;
        for(int j=0;j<lenx;j++)
        {

            if((i-j)<0 || (i-j)>=lenh)
                term = 0;
            else
                term = x[j]*h[i-j];
            sum = sum + term;
        }
        y[i]=sum;
        printf(" y[m] = %d",y[i]);
        // This is the convolution of the two sequences
    }
    return 0;
}
