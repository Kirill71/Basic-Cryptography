#include "CesarCriptor.hpp"

std::string CesarCriptor::crypte(const std::string & cript_string, std::function<int(int, int)> op) const noexcept
{
	// алфавитом выступает Ascii  буквы, что большие, что малые идут одна за одной, поэтому нет смысла использовать свой алфавит.
	std::vector<int> tmp{ cript_string.begin(), cript_string.end() };
	for (auto & elem : tmp)
		elem = op(elem, CESAR_SHIFT);

	return std::string(tmp.cbegin(), tmp.cend());
}
