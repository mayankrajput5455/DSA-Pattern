#include<iostream>
#include<vector>
using namespace std;

void sortTwoColor(vector<int> &arr){
    int i = 0, j = arr.size()-1;
    while(i <= j){
        if(arr[i] == 0){
            i++;
        }else{
            swap(arr[i], arr[j]);
            j--;
        }
    }
}

int main(){
    vector<int> arr = {0,1,1,1,0,0,1,1};
    sortTwoColor(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}