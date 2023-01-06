#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
// Function to Input the array.
vector<int> input_vector(int n)
{
    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }
    return vect;
}
// Function to implement the algorithm of Insertion Sort.
void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int currentElement = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > currentElement)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currentElement;
    }
}

int main()
{
    int n;
    cin >> n;         // Size of the vector.
    vector<int> test; // Input the vector.
    cout << "Input Array : " << endl;
    test = input_vector(n);
    cout << "\n";
    cout << "Array Before Sorting : " << endl;
    print_vector(test);
    insertionSort(test);
    cout << "Array After Sorting : " << endl;
    print_vector(test);
    cout << "\n";
    return 0;
}
