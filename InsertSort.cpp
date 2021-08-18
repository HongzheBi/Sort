#include <iostream>
#include <cmath>

using namespace std;
int n = 9;

void InsertSort(int A[],int n)
{
    int i, j;
    for (i = 2; i < n; i++)
    {
        if(A[i]<A[i-1])
        {
            A[0] = A[i];
            for (j = i - 1; j >= 1 && A[j] > A[0]; --j)
            {
                A[j + 1] = A[j];
            }
            A[j + 1] = A[0];
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