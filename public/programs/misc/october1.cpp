//#include <iostream>
//using namespace std;



//int main()
//{
//	const int size = 100;
//	int nums[size];
//	for (int i=0; i<size;i++)
//	{
//		nums[i] = 1;
//		cout << nums[i] << endl;
//	}
//}


//int main()
//{
//	const int size = 5;
//	int matrix[size][size];
//
//	//Loop over the rows (first dimension)
//	for (int i=0; i < size; ++i)
//	{
//		for (int j=0; j < size; ++j)
//		{
//			if ( i==j )
//			{
//				matrix[i][j] = 1;
//			}
//			else
//			{
//				matrix[i][j] = 0;
//			}
//			cout << i << ", " << j << " " << matrix[i][j] << endl;
//		}
//	}
//}




//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//using namespace std;
//
//double arrayMean( double array[], int size )
//{
//	double totalSum = 0;
//	double mean;
//	for (int i = 0; i < size; ++i )
//	{
//		totalSum += array[i];
//	}
//	mean = totalSum / size;
//	return mean;
//}
//int main()
//{
//	const int size = 100;
//	double rand_nums[size];
//	int numseconds = time( 0 );
//	srand( numseconds );
//	for (int i=0; i<size;++i)
//	{
//		rand_nums[i] = (double) rand() / RAND_MAX;
//	}
//	cout << "The mean of the array is " << arrayMean(rand_nums,size) << endl;
//}













//void printMatrix( double matrix[][10], int size);
//int main()
//{
//	const int size = 10;
//	double matrix[size][size];
//	//Fill the matrix
//	for (int i=0; i<size; ++i)
//	{
//		for (int j=0; j<size; ++j)
//		{
//			if (i==j)
//			{
//				matrix[i][j] = 1;
//			}
//			else
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//
//	printMatrix(matrix,size);
//}
//
//void printMatrix( double matrix[][10], int size)
//{
//	for (int i=0;i<size;++i)
//	{
//		for (int j=0; j<size;++j)
//		{
//			cout << "matrix[" << i << "]["<<j<<"] = " << matrix[i][j] << endl;
//		}
//	}
//}
