#include ".\Buffer.h"

template <typename T>
std::istream & SequenceSearch::Buffer<T>::readFrom(std::istream & input)
{
	if (data.size() == maxSize)
	{
		data.pop_front();
	}

	T newValue;					//	Instantiated type is expected to have both non-parametric constructor,
	if (!input.eof() && input >> newValue)		//	and overloaded >> operator
	{
		data.push_back(newValue);
	}

	return input;
}
