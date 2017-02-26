#ifndef CESAR_CRIPTOR
#define CESAR_CRIPTOR
#include<vector>
#include<functional>
#include<algorithm>
class CesarCriptor 
{
protected:
	const unsigned CESAR_SHIFT{ 4 };
	std::string crypte(const std::string & cript_string, std::function<int(int, int)> op) const noexcept;
	CesarCriptor() {};
	CesarCriptor(const CesarCriptor&) = delete;
	CesarCriptor(const CesarCriptor&&) = delete;
	CesarCriptor& operator= (const CesarCriptor&) = delete;
	CesarCriptor& operator= (const CesarCriptor&&) = delete;
};
#endif