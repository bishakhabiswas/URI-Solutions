#include<bits/stdc++.h>
using namespace std;
int main()

{   int arr[3] ,arr1[3] ,temp=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<3;i++)
    {
        arr1[i]=arr[i];
    }

    for(int i=0;i<3;i++)

    {
            for(int j=0;j<3-i-1;j++)
               if(arr[j]>arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }

    }

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
   for(int i=0;i<3;i++)
    {
        cout<<arr1[i]<<endl;
    }


}


