#include <iostream>
using namespace std;

 //array of integeres to hold values
int arr[20];
int cmp_count = 0; //number of comparasion
int mov_count = 0; //number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukan Panjang Element Array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Element Array adalah 20" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (1 + 1) << ">";
		cin >> arr[i];
	}
}
//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;										//Langkah 1


		//Partition the list into two parts:
		//one conntainning elements less that or equal to pivot
		//Other conntainning elemnts greather than pivot

		pivot = arr[low];							//Langkah 2

		i = low + 1;								//Langkah 3
		j = high;									//Langkah 4


		while (i <= j)
		{
			//search for an elements grather than pivot
			while ((arr[i] > pivot) && (j >= low))	//Langkah 7
			{
				i++;								//Langkah 8
				cmp_count++;
			}
			cmp_count++;
			//search for an elemnts less than or equal to pviot
			while ((arr[j] > pivot) && (j >= low))
			{
				j--;
				cmp_count++;
			}
			cmp_count++;


			if (i < j) // if the greather element is on the left of the element
			{
				//swap the element at index i whit the element at index j
				swap(i, j);
				mov_count++;
			}
		}
		//j now containt the index of the last element in the sorted list pivot
		if (low < j)
		{
			//move the 
			swap(low, j);
			mov_count++;
		}
		//sort the list on the left of pivot
		q_short(low, j - 1);

		//sort the list on the right of pivot using quick sort
		q_short(j + 1, high);


}


void display() {
	cout << "\n----------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "------------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
}


int mian()
{

	input();
	//sort the array using quick sort
	q_short(0, n - 1);
	display();
	system("pause");

	return 0;
}
