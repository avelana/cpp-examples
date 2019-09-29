//
// Created by volha on 30.09.2019.
//

#ifndef STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
#define STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
#include <string>

bool ReadFileByLine(std::string file_path);
bool ReadFileByString(std::string file_path);
bool ReadFileByLineTillDelimiter(std::string file_path);
bool ReadFileByInt(std::string file_path);
bool ReadFileToStringStream(std::string file_path);

#endif //STREAMS_DEMOFSTREAMBASICS_IO_FILE_H_
