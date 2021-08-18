#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int n = 9;

//将以k为根的子树调整为大根堆
void HeapAdjust(int A[],int k,int len)
{
    A[0] = A[k];
    for (int i = 2 * k; i <= len; i *= 2)
    {
        if(i<len&&A[i]<A[i+1])
            i++;
        if(A[0]>A[i])
            break;
        else
        {
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

//建立大根堆
void BuildMaxHeap(int A[],int len)
{
    for (int i = len / 2; i > 0; i--)
    {
        HeapAdjust(A, i, len);
    }
}

void HeapSort(int A[],int len)
{
    BuildMaxHeap(A, len);
    for (int i = len; i > 1; i--)
    {
        swap(A[i], A[1]);
        HeapAdjust(A, 1, i - 1);
    }
}

int main()
{
    int A[] = {0,49,38,65,97,76,13,27,49};
    HeapSort(A, n - 1);
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