#include <iostream>

using namespace std;
void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

void main()
{
	int a[6] = {41, 23, 4, 14, 56, 1};
	Interchange_Sort(a, 6);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
