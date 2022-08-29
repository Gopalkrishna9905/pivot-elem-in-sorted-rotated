#include<iostream>
using namespace std;

 int sortedRotatedPivot(int arr[], int n)
 {
 	int s=0; //start
 	int e = n-1; // end
 	int mid = s + (e-s)/2;
 	
 	while(s<e)
 	{
 		if(arr[mid]>=arr[0])
 		{
 			s = mid+1;                               
		 }else{
		 	e = mid;
		 }
		 mid = s + (e-s)/2;
	 }
	 return s;
 }

int main()
{
	int arr[] ={8,10,11,12,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = sortedRotatedPivot(arr,n);
	cout<<"The pivot elem in sorted totated array is : " <<x;
}
