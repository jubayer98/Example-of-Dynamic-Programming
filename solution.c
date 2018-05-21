#include "stdio.h"
#include "string.h"

char str[1010];
int dp[1010][1010];

int min(int x, int y)
{
    return x < y ? x : y;
}

int isPalindrome(int x, int y)
{
    int len = (y-x+1);
    int i;
    for(i=0; i<=len/2; i++)
        if(str[x++] != str[y--])
            return 0;
    return 1;
}

int call()
{
    int len = strlen(str);
    int i, j, k;
    for(i=0; i<len; i++)
        dp[i][i] = 1;

    for(i=1; i<=len; i++)
        {
            for(j=0; j<len; j++)
            {
                if(j >= (len-i+1))
                    break;

                int stIdx = j;
                int enIdx = i+j-1;

                if(isPalindrome(stIdx, enIdx))
                    {
                        dp[stIdx][enIdx] = 1;
                        continue;
                    }

                dp[stIdx][enIdx] = (1<<28);

                for(k=stIdx; k<enIdx; k++)
                    {
                        dp[stIdx][enIdx] = min(dp[stIdx][enIdx], dp[stIdx][k] + dp[k+1][enIdx]);
                    }
            }
        }

    return dp[0][len-1];
}

int main()
{
    scanf("%s", &str);
    printf("%d\n", call());

    return 0;
}
