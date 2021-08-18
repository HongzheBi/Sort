#include <iostream>
#include <cmath>

using namespace std;
int n = 8;

//ѕ«Го
void SelectSort(int A[],int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if(A[j]<A[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = A[min];
            A[min] = A[i];
            A[i] = temp;
        }
    }
}

int main()
{
    int A[] = {49,38,65,97,76,13,27,49};
    SelectSort(A,n);
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