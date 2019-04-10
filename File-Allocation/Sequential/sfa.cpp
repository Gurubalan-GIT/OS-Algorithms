#include<iostream>
using namespace std;
int main(){
    int n,allocated,st,len=0;
    int blocks[100];
    //0=Unallocated and 1=Allocated 
    for(int i=0;i<100;i++){
        blocks[i]=0;
    }
    cout<<"Enter number of block to be allocated:\n";
    cin>>n;
    //Allocating specified files by user
    cout<<"Enter the blocks to be allocated:\n";
    for(int i=0;i<n;i++){
        cin>>allocated;
        blocks[allocated]=1;
    }

    cout<<"Enter the starting index and length of the block to be allocated :\n";
    cin>>st>>len;

    for(int i=0;i<100;i++){
        if(blocks[i]==1){
            cout<<"Allocated "<<i<<"="<<blocks[i]<<endl;
        }
    }

}