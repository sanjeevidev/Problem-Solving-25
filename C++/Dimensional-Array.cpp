// Array
#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1,2,3,4,5};
    cout<<"Size of arr[0] - "<<sizeof(arr[0])<<endl;
    cout<<"Size of arr[] - "<<sizeof(arr)<<endl;
    int n = sizeof(arr);
    cout<<"Length of Array - "<<n<<endl;
    return 0;
}

// 2D Array
#include<iostream>
using namespace std;
int main() {
	int arr[4][4];
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			arr[i][j] = i+j;
		}
	}
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}