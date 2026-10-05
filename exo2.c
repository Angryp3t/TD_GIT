#include <stdio.h>
#include <math.h>

int main()
{
    int C;
    scanf("%d",&C);
    int n;
    scanf("%d",&n);
    int t;
    scanf("%d",&t);
    int m;
    m=(C*(t/12))/(1-(pow((1+(t/12)), (-n*12))));
    printf("%d",m);

    return 0;
}