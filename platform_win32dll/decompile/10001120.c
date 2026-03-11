/*
 * func-name: sub_10001120
 * func-address: 0x10001120
 * callers: 0x10001360
 * callees: none
 */

SIZE_T __cdecl sub_10001120(char *lpAddress, LPSTR lpFilename, DWORD nSize, _DWORD *a4, _DWORD *a5)
{
  SIZE_T result; // eax
  char *AllocationBase; // esi
  int v7; // eax
  int v8; // ecx
  char *v9; // eax
  unsigned int v10; // ebx
  char *v11; // edi
  int v12; // edx
  char *v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _MEMORY_BASIC_INFORMATION Buffer; // [esp+4h] [ebp-1Ch] BYREF

  result = VirtualQuery(lpAddress, &Buffer, 0x1Cu);
  if ( result )
  {
    AllocationBase = (char *)Buffer.AllocationBase;
    result = GetModuleFileNameA((HMODULE)Buffer.AllocationBase, lpFilename, nSize);
    if ( result )
    {
      v7 = *((_DWORD *)AllocationBase + 15);
      v8 = *(unsigned __int16 *)&AllocationBase[v7 + 20];
      v9 = &AllocationBase[v7];
      v10 = *((unsigned __int16 *)v9 + 3);
      v11 = (char *)(lpAddress - AllocationBase);
      v12 = 0;
      v13 = &v9[v8 + 24];
      if ( *((_WORD *)v9 + 3) )
      {
        v14 = *((_DWORD *)v13 + 3);
        v15 = *((_DWORD *)v13 + 4);
        v16 = *((_DWORD *)v13 + 2);
        while ( 1 )
        {
          v17 = v15;
          if ( v15 <= v16 )
            v17 = v16;
          if ( (unsigned int)v11 >= v14 && (unsigned int)v11 <= v14 + v17 )
            break;
          if ( ++v12 >= v10 )
            return 0;
        }
        *a4 = v12 + 1;
        *a5 = &v11[-v14];
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
