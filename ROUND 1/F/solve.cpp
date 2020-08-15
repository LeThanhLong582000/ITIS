#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
void sortArray(vector<int> arr, vector<int> other)
{
    vector<int>newone;
    sort(other.begin(), other.end());
    for(int i = 0; i < arr.size(); i++){
        if(!binary_search(other.begin(), other.end(), arr[i])){
            newone.push_back(arr[i]);
        }
    }
    sort(newone.begin(), newone.end());
    int i = 0, j = 0, sptu = 0;
    while(sptu != arr.size()){
        if(binary_search(other.begin(), other.end(), arr[i])){
            ans.push_back(arr[i]);
            i++;
            continue;
        } 
        else{
            ans.push_back(newone[j]);
            j++; i++;
        }
        sptu++;
    }
    //ans.resize(arr.size());
    //return ans;
}
main(){
	vector<int>arr{2,3,1,43,5,3,5,2,1,1,1};
	vector<int>other{2,1};
	sortArray(arr, other);
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
}
