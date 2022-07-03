//
// Created by zhaishunkai on 6/23/22.
//

#include "quicksort.h"

void swap(std::vector<int>& arr,int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quicksort::partition(vector<int>& arr,int l,int r,vector<int>& result ) {
    if(l>r){
        result = {-1,-1};
    }
    if(l == r){
        result = {l,r};
    }

    int lessIndex = l-1;
    int moreIndex= r;
    int index = l;
    while(lessIndex < moreIndex){
        if(arr[index] == arr[r]){
            index++;
        }else if(arr[index] < arr[r]){
            swap(arr,index++,++lessIndex);
        }else{
            swap(arr,index,--moreIndex);
        }
    }
    swap(arr,moreIndex,r);
    result = {lessIndex+1,moreIndex};
}