#include ".\Buffer.h"

template <typename T>
std::istream & SequenceSearch::Buffer<T>::readFrom(std::istream & input)
{
	if (data.size() == maxSize)
	{
		data.pop();
	}

	T newValue;					//	Instantiated type is expected to have both non-parametric constructor,
	if (input >> newValue)		//	and overloaded >> operator
	{
		data.push(newValue);
	}

	return input;
}
