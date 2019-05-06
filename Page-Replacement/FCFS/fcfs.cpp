/*
 * Created Date: Monday May 6th 2019
 * Author: Gurubalan Harikrishnan
 * Email-ID: gurubalan.work@gmail.com
 * -----
 * Copyright (c) 2019 Gurubalan Harikrishnan
 */
#include<iostream>
using namespace std;
int main(){
    int nf,n,pages[100],frames[100];
    int isHit=0,j=0,pfcount=0;
    cout<<"Enter number of pages you want to enter:\n";
    cin>>n;
    cout<<"Enter the pages or Page sequence:\n";
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    cout<<"Enter the number of frames:\n";
    cin>>nf;

    //Initialize frame arrays
    for(int i=0;i<nf;i++){
        frames[i]=-1;
    }

    for(int i=0;i<n;i++){
        cout<<"\nFor "<<pages[i]<<" : ";
         for(int x=0;x<nf;x++){
            if (frames[nf]==pages[n])
            {
                isHit=1;
                break;
            } 
        }

        if(isHit==0){

            for(j=0;j<nf-1;j++){
                frames[j]=frames[j+1];
            }
            frames[j]=pages[i];
            pfcount++;
            for(int k=0;k<nf;k++){
                if(frames[k]!=-1){
                    cout<<frames[k]<<" ";
                }
            }
        }
    }
    cout<<endl<<pfcount;
}
