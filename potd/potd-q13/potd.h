//
// Write a templated function `more` which takes in two variables of the same
// type and returns whichever variable is greater than (`>`) the other.
//
#pragma once

template<typename T> const T & more(const T &one, const T &two) {
    // your code here
     // T result;
     // result = (one > two) ? one : two;
     // return result;
	if (/* condition */one>two)
	{return one;
		/* code */
	}
	else
		{return two;}
}
