#include <bits/stdc++.h>
using namespace std;

/*steps:
 1. input the size of array
 2. input the elements of array
 3 declare map<int,int> name;
 4. create a hash using map function
 5.create a queue
 6. run a loop to find how many times the'
     elements have occured.*/

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    
}