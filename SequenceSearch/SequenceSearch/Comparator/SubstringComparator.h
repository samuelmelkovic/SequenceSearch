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

		SubstringAttributes ranges;

	public:
		SubstringComparator(
			const std::vector<T> & comparedPattern,
			const SubstringAttributes & substringAttributes
		) : pattern(comparedPattern), ranges(substringAttributes) {}

		bool compare(const Buffer<T,std::deque<T> >& buffer) const override;

		const std::vector<T> getPattern() const override
		{
			return pattern;
		}

		const SubstringAttributes & getRanges() const noexcept
		{
			return ranges;
		}
	};
}

#endif