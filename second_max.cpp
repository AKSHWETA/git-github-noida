//WAP TO DISPLAY THE SECOND LARGEST INTEGER IN AN ONE A ARRAY.

#include<iostream>

using namespace std;

int main()
{
	int size;
    cout<<"\n Enter the no of elements for the array: ";
	cin>>size;
    
	const int n=size;
	int a[size],i;
		
	cout<<"\n Enter elements of the array: \n";
	
	for(i=0;i<n;i++)
	{
	    cin>>a[i];	
	}
	
	cout<<"\n Array entered:\n";
	
	for(i=0;i<n;i++)
	{
		cout<<'\t'<<a[i];
	}
	
	//SEARCHING FOR THE LARGEST NO. IN THE ARRAY
	
	int max,s_max;
	
	if(a[0]<a[1])
	{
		max=a[1];
		s_max=a[0];
	}
	/*
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		   max=a[i];
	}
	cout<<"\n Maximum no= "<<max;
	*/
	//SEARCHING FOR SECOND LARGEST NO IN THE ARRAY.
	
	for(i=2;i<n;i++)
	{
		if(a[i]>max)
		{
			s_max=max;
			max=a[i];
		}
		else
		    if(a[i]>s_max && a[i]!=max)
		        s_max=a[i];
	}
	
	cout<<"\n MAX= "<<max;
	cout<<"\n SECOND MAX= "<<s_max;
	
    return 0;
    
}
