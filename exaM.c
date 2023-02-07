// Recursive CPP program to count total number of handshakes
// when a person can shake hand with only one.
#include <stdio.h>

// function to find all possible handshakes
int handshake(int n) { return n * (n - 1) / 2; }

int main()
{
	long long n = 5000;
	printf("%lld", handshake(n));
	return 0;
}

// This code is con
