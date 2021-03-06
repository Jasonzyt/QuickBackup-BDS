/* FILENAME = Function.h */
#pragma once
#include"Ԥ����ͷ.h"
#include"json/json.h"
#pragma warning(disable:4996)

using namespace std;

//Function Declaration
string getTime();
string getMinute();
string getCustomTime(const char* Format);
string editZIPFilename(string outputfilename);

string getConfig(string configfile, string key, string defaultvaule);

bool findFile(string filename);
bool mkdir(string dirname);
bool DownloadFile(LPCWSTR url, LPCWSTR downloadPath);
bool FolderExists(const wchar_t* path);
int getFiles();
size_t GetFileSizeByte(const std::string& file_name);
string GetFileSize(const std::string& file_name);
string GetWorldName();

wchar_t* CharToWChar(const char* str);

void ReturnCheckOutput(int in);

string md5(std::string dat);
string md5(const void* dat, size_t len);
string md5file(const char* filename);
string md5file(std::FILE* file);
string md5sum6(std::string dat);
string md5sum6(const void* dat, size_t len);
bool CheckFileMD5(string filename, string inputMD5);
string GetFileMD5(string filename);
