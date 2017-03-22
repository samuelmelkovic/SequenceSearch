#ifndef SEQUENCE_SEARCH_PATTERN_COMPARATOR_H
#define SEQUENCE_SEARCH_PATTERN_COMPARATOR_H

#include "..\Buffer\Buffer.h"

#include <vector>

namespace SequenceSearch
{
	template <typename Type, typename Container>
	class PatternComparator
	{
	public:
		virtual bool compare(const Buffer<Type,Container>& buffer) const = 0;
		virtual const std::vector<Type> getPattern() const = 0;
		bool operator()(const Buffer<Type,Container>& buffer)
		{
			return compare(buffer);
		}
	};
}

#endif
