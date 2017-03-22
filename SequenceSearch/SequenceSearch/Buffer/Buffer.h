#ifndef SEQUENCE_SEARCH_BUFFER_H
#define SEQUENCE_SEARCH_BUFFER_H
namespace SequenceSearch
{
	template <typename Type, typename Container>
	class Buffer
	{
	public:
		virtual const Container & getData() const = 0;
	};
}

#endif
