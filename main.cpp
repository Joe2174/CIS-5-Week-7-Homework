#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

// Homework 7 — Joe Barron
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  const int Q = 10;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator
  for (int i = 0; i < N; ++i) { // Fill the array with random values
	  values[i] = rand() % 100; // Random values between 0 and 99
  }

  for (int i = 0; i < N; ++i) // Print the array values
  { 
	  if (values[i] % 2 == 0) // Check if the value is even, used operator == to check if the value is even
	  {
		
		  cout << "[" << i << "] " << values[i] << " ";
		  cout << "\n";
	  } 
	  else if (values[i] % 2 != 0) // Check if the value is odd, used operator != to check if the value is not even
	  {
		  
		  cout << "[" << i << "] " << values[i] << " ";
		  cout << "\n";
	  } 
	  
  }
  int even = values[0];
  for (int i = 1; i < N; ++i) 
  {
	  if (values[i] % 2 == 0 && values[i] > even) 
	  {
		  even = values[i];
	  }
  }
  cout << "Even: " << even << "\n";

  int odd = values[0];
  for (int i = 1; i < N; ++i) 
  {
	  if (values[i] % 2 != 0 && values[i] > odd) 
	  {
		  odd = values[i];
	  }
  }
  cout << "Odd: " << odd << "\n";

  return 0;
}
