#include <iomanip>
#include <sstream>

std::string randhex(unsigned int size) {
	std::stringstream buffer;
	for (unsigned int i = 0; i < size; ++i) {
		buffer << std::hex << rand() % 16;
	}
	return buffer.str();
}