#include<bits\stdc++.h>
using namespace std;

void print(vector<vector<int> > v){

//print 2D vector

for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

}
int main(){
int N=3;
vector<vector<int>> v;

for(int i=0;i<N;i++){
    int n;cin>>n;
    vector<int> temp;
    for(int j=0;j<n;j++){
        int x;cin>>x;
        temp.push_back(x);
    }
v.push_back(temp);
}

print(v);


//     int m=3;
    
//     int n=3; 
//     int A[m][n];
// for( int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cin>>A[i][j];
//     }
// }

// for( int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<A[i][j]<<" ";
//     }
//     cout<<endl;
// }
    return 0;
}