#pragma once

#include <string>

void logInfo(std::string __title, std::string __body);
void logDebug(std::string __title, std::string __body);
void logWarning(std::string __title, std::string __body);
void logError(std::string __title, std::string __body);
void logCritical(std::string __title, std::string __body);