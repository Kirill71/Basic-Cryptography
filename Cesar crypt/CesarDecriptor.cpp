#include"CesarDecriptor.hpp"

CesarDecriptor::CesarDecriptor(){}

const CesarDecriptor & CesarDecriptor::instance() noexcept
{
	static CesarDecriptor decriptor;
	return decriptor;
}

std::string CesarDecriptor::decrypte(const std::string & decript_string) const noexcept
{
	return crypte(decript_string, std::minus<int>());
}
