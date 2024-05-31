#include<iostream>
using namespace std;
#define INF 9999
int main(){
    int m;
    cout<<"Enter the number of the matrix "<<endl;
    cin>>m;

    int n=m+1;

    int k_value[n][n];
    int cost[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k_value[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cost[i][j]=0;
        }
    }

    int dim[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the dimension "<<endl;
        cin>>dim[i];

    }


for(int d=1;d<n-1;d++){
    for(int i=1;i<n-d;i++){
        int j=i+d;
    

        int min=INF;
        for(int k=i;k<j;k++){
        int val=cost[i][k]+cost[k+1][j]+dim[i-1]*dim[k]*dim[j];
        

        if(val<min){
            min=val;
            k_value[i][j]=k;
        }
        cost[i][j]=min;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<cost[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"min cost "<<cost[1][n-1]<<endl;

    return 0;
}