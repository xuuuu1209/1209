#include <iostream>
using namespace std;
int main()
{
    int n, max, min;
    cout<<"how many value will you input?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"please input "<<n<<" values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            max=arr[i];
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the largest number is "<<max<<endl;
    cout<<"the smallest number is "<<min<<endl;
    
    return 0;
}
