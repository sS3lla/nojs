#pragma once

// Both CLASS_LOG and CLASS_ERROR require the m_log_prefix member to be set

// Log a message with class prefix
#define CLASS_LOG(message) std::cout << m_log_prefix << message << std::endl;

// Log a error with class prefix in red
#define CLASS_ERROR(error) std::cout << m_log_prefix << "\e[1;31m" << error << "\e[0m" << std::endl;