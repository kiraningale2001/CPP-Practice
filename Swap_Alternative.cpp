#include<iostream>

using namespace std;

int main()

{

	//declear the array with size 6	
   int arr[6]={2,1,4,3,6,5};

	//declear the int variable size(n)

	int n=6;

	// temporary variable to store the values

	int temp;

	// starting loop from 0 to n with +2 and swap the elements.

	for(int i=0;i<n;i+=2){

		temp=arr[i];

		arr[i]=arr[i+1];

		arr[i+1]=temp;

	}

	//printing values from array.

	for(int j=0;j<n;j++){

		cout<<arr[j]<<" ";

	}

	return 0;

}
