#include<iostream>
#include<vector>
using namespace std;

vector<int> square(vector<int> &arr){
    int i = 0,
        j = arr.size() - 1,
        k = arr.size() -1;

    vector<int> ans(arr.size());

    while(i <= j){
        if(abs(arr[i]) > abs(arr[j])){
            ans[k] = arr[i] * arr[i];
            i++;
        }

        else{
            ans[k] = arr[j] * arr[j];
            j--;
        }
        k--;
    }
    return ans;
}

int main(){
    vector<int> arr = {-4,-1,0,2,3,5};
    vector<int> result = square(arr);
    cout<<"Squares :";
    for(int x : result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}