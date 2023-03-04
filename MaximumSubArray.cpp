//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:

    long maxim (long a, long b){
        if (a>=b){
            return a;
        }
        return b;
    }
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0,j=0;
        long max= Arr[0], sum =0;
        while(j<N){
            sum = sum+ Arr[j];
            if(j-i+1 < K){
                j++;
            } else if(j-i+1 == K){
                
                max = maxim(max,sum);
                sum= sum -Arr[i];
                 i++;
                 j++;
            }
           
        }
        return max;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
