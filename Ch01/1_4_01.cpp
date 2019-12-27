void some_function() // A function that does not return a value.
{
	double d = 2.2;	// Initialize Floating point number.
	int i = 7;		// Initialize integer number.
	d = d + i;		// Assignment to d by add.
	i = d * i;		// Assignment to d by multiply. Value truncation occurs during conversion.
}