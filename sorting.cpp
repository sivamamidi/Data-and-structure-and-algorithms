#include <iostream>
using namespace std;

#include <bits/stdc++.h>
void selection(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini  = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
void bubble(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap==0) break;
    }
}
void insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main() {
	int arr[] = {13,46,24,52,20,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion(arr,n);
	for(int i=0;i<n;i++){
	    cout<< arr[i] << " ";
	}
	return 0;
}