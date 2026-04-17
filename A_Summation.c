#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0, x;

    for (int i = 0; i < n; i++)
    {

        scanf("%lld", &x);
        sum += x;
    }

    if (sum < 0)

        sum = -(sum);
    printf("%lld\n", sum);

    return 0;
}