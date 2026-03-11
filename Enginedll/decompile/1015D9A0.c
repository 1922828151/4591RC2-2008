/*
 * func-name: sub_1015D9A0
 * func-address: 0x1015d9a0
 * callers: 0x101613e0
 * callees: none
 */

char __thiscall sub_1015D9A0(
        LPCVOID *this,
        char a2,
        LPCSTR lpFileName,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  const CHAR *p_lpFileName; // eax
  HANDLE FileA; // esi
  _DWORD *v12; // edi
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-14h] BYREF
  _DWORD *v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+14h] [ebp-4h]

  if ( !this[5] )
    goto LABEL_2;
  p_lpFileName = lpFileName;
  if ( a8 < 0x10 )
    p_lpFileName = (const CHAR *)&lpFileName;
  FileA = CreateFileA(p_lpFileName, 0x40000000u, 0, 0, 4u, 0, 0);
  if ( FileA == (HANDLE)-1 )
  {
LABEL_2:
    v15 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    v14 = this + 2;
    if ( WriteFile(FileA, this + 2, 4u, &NumberOfBytesWritten, 0)
      && NumberOfBytesWritten == 4
      && (v12 = this + 3, WriteFile(FileA, this + 3, 4u, &NumberOfBytesWritten, 0))
      && NumberOfBytesWritten == 4
      && WriteFile(FileA, this[5], 4 * *v12 * *v14, &NumberOfBytesWritten, 0)
      && NumberOfBytesWritten == 4 * *v12 * *v14 )
    {
      CloseHandle(FileA);
      v15 = -1;
      std::string::~string(&a2);
      return 1;
    }
    else
    {
      CloseHandle(FileA);
      v15 = -1;
      std::string::~string(&a2);
      return 0;
    }
  }
}
