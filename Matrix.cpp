#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Mission Pupil
    // Matrix
    cout<<"Input size of Square Matrix:"<<endl;
    int n;cin>>n;int a[n][n],b[n][n];
    cout<<"Input matrix A:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Input matrix B:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Addition of A & B:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]+b[i][j]<<' ';
        }cout<<endl;
    }
    cout<<"Subtraction of A to B:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]-b[i][j]<<' ';
        }cout<<endl;
    }
    cout<<"Multiplication of A & B:"<<endl;
    for(int i=0;i<n;i++){    
        for(int j=0;j<n;j++){    
            int m=0;
            for(int k=0;k<n;k++){    
                m+=a[i][k]*b[k][j];    
            }cout<<m<<' ';   
        }cout<<endl;
    }    
    cout<<"Transpose Matrix of A:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][i]<<' ';
        }cout<<endl;
    }
    cout<<"Transpose Matrix of B:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[j][i]<<' ';
        }cout<<endl;
    }
}