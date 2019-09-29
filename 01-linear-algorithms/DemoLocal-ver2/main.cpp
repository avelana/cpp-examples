/*
 * https://ru.stackoverflow.com/questions/459154/Русский-язык-в-консоли
 */
#include <iostream>
#include <io.h>
#include <fcntl.h>

int main(int argc, wchar_t *argv[]) {
  _setmode(_fileno(stdout), _O_U16TEXT);
  _setmode(_fileno(stdin), _O_U16TEXT);
  _setmode(_fileno(stderr), _O_U16TEXT);

  std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;
  // или
  wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");

  wchar_t ch;
  std::wcin >> ch;

  std::wcout << L"символ = " << ch << ".\n";

  return 0;
}