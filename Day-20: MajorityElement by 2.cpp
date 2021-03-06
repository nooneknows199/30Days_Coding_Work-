// Brute force:
#include<bits/stdc++.h>          // T.C : O(n²) 
using namespace std;             // S.C : O(1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
    for(int i=0;i<n;i++){
         int count = 0;
        for(int j=i+1;j<n;j++){
            if(a[j] == a[i])
            count++;
        }
            if(count>n/2)
           cout<< a[i];     
    }
}

OR
// Sorting
#include<bits/stdc++.h>          // T.C : O(n log n) 
using namespace std;             // S.C : O(1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
    sort(a, a+n);
    int i = 1, count = 1;
    while ( i < n )
    {
        while ( i < n and a[i] == a[i-1] )
        {
            i++;
            count++;
        }
       if ( count > n/2 )
            cout<< a[i-1];
        count = 1;
        i ++;
    }
  
}
// By using unordered_map  : 
#include<bits/stdc++.h>         // T.C : O(n)
using namespace std;            // S.C : O(n)

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        int val = n/2;
        for(auto x:m){
            if(x.second>val)
            cout<<x.first;
        }
    }

    return -1;
}

OR
#include<bits/stdc++.h>         // T.C : O(n)
using namespace std;            // S.C : O(1)

int majorityElement(int a[], int size)
{
    
    int ma = a[0];
    int count = 1;
    for(int i=0;i<size;i++){
        if(a[i] == ma) count++;
        else
        count--;
        if(count ==0){
            ma = a[i];
            count = 1;
        }
    }
    int c = 0;
    for(int i=0;i<size;i++){
        if(a[i] == ma) c++;
    }
    if(c > size/2) return ma;
    else return -1;
    
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}

OR
// Moore Voting Algortihtm
#include<bits/stdc++.h>         // T.C : O(n)
using namespace std;            // S.C : O(n)

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int count = 0;
        int element = 0;
        for(int i = 0;i<n;i++){
            if(count == 0)
            element = arr[i];
            if(element == arr[i]) 
            count++;
            else
            count--;
    }
    cout<<element;
        
    }
    
    
}
