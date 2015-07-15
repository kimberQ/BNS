//
//  main.cpp
//  BS
//
//  Created by Kimber Lee (李芳儀) on 15/07/15.
//  Copyright (c) 2015 Kimber Lee (李芳儀). All rights reserved.
//

#include <iostream>

using namespace std;


int binarySearch(int data[],int keyIn,int n)
{
    int left=0;
    int right= n-1;
    
    
    if ( keyIn<data[0] || keyIn>data[n-1]) {
        return -1;
    }
    
    while (left <= right) {
        
        int mid=(left+right)/2;
        
        if (data[mid] == keyIn) {
            return mid;
        } else if (data[mid] < keyIn) {
            left = mid + 1;
        } else if (data[mid] > keyIn) {
            right = mid -1;
        }
    }
    
    return -1;

}

int main() {
    
    int cursor;
    int data [] = {1,2,3,4,6,7,11,13,15,16,17,18,20,33,43,44,45,66,67,78,88,92,94,98,100};
    int keyIn ;
    
    cout<<"Please key in a number to search :"<<endl;
    cin>>keyIn;
    
    // call the binarysearh function
    cursor = binarySearch(data,keyIn,sizeof(data)/sizeof(int));
    
    
    if (cursor <0) {
        cout<<" Not found !"<<endl;
    }
    else {
        cout<<" found !"<<endl;
    }
    
    return 0 ;
    
}



