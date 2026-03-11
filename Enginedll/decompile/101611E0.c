/*
 * func-name: sub_101611E0
 * func-address: 0x101611e0
 * callers: 0x101613e0
 * callees: 0x10019470, 0x10076ef0, 0x1016a390, 0x101757c0
 */

char __thiscall sub_101611E0(_DWORD *this, int a2)
{
  const CHAR *v3; // eax
  HANDLE FileA; // ebx
  unsigned int i; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  const void *v9; // eax
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-28h] BYREF
  int Buffer; // [esp+14h] [ebp-24h] BYREF
  int j; // [esp+18h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch]
  int v15; // [esp+24h] [ebp-14h]
  _DWORD v16[4]; // [esp+28h] [ebp-10h] BYREF

  if ( *(_DWORD *)(a2 + 24) < 0x10u )
    v3 = (const CHAR *)(a2 + 4);
  else
    v3 = *(const CHAR **)(a2 + 4);
  FileA = CreateFileA(v3, 0x40000000u, 0, 0, 4u, 0, 0);
  if ( FileA == (HANDLE)-1 )
    return 0;
  if ( !WriteFile(FileA, this + 11, 4u, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != 4
    || !WriteFile(FileA, this + 12, 4u, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != 4
    || !WriteFile(FileA, this + 13, 4u, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != 4
    || !WriteFile(FileA, this + 14, 4u, &NumberOfBytesWritten, 0)
    || NumberOfBytesWritten != 4 )
  {
LABEL_24:
    CloseHandle(FileA);
    return 0;
  }
  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    Buffer = *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](this, i) + 8);
    WriteFile(FileA, &Buffer, 4u, &NumberOfBytesWritten, 0);
    v6 = *(_DWORD **)std::vector<Model *>::operator[](this, i);
    v16[0] = v6[3];
    v16[1] = v6[4];
    v16[2] = v6[5];
    v16[3] = v6[6];
    WriteFile(FileA, v16, 0x10u, &NumberOfBytesWritten, 0);
    v7 = *(_DWORD *)std::vector<Model *>::operator[](this, i);
    v14 = **(_DWORD **)(v7 + 4);
    for ( j = v7; ; sub_1016A390(&j) )
    {
      v8 = *(_DWORD *)std::vector<Model *>::operator[](this, i);
      v15 = *(_DWORD *)(v8 + 4);
      if ( !j || j != v8 )
        invalid_parameter_noinfo();
      if ( v14 == v15 )
        break;
      v9 = (const void *)sub_101757C0(&j);
      if ( !WriteFile(FileA, v9, 0x18u, &NumberOfBytesWritten, 0) || NumberOfBytesWritten != 24 )
        goto LABEL_24;
    }
  }
  CloseHandle(FileA);
  return 1;
}
