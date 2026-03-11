/*
 * func-name: sub_101714E0
 * func-address: 0x101714e0
 * callers: 0x10172700
 * callees: 0x101a24ac
 */

char __cdecl sub_101714E0(DWORD NumberOfBytesRead, _DWORD *a2, DWORD *a3)
{
  const CHAR *v3; // eax
  HANDLE FileA; // eax
  void *v5; // esi
  DWORD FileSize; // eax
  DWORD *v8; // edi
  void *v9; // eax

  if ( *(_DWORD *)(NumberOfBytesRead + 24) < 0x10u )
    v3 = (const CHAR *)(NumberOfBytesRead + 4);
  else
    v3 = *(const CHAR **)(NumberOfBytesRead + 4);
  FileA = CreateFileA(v3, 0x80000000, 1u, 0, 3u, 0, 0);
  v5 = FileA;
  if ( FileA == (HANDLE)-1 )
    return 0;
  FileSize = GetFileSize(FileA, 0);
  v8 = a3;
  *a3 = FileSize;
  v9 = operator new(FileSize);
  *a2 = v9;
  ReadFile(v5, v9, *v8, &NumberOfBytesRead, 0);
  CloseHandle(v5);
  return 1;
}
