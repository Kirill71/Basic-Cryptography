#ifndef CESAR_DECRIPTOR
#define CESAR_DECRIPTOR
#include"CesarCriptor.hpp"

class  CesarDecriptor
	: public CesarCriptor 
{
	CesarDecriptor();
public:
	CesarDecriptor(const CesarDecriptor& rhs) = delete;
	CesarDecriptor(const CesarDecriptor&& rhs) = delete;
	CesarDecriptor& operator=(const CesarDecriptor& rhs) = delete;
	CesarDecriptor& operator=(const CesarDecriptor&& rhs) = delete;

	static const CesarDecriptor& instance() noexcept;
	std::string decrypte(const std::string& decript_string) const noexcept;
};
#endif // !CESAR_DECRIPTOR