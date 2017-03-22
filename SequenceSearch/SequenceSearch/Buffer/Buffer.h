#ifndef SEQUENCE_SEARCH_BUFFER_H
#define SEQUENCE_SEARCH_BUFFER_H

#include <deque>

#include <istream>

#include <stdexcept>

namespace SequenceSearch
{
	template <typename T>
	class Buffer
	{
		std::deque <T> data;
		long position;
		const unsigned int maxSize;
	public:
		Buffer(unsigned int bufferMaxSize) : maxSize(bufferMaxSize)
		{
			if (bufferMaxSize == 0)
			{
				throw std::invalid_argument("Buffer object initialized with 0 as maximum size."
					" Cannot use empty buffer for reading");
			}
			data.resize(bufferMaxSize);
		}

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
