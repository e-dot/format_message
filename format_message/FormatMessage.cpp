#include "FormatMessage.h"

const wchar_t* formatMessage(DWORD dwErrorCode) {
  _com_error error(dwErrorCode);
  LPCTSTR errorText = error.ErrorMessage();
  return errorText;
}
