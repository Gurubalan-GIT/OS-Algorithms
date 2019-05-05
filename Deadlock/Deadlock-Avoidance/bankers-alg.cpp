/*
 * Created Date: Sunday May 5th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int available[100], max[100][100], allocation[100][100],need[100][100];
    int m,r;
    cout<<"Enter number of processes:\n";
    cin>>m;
    cout<<"Enter the maximum available number of resources\n";
    cin>>r;
    cout<<"Enter the values of available matrix:\n";
    for(int i=0;i<r;i++){
        cin>>available[i];
    }
    cout<<"Enter the values of the allocation matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            cin>>allocation[i][j];
        }
    }
    cout<<"Enter the values of the maximum matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            cin>>max[i][j];
        }
    }
    
    //Need matrix calculation
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            need[i][j]=max[i][j]-allocation[i][j];
        }
    }
    cout<<"Need matrix is:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
           cout<<need[i][j]<<" ";
        }
        cout<<endl;
    }

}