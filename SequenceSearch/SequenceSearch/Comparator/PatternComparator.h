#ifndef SEQUENCE_SEARCH_PATTERN_COMPARATOR_H
#define SEQUENCE_SEARCH_PATTERN_COMPARATOR_H

#include "..\Buffer\Buffer.h"

#include <vector>

namespace SequenceSearch
{
	template <typename T>
	class PatternComparator
	{
	public:
		virtual bool compare(const Buffer<T>& buffer) const = 0;
		virtual const std::vector<T> getPattern() const = 0;
		bool operator()(const Buffer<T>& buffer)
		{
			return compare(buffer);
		}
	};
}

#endif
