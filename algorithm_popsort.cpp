#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"how many values will you input?"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"please input values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"the result is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"thank you!"<<endl;

    return 0;
}
