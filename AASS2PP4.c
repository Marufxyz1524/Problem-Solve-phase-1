#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int v;
    int ps_sum = 0, ng_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);

        if (v > 0)
        {
            ps_sum += v;
        }
        else if (v < 0)
        {
            ng_sum += v;
        }
    }

    printf("%d %d", ps_sum, ng_sum);

    return 0;
}