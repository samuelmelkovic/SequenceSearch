#ifndef SEQUENCE_SEARCH_SUBSTRING_COMPARATOR_H
#define SEQUENCE_SEARCH_SUBSTRING_COMPARATOR_H

#include ".\PatternComparator.h"
#include "..\Buffer\SubstringBuffer.h"
#include "..\Config\config.h"

namespace SequenceSearch
{
	template <typename T>
	class SubstringComparator : public PatternComparator<T, std::deque<T> >
	{
		std::vector<T> pattern;
	public:
		static const unsigned int k_prefix_length = PREFIX_LENGTH;
		static const unsigned int k_suffix_length = SUFFIX_LENGTH;
	
		SubstringComparator(const std::vector<T> & comparedPattern) : pattern(comparedPattern) {}

		bool compare(const Buffer<T,std::deque<T> >& buffer) const override;

		const std::vector<T> getPattern() const override
		{
			return pattern;
		}
	};
}

#endif