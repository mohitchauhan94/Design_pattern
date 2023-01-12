#include "Logger.h"

Logger* Logger::m_logger = nullptr;
mutex Logger::mt;

Logger* Logger::get_instance() {
	if (m_logger == nullptr) {
		/*mt.lock();*/
		if (m_logger == nullptr) {
			m_logger = new Logger();
		}
		/*mt.unlock();*/
	}
	return m_logger;
}