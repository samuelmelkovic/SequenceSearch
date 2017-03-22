#ifndef SEQUENCE_SEARCH_BUFFER_BUFFER_H
#define SEQUENCE_SEARCH_BUFFER_BUFFER_H

#include <deque>
#include <istream>

namespace SequenceSearch
{
	template <typename T>
	class Buffer
	{
		std::deque <T> data;
		long position;
	public:
		Buffer() = default;

		const std::deque<T>& getData() const
		{
			return data;
		}

		long getPosition() const
		{
			return position;
		}

		std::istream & readFrom(std::istream & input);
	};
}

#endif // !SEQUENCE_SEARCH_BUFFER_BUFFER_H
