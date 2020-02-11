#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void UpdateArr (T a[],int N)
{
	
	

}

template <typename T>
void insertionSort(T d[],int N){
	
		for (int j = 0; j < N; j++)
		{
			for (int i = 0; i < N-1; i++)
			{
			
				for (int k = 0; k < N; k++)
				{
					
					cout << d[k] << " ";

				}
				if (i%2 == 0)
				{
					cout << " => ";
				}
				else
				{
					cout << endl;
				}
				
			
			
			

				if (d[i+1] > d[i])
				{
					int min = d[i];
					int minpo = i;

					swap(d,i+1,i);
				}
		
			}

		}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
