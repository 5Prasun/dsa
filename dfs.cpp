#include<iostream>
using namespace std;
void dfs(int G[][10],int n,int start){
    static int visited[10]={0};
    if(visited[start]==0){
        cout<<start<<" ";
        visited[start]=1;
        for(int j=1;j<n;j++){
            if(G[start][j]==1 && visited[j]==0){
                dfs(G,n,j);

            }
        }
    }
}
int main(){
    int arr[10][10]={0};
    cout<<"Enter the number of vertices : ";
    int n;
    cin>>n;
    cout<<"Enter the adjacent : "<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int p;
            cin>>p;
            arr[i][j]=p;
        }
    }
    dfs(arr,n,1);
    return 0;
}