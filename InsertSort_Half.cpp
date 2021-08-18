#include <iostream>
#include <cmath>

using namespace std;
int n = 9;

void InsertSort(int A[],int n)
{
    int i, k, low, mid, high;
    for (i = 2; i < n; i++)
    {
        if(A[i]<A[i-1])
        {
            A[0] = A[i];
            low = 1;
            high = i - 1;
            while(low<=high)
            {
                mid = (low + high) / 2;
                if(A[mid]>A[0])
                {
                    high = mid - 1;
                }
                else//为了稳定，相等归结于A[0]>A[mid]
                {
                    low = mid + 1;
                }
            }
            for (k = i - 1; k >= high + 1; --k)
            {
                A[k + 1] = A[k];
            }
            A[k + 1] = A[0];
        }
    }
}

int main()
{
    int A[] = {0,49,38,65,97,76,13,27,49};
    InsertSort(A, n);
    for (int i = 1; i < n; i++)
    {
        cout << A[i];
        if(i!=n-1)
            cout << " ";
    }
    cout << '\n';
    system("pause");
    return 0;
}