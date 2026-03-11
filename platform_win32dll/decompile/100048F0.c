/*
 * func-name: sub_100048F0
 * func-address: 0x100048f0
 * callers: 0x10004a20
 * callees: 0x10019750, 0x10019940
 */

void *__usercall sub_100048F0@<eax>(void *a1@<esi>)
{
  void *result; // eax
  size_t v2; // eax
  int v3; // ebp
  int v4; // edi
  size_t Size; // [esp+4Ch] [ebp-1814h] BYREF
  DWORD BaseOfDll[3]; // [esp+50h] [ebp-1810h] BYREF
  HANDLE hFile[1024]; // [esp+5Ch] [ebp-1804h] BYREF
  CHAR ModuleName[1024]; // [esp+105Ch] [ebp-804h] BYREF
  CHAR ImageName[1024]; // [esp+145Ch] [ebp-404h] BYREF

  if ( !EnumProcessModules(a1, hFile, 4096, &Size) )
    return (void *)GetLastError();
  v2 = Size;
  if ( Size > 0x1000 )
  {
    result = malloc(Size);
    if ( !result )
      return result;
    EnumProcessModules(a1, result, 4096, &Size);
    v2 = Size;
  }
  result = (void *)(v2 >> 2);
  v3 = (int)result;
  v4 = 0;
  if ( result )
  {
    do
    {
      GetModuleInformation(a1, hFile[v4], BaseOfDll, 12);
      GetModuleFileNameExA(a1, hFile[v4], ImageName, 1024);
      GetModuleBaseNameA(a1, hFile[v4], ModuleName, 1024);
      result = (void *)SymLoadModule(a1, hFile[v4], ImageName, ModuleName, BaseOfDll[0], BaseOfDll[1]);
      if ( !result )
        result = (void *)GetLastError();
      ++v4;
    }
    while ( v4 < v3 );
  }
  return result;
}
