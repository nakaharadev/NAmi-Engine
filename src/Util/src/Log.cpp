#include <Util/Log.hpp>

#include <string>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <stdio.h>

#define INFO		"\033[92;1mINFO\033[0m"
#define DEBUG		"\033[96;1mDEBUG\033[0m"
#define WARNING		"\033[93;1mWARNING\033[0m"
#define ERROR		"\033[91;1mERROR\033[0m"
#define CRITICAL	"\033[97;41;1mCRITICAL\033[0m"

void showLog(std::string __time, std::string __level, std::string __title, std::string __body) {
    printf(
        "%s [%s] %s : %s\n",
        __time.c_str(),
        __level.c_str(),
        __title.c_str(),
        __body.c_str()
    );
}

std::string getTime() {
    auto now = std::chrono::system_clock::now();
    auto now_time_t = std::chrono::system_clock::to_time_t(now);

    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;

    std::tm now_tm = *std::localtime(&now_time_t);

    std::ostringstream oss;
    oss << std::put_time(&now_tm, "%d.%m.%Y %H:%M:%S")
        << '.' << std::setfill('0') << std::setw(3) << ms.count();

    return oss.str();
}

void logInfo(std::string __title, std::string __body) { showLog(getTime(), INFO, __title, __body); }
void logDebug(std::string __title, std::string __body) { showLog(getTime(), DEBUG, __title, __body); }
void logWarning(std::string __title, std::string __body) { showLog(getTime(), WARNING, __title, __body); }
void logError(std::string __title, std::string __body) { showLog(getTime(), ERROR, __title, __body); }
void logCritical(std::string __title, std::string __body) { showLog(getTime(), CRITICAL, __title, __body); }