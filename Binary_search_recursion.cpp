/**
 *  @file    Binary_Search.cpp
 *  @author  Muhammad Adnan, Szabist university isb
 *  @date    03/10/2020
 *
 *  @brief Binary Search Algorithm Implementation.
*/
#include <iostream>
using namespace std;
int search(int arr[] , int target, int first , int last){
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(last>=first){
		int m = (first+last)/2;
		if(arr[m]==target){
			return m;
//			break;
		}
		else if(arr[m]<target){
		//	first = m+1;
		search( arr ,  target,  m+1 ,  last);		
			
			
		}
		else{
		//	last = m-1;
			search( arr , target, first , m-1);
		}
	}
	else{
		return -1;
//		cout<<"\nNot Found";
	}
}
int main(){
	int target;
	cout<<"Enter -1 for exit\n";
	do{
		int arr[] = {1,3,4,5,6,7,8,9,10,11,13,14};
		int n = sizeof(arr)/sizeof(arr[0]);
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<"   ";
		}
		cout<<"Enter Number: ";
		cin>>target;
		int first = 0;
		int last = n-1;
		int m=search( arr , target, first , last);
		(m==-1) ? cout<<"Not Found..." 
				: cout<<"Record Found: ["<<arr[m]<<"] on index ["<<m<<"]\n";
	}
	while(true);
	
	
}
