#include <iostream>
#include <cmath>
using namespace std;
int n = 9;

void BubbleSort(int A[],int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if(A[j-1]>A[j])
            {
                A[0] = A[j - 1];
                A[j - 1] = A[j];
                A[j] = A[0];
                flag = true;
            }
        }
        if(!flag)
            break;
    }
}

int main()
{
    int A[] = {0,49,38,65,97,76,13,27,49};
    BubbleSort(A, n);
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