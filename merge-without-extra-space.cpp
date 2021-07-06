// 1. Initialize the i and j with starting and endind of the two array
// 2. temp to use in swaping of values
// 3. While loop till our condition is satisfied which is i>=0 && j<m means 
//    during the iteration our iterator i & j get incremnt and decrement
// 4. after the completion of while loop we got our array but not in sorted order so we use sort function to sort array

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
	    int temp=0;
	    int i=n-1;
	    int j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>=arr2[j]){
	            temp=arr1[i];
	            arr1[i]=arr2[j];
	            arr2[j]=temp;
	        }
	            i--;
	            j++;
	    }
	    sort(arr1, arr1+n);
	    sort(arr2, arr2+m);
	}