//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
    int k1,k,n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; ++i)
    {
        cin>>k1;
        arr[i]=k1;
    }
    for (int w = 0; w < n; ++w)
    {
        if(arr[arr[w]]==w){
            k=k+1;
        }
    }
    if(k==n){
        cout<<"true";
    }else{
        cout<<"false";
    }
	return 0;

  }
