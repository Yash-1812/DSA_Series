#include <iostream>
#include <vector>
using namespace std;

void Next_Greater(vector<int> arr){
    vector<int> next_greater(arr.size() , -1);
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i + 1 ; j < arr.size() ; j++){
            if(arr[j] > arr[i]){
                next_greater[i] = arr[j];
                break;
            }
        }
    }
    for(int i = 0 ; i < arr.size() ; i++){
        cout << next_greater[i] << "\t";
    }
}

int main(){
    vector<int> arr = {6 , 8 , 0 , 1 , 3};
    Next_Greater(arr); 
    
}
