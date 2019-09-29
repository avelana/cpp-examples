//
// Created by volha on 30.09.2019.
//

#ifndef STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
#define STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
#include <string>

bool ReadFileByLine(const std::string &file_path);
bool ReadFileByString(const std::string &file_path);
bool ReadFileByLineTillDelimiter(const std::string &file_path);
bool ReadFileByInt(const std::string &file_path);
bool ReadFileToStringStream(const std::string &file_path);

bool WriteToFile(const std::string &file_path, const std::string &str);

#endif //STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
