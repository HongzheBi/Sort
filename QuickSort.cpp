#include <iostream>
#include <cmath>

using namespace std;
int n = 8;

//注意这里有等于号
int Partition(int A[],int low,int high)
{
    int pivot = A[low];
    while(low<high)
    {
        while(low<high&&A[high]>=pivot)
            high--;
        A[low] = A[high];
        while(low<high&&A[low]<=pivot)
            low++;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

//这里递归，所以手算每一趟划分结果也是模拟递归过程
void QuickSort(int A[],int low,int high)
{
    if(low<high)
    {
        int PivotPos = Partition(A, low, high);
        QuickSort(A, low, PivotPos - 1);
        QuickSort(A, PivotPos + 1, high);
    }
}

int main()
{
    int A[] = {49,38,65,97,76,13,27,49};
    QuickSort(A, 0, n - 1);
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