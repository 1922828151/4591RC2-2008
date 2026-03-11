/*
 * func-name: sub_1015F510
 * func-address: 0x1015f510
 * callers: 0x10164ad0
 * callees: 0x1015db30, 0x1015f400, 0x101a252e
 */

char __thiscall sub_1015F510(int this, char a2, LPCSTR lpFileName, int a4, int a5, int a6, int a7, unsigned int a8)
{
  const CHAR *p_lpFileName; // eax
  HANDLE FileA; // esi
  int *v12; // ebp
  int *v13; // ebx
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-4h]

  p_lpFileName = lpFileName;
  v15 = 0;
  if ( a8 < 0x10 )
    p_lpFileName = (const CHAR *)&lpFileName;
  FileA = CreateFileA(p_lpFileName, 0x80000000, 1u, 0, 3u, 0, 0);
  if ( FileA == (HANDLE)-1 )
  {
    v15 = -1;
    std::string::~string(&a2);
    return 0;
  }
  v12 = (int *)(this + 8);
  if ( ReadFile(FileA, (LPVOID)(this + 8), 4u, &NumberOfBytesRead, 0) )
  {
    if ( NumberOfBytesRead == 4 )
    {
      v13 = (int *)(this + 12);
      if ( ReadFile(FileA, (LPVOID)(this + 12), 4u, &NumberOfBytesRead, 0) )
      {
        if ( NumberOfBytesRead == 4 )
        {
          if ( sub_1015F400((void *)this, *v12, *v13)
            && ReadFile(FileA, *(LPVOID *)(this + 20), 4 * *v13 * *v12, &NumberOfBytesRead, 0)
            && NumberOfBytesRead == 4 * *v13 * *v12 )
          {
            CloseHandle(FileA);
            memcpy(*(void **)(this + 24), *(const void **)(this + 20), 4 * *v13 * *v12);
            v15 = -1;
            std::string::~string(&a2);
            return 1;
          }
          sub_1015DB30((void *)this);
        }
      }
    }
  }
  CloseHandle(FileA);
  v15 = -1;
  std::string::~string(&a2);
  return 0;
}
