#include <string>
#include <iostream>

class logger {
public:
	static enum level {
		lvl_null = 0,
		lvl_error,
		lvl_warning,
		lvl_info
	};
private:
	static level m_log_level = lvl_info;
public:
	void setlevel(level lvl) {
		m_log_level = lvl;
	}
	void error(std::string message) {
		if (m_log_level >= lvl_error) {
			std::cout << "[ERROR] " << message << std::endl;
		}
	}
	void warning(std::string message) {
		if (m_log_level >= lvl_warning) {
			std::cout << "[WARNING] " << message << std::endl;
		}
	}
	void info(std::string message) {
		if (m_log_level >= lvl_info) {
			std::cout << "[INFO] " << message << std::endl;
		}
	}
};