// Stock span problem

#include <iostream>
#include <vector>
using namespace std;

void Stock_Span(vector<int> arr) {
	int len = arr.size();
	vector<int> span(len , 1);
	for(int i = 1 ; i < len ; i++){
	    int j = i - 1;
	    while(j >= 0){
	        if(arr[j] <= arr[i]){
	            span[i] = span[i] + 1;
	        }
	        else break;
	        j = j - 1;
	    }
	}
	for(int i = 0 ; i < len ; i++){
	    cout << span[i] << "\t";
	}
}

int main() {
	vector<int> price = {6 , 7 , 4 , 1 , 5 , 2};
	Stock_Span(price);
}
