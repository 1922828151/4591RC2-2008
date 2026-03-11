/*
 * func-name: sub_1007BE20
 * func-address: 0x1007be20
 * callers: 0x1007c450
 * callees: none
 */

char __stdcall sub_1007BE20(int a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const CHAR *v8; // eax
  HANDLE FileA; // esi
  _FILETIME LastWriteTime; // [esp+4h] [ebp-24h] BYREF
  struct _FILETIME FileTime; // [esp+Ch] [ebp-1Ch] BYREF
  FILETIME FileTime2; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  v14 = 0;
  v8 = (const CHAR *)std::string::c_str(&a2);
  FileA = CreateFileA(v8, 0x80000000, 0, 0, 3u, 0, 0);
  if ( FileA != (HANDLE)-1
    && (GetFileTime(FileA, 0, 0, &LastWriteTime),
        CloseHandle(FileA),
        SystemTimeToFileTime((const SYSTEMTIME *)(a1 + 88), &FileTime),
        SystemTimeToFileTime((const SYSTEMTIME *)(a1 + 104), &FileTime2),
        CompareFileTime(&LastWriteTime, &FileTime) == 1)
    && CompareFileTime(&LastWriteTime, &FileTime2) == 1 )
  {
    v14 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    v14 = -1;
    std::string::~string(&a2);
    return 1;
  }
}
