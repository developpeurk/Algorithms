#include<iostream>

using namespace std;



void swap(int *x, int *y)
{
    int temp;
}


void Bubble(int A[], int n)
{
    int i,j, flag = 0;
    for(i = 0 ; i < n ; i++)
    {
        flag = 0;
        for(j = 0 ; j < n-i-1 ; j++)
        {

            if(A[j] > A[j+1])
            {
               swap(&A[j], &A[j+1]);
               flag = 1;
            }
        }
           if(flag == 0 ) break;
    }
}



int main()
{
    //int A[] = {7,1,5,9,8,2,15}, n = 7;

    int A[] = {60,7,4,5,1,2,3}, n = 7;
    Bubble(A, n);
    for(int i = 0;i<n; i++)
    {
        cout << A[i] << " ";
    }
    

return 0;
}