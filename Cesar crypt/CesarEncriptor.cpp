#include "CesarEncriptor.hpp"

CesarEncriptor::CesarEncriptor() {}

const CesarEncriptor& CesarEncriptor::instance() noexcept
{
	static CesarEncriptor encreptor;
	return encreptor;
}

std::string CesarEncriptor::encrypte(const std::string& encript_string) const noexcept
{
	return crypte(encript_string, std::plus<int>());
}