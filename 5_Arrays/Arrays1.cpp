#include<iostream>
using namespace std;

int main(){

    int arr[5] = {0};
    int arr2[5] = {2};
    int arr3[25] = {2, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of Arr is "<<sizeof(arr[5])<<" ";

    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of Arr2 is "<<sizeof(arr2[5])<<" ";
    
    cout<<endl;
    cout<<"Size of Arr3 is "<<sizeof(arr3[25])<<" ";
    
    return 0;
}



