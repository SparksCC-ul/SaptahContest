# ![Saptah](https://drive.google.com/uc?export=view&id=1XgSLl7poMxyTujdQXs28-8oLbLLMrQtZ)


# SaptahContest
Questions posted here are framed in a possibility that they can be solved in 15min  
Steps to Solve the questions in Github    
* Login and fork this Repository
* The question will be in the form of an md file  (ex: "Monday Rumble")
* read and analyse the question  
* use your own code editor to solve the question  
* create a new file
* paste your code in the new file
* Propose the changes
* Click on "create Pull Request'
* Done

# Today's Topic: Vectors in C++
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.  
  
Certain functions associated with the vector are:  
### Iterators  
  
* begin() – Returns an iterator pointing to the first element in the vector
* end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
* rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
* rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
* cbegin() – Returns a constant iterator pointing to the first element in the vector.
* cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
* crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
* crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
  
  
```C++
// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Output of begin and end: "; 
	for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of cbegin and cend: "; 
	for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of rbegin and rend: "; 
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
		cout << *ir << " "; 

	cout << "\nOutput of crbegin and crend : "; 
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
		cout << *ir << " "; 

	return 0; 
} 
```

# Output:
        Output of begin and end: 1 2 3 4 5 
        Output of cbegin and cend: 1 2 3 4 5 
        Output of rbegin and rend: 5 4 3 2 1 
        Output of crbegin and crend : 5 4 3 2 1
        
# Check out full article: 
[Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
