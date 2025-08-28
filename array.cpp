#include<iostream>
using namespace std;
int main(){
    // int arr[10]={1,2,2,3,4};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<"\n";
    // }

    //insertion
    // int n,pos;
    // cout<<"enter the number and position : "<<"\n";
    // cin>>n;
    // cin>>pos;
    // int temp;
    // for(int i=4;i>=pos;i--){
        
    //     arr[i+1]=arr[i];
    // }
    // arr[pos]=n;
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<"\n";
    // }

    //deletion
    // int pos;
    // cout<<"enter the position you want to delete"<<"\n";
    // cin>>pos;
    // for(int i=pos;i<5;i++){
    //     arr[pos]=arr[pos+1];
    // }    
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<"\n";
    // }    
    
    //missing element
    // int arr[10]={1,2,3,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    //     if(arr[i]!=i+1){
    //         cout<<i+1<<"\n";
    //         break;
    //     }
    // }

    //frequency
    //int arr[10]={1,2,2,3,4,5,5,6};
    // for(int i=0;i<8;i++){
    //     int count=1;
    //     for(int j=0;j<8;j++){
    //         if(i==j)
    //         continue;
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count==1)
    //     cout<<"elememts with frequency 1 :"<<arr[i]<<"\n";
    // }

    //optimized
    // int buffer[7]={};   //extra space but less time complexity
    // for(int i=0;i<8;i++){
    //     buffer[arr[i]]++;
    // }
    // cout<<"single elements:- "<<"\n";
    // for(int i=0;i<7;i++){
    //     if(buffer[i]==1){
    //         cout<<i<<"\n";
    //     }
    // }

    //REVERSE

    // int arr[5]={1,2,3,4,5};
    // int first=0;
    // int last=4;
    // while(first<last){
    //     swap(arr[first],arr[last]);
    //     first++;
    //     last--;
    // }
    // cout<<"reversed array:- \n";
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    //MERGING TWO ARRAY

    // int a[4]={1,2,6,10};
    // int b[3]={4,5,7};
    // int mer[7];
    // int i=0,j=0,k=0;
    // while(i<4 && j<3){
    //     if(a[i]<=b[j]){
    //         mer[k]=a[i];
    //         i++;
    //         k++;
    //     }
    //     else{
    //         mer[k]=b[j];
    //         j++;
    //         k++;
    //     }
    // }
    // while(i<4){
    //     mer[k]=a[i];
    //     i++;
    //     k++;
    // }
    // while(j<3){
    //     mer[k]=b[j];
    //     j++;
    //     k++;
    // }
    // for(int i=0;i<7;i++){
    //     cout<<mer[i]<<" ";
    // }

    //UNION SET

    int a[5]={1,2,5,6,7};
    int b[6]={3,4,5,7,9,10};
    int u[11];
    int i=0,j=0,k=0;
    int dup=0;
    while(i<5 && j<6){
        if(a[i]<b[j]){
            u[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            u[k]=b[j];
            j++;
            k++;
        }
        else{
            u[k]=a[i];
            i++;
            j++;
            k++;
            dup++;
        }
    }
    while(i<5){
        u[k]=a[i];
        i++;
        k++;
    }
    while(j<6){
        u[k]=b[j];
        j++;
        k++;
    }
    for(int i=0;i<11-dup;i++){
        cout<<u[i]<<" ";
    }

    //INTERSECTION
    


    return 0;
}