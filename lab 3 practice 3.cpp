#include <iostream>
using namespace std;
int main (){
	
	int arr[2][2][2];
	int even=0,odd=0;
	
	cout<<"Enter  the value of 2x2x2 3D Array:"<<endl;
	for(int i=0;i<2;i++)
	{
		
		for(int j=0;j<2;j++)
		{
			 
			 for(int k=0;k<2;k++ )
		{
			 	cin>>arr[i][j][k];
			 	
			 	if(arr[i][j][k] % 2==0)
			 	{
				 even++;
			 	
				 }
		else 
		{
		odd++;
		}
		}
	}
}
	
	cout<<"Total even  Number="<<even<<endl;
	cout<<"Total  odd Number="<<odd<<endl;
	
	return 0;
}
