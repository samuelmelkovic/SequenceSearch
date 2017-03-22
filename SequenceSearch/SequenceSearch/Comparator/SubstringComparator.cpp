#include ".\SubstringComparator.h"

template <typename T>
bool SequenceSearch::SubstringComparator<T>::compare(const SequenceSearch::Buffer<T> & buffer) const
{
	static const size_t patternSize = pattern.size();
	const size_t bufferDataSize = buffer.getData().size();
	if (bufferDataSize < patternSize + k_prefix_length && bufferDataSize < patternSize + k_suffix_length)
	{
		return false;
	}
	if (bufferDataSize < k_prefix_length + patternSize)
	{

	}
}