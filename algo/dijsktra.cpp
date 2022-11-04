    #include<bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin>>N;
    vector<vector<int>>vertex(N+1,vector<int>(N+1));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int weight;
            cin>>weight;
            vertex[i][j]=weight;
        }
    }


        
}
