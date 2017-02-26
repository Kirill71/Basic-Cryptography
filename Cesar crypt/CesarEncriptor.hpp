#ifndef CESAR_ENCRIPTOR_HPP
#define CESAR_ENCRIPTOR_HPP
#include"CesarCriptor.hpp"

class CesarEncriptor 
	: public CesarCriptor
{
	CesarEncriptor();
public:
	CesarEncriptor(const CesarEncriptor& rhs) = delete;
	CesarEncriptor(const CesarEncriptor&& rhs) = delete;
	CesarEncriptor& operator=(const CesarEncriptor& rhs) = delete;
	CesarEncriptor& operator=(const CesarEncriptor&& rhs) = delete;

	static const CesarEncriptor& instance() noexcept;
	std::string encrypte(const std::string& encript_string) const noexcept;
};
#endif // !CESAR_ENCRIPTOR_HPP

