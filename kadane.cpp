#include <bits/stdc++.h>
using namespace std;

int brute_force(int *A, int n) // O(n^3)
{
    int best_sum = INT_MIN;
    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            int sum = 0;
            for (int i = L; i <= R; i++)
            {
                sum += A[i];
            }
            if (sum > best_sum)
                best_sum = sum;
        }
    }
    return best_sum;
}

int withPrefixSum(int *A, int n)
{
    // time O(N^2)
    // space O(N)

    int best_sum = INT_MIN;
    int prefix_sum[n];

    for (int i = 0; i < n; i++)
    {
        prefix_sum[i] = (i - 1 >= 0 ? prefix_sum[i - 1] : 0) + A[i];
    }

    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            int sum = 0;
            // for(int i=L;i<=R;i++)
            // {
            //     sum+=A[i];
            // }
            sum = prefix_sum[R] - (L - 1 >= 0 ? prefix_sum[L - 1] : 0);
            if (sum > best_sum)
                best_sum = sum;
        }
    }
    return best_sum;
}

int kadane_n_space(int *A,int n)
{
    // time: O(N)
    // space: O(N)
    int best_sum=INT_MIN;
    int best[n];
    for(int i=0;i<n;i++)
    {
        best[i]=max(
            (i-1>=0?best[i-1]:0)+ A[i], // continue in old
            A[i] 
        );
        // best_sum=max(best_sum,best[i]);
        if(best[i] > best_sum) best_sum=best[i];
    }

    return best_sum;
}
// int kadane_contant_space(int *A,int n)
// {

// }

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << brute_force(A, n) << endl;
    cout << withPrefixSum(A, n) << endl;

    return 0;
}
