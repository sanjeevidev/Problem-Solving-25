// Selection sort()
#include<iostream>
#include<vector>
using namespace std;
void SortedArray(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;++i){
        int min_idx = i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
    swap(arr[i],arr[min_idx]);
    }
}
void PrintArray(vector<int> arr){
    for(int &i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {59,17,65,47,37,23};
    cout<<"Original array :";
    PrintArray(arr);
    SortedArray(arr);
    cout<<"Sorted array : ";
    PrintArray(arr);
    return 0;
}