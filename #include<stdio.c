#include<stdio.h>
int main()
{
    int arr[10] = {32,29,22,21,19,13,12,10,9,6,2};
    Binary_Search(arr,lb,ub)
    {
        if(lb<=ub)
        {
            key = 10;
            md = (lb+ub/2);
            if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
        Binary_Search(arr,lb,mid-1);
            else{
                Binary_Search(arr,mid+1,ub);
            }
        }
    }
}