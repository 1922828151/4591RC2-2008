/*
 * func-name: WideCharToMultiByte
 * func-address: 0x102c98e2
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall WideCharToMultiByte(
        UINT CodePage,
        DWORD dwFlags,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        LPCCH lpDefaultChar,
        LPBOOL lpUsedDefaultChar)
{
  return __imp_WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}
