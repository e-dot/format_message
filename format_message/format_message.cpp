// format_message.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "FormatMessage.h"

void usage();

int wmain(int argc, wchar_t* argv[])
{
  int exitCode = 0;
  DWORD errorCode = ERROR_SUCCESS;

  if (argc < 2 || argc > 3) {
    usage();
    exit(1);
  }
  errorCode = _wtoi(argv[1]);

  std::wcout << L"Code=" << errorCode << L"\r\n";
  std::wcout << formatMessage(errorCode) << L"\r\n";

  exit(exitCode);
}

void usage() {
  std::wcout << L"Usage : format_message.exe ERROR_CODE";
}
