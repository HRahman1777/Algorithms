#include<iostream>
#include<stdio.h>
using namespace std;

int binary_search(int a[], int tar)
{
    int first, last, mid, indx;
    first = 0, last = 7 - 1;
    indx = -1;
    while(first<=last)
    {
        mid =  (first+last)/2;
        if(a[mid] == tar)
        {
            indx = mid+1;
            break;
        }

        else if(tar>a[mid])
            first = mid+1;
        else
            last = mid-1;
    }
    return indx;
}

int main()
{
    int arr[7] = {1, 3, 5, 6, 8, 9, 11};
    int target, result;

    cout<<"Enter Target: ";
    cin>>target;

    result = binary_search(arr, target);

    if(result != -1)
        printf("%d found!! Index no: %d\n", target, result);
    else
        cout<<"Not Found!!\n";
    return 0;
}
