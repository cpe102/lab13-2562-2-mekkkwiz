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
void insertionSort(T d[],int N)
{
	int position;
	for (int i = 1; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			if (k == i)
			{
				cout << "[" << d[k] << "]" << " ";
			}
			else
			{
				cout << d[k] << " ";
			}
			
			
		}

		for (int j = i; j > 0; j--)
		{
			if (d[j] > d[j-1])
			{
				swap(d,j,j-1);
				position = j-1;
			}
			else
			{
				if (j == i)
				{
					position = i;
				}
				
				
			}
			
			
			
			
		}
		cout << " => ";

		for (int l = 0; l < N; l++)
		{
			if (l == position)
			{
				cout << "[" << d[l] << "]" << " ";
			}
			else
			{
				cout << d[l] << " ";
			}
			
			
		}
		cout << endl;

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
