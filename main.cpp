#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

// Homework 7 — Joe Barron
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  const int Q = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator
  for (int i = 0; i < N; ++i) { // Fill the array with random values
	  values[i] = rand() % 100; // Random values between 0 and 99
  }

  for (int i = 0; i < N; ++i) // Print the array values
  { 
	  if (values[i] % 2 == 0) // operator == to check if the value is even
	  {
		
		  cout << "[" << i << "] " << values[i] << " ";
		  cout << "\n";
	  } 
	  else if (values[i] % 2 != 0) // operator != to check if the value is not even
	  {
		  
		  cout << "[" << i << "] " << values[i] << " ";
		  cout << "\n";
	  } 
	  
  }
  int even[Q];
  for (int i = 0; i < Q; ++i) 
  {
	  even[i] = values[i];
	  if (even[i] % 2 == 0)
	  {
		  cout << "Even: " << even[i] << " ";
	  }
  }
  cout << "\n";

  int odd[Q];
  for (int i = 0; i < Q; ++i) 
  {
	  odd[i] = values[i];
	  if (odd[i] % 2 != 0)
	  {
		  cout << "Odd: " << odd[i] << " ";
	  }
  }
  cout << "\n";

  return 0;
}
