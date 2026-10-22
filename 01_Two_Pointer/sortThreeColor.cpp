#include<iostream>
#include<vector>
using namespace std;

void sortTwoColor(vector<int> &arr){
    int i = 0, j = arr.size()-1, k = 0;
    while(k <= j){
        if(arr[k] == 1){
            k++;
        }else if(arr[k] == 2){
            swap(arr[k], arr[j]);
            j--;
        }else{
            swap(arr[i], arr[k]);
            i++;
            k++;
        }
    }
}

int main(){
    vector<int> arr = {2,0,2,1,1,0};
    sortTwoColor(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}