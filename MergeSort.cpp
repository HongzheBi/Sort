#include <iostream>
#include <cmath>

using namespace std;
int n = 8;
int *B = (int *)malloc((n + 1) * sizeof(int));

void Merge(int A[],int low,int mid,int high)
{
    int i, j, k;
    for (k = low; k <= high; k++)
    {
        B[k] = A[k];
    }
    for (i = k = low, j = mid + 1; i <= mid && j <= high; k++)
    {
        if(B[i]<=B[j])
            A[k] = B[i++];
        else
            A[k] = B[j++];
    }
    while(i<=mid)
        A[k++] = B[i++];
    while(j<=high)
        A[k++] = B[j++];
}

//¾«Ãî
void MergeSort(int A[],int low,int high)
{
    if(low<high)
    {
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {49,38,65,97,76,13,27,49};
    MergeSort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if(i!=n-1)
            cout << " ";
    }
    cout << '\n';
    system("pause");
    return 0;
}