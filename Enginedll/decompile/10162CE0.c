/*
 * func-name: sub_10162CE0
 * func-address: 0x10162ce0
 * callers: 0x10164ad0
 * callees: 0x10019470, 0x10076ef0, 0x1015e0b0, 0x10161810, 0x10161830, 0x10161890, 0x10162c30, 0x101a2534
 */

char __thiscall sub_10162CE0(_DWORD *this, DWORD NumberOfBytesRead)
{
  const CHAR *v3; // eax
  HANDLE FileA; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // ebx
  int *v9; // eax
  unsigned int v10; // [esp+8h] [ebp-40h]
  _DWORD Buffer[2]; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-34h] BYREF
  _BYTE v13[4]; // [esp+24h] [ebp-24h] BYREF
  float v14; // [esp+28h] [ebp-20h]
  float v15; // [esp+2Ch] [ebp-1Ch]
  float v16; // [esp+30h] [ebp-18h]
  int v17; // [esp+44h] [ebp-4h]

  if ( *(_DWORD *)(NumberOfBytesRead + 24) < 0x10u )
    v3 = (const CHAR *)(NumberOfBytesRead + 4);
  else
    v3 = *(const CHAR **)(NumberOfBytesRead + 4);
  FileA = CreateFileA(v3, 0x80000000, 1u, 0, 3u, 0, 0);
  if ( FileA == (HANDLE)-1 )
    return 0;
  if ( !ReadFile(FileA, this + 11, 4u, &NumberOfBytesRead, 0)
    || NumberOfBytesRead != 4
    || !ReadFile(FileA, this + 12, 4u, &NumberOfBytesRead, 0)
    || NumberOfBytesRead != 4
    || !ReadFile(FileA, this + 13, 4u, &NumberOfBytesRead, 0)
    || NumberOfBytesRead != 4
    || !ReadFile(FileA, this + 14, 4u, &NumberOfBytesRead, 0)
    || NumberOfBytesRead != 4 )
  {
    goto LABEL_16;
  }
  if ( !sub_10162C30(this, this[11], this[12], this[13], this[14]) )
  {
    sub_10161890(this);
LABEL_16:
    CloseHandle(FileA);
    return 0;
  }
  v10 = 0;
  if ( std::vector<Model *>::size(this) )
  {
    while ( 1 )
    {
      v6 = 0;
      ReadFile(FileA, Buffer, 4u, &NumberOfBytesRead, 0);
      ReadFile(FileA, v12, 0x10u, &NumberOfBytesRead, 0);
      v7 = operator new(0x20u);
      Buffer[1] = v7;
      v17 = 0;
      if ( v7 )
        v6 = sub_10161810(v7);
      v17 = -1;
      sub_1015E0B0(v6, v12);
      *(_DWORD *)std::vector<Model *>::operator[](this, v10) = v6;
      v8 = 0;
      if ( Buffer[0] )
        break;
LABEL_24:
      if ( ++v10 >= std::vector<Model *>::size(this) )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      if ( !ReadFile(FileA, v13, 0x18u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 24 )
        goto LABEL_16;
      v9 = (int *)std::vector<Model *>::operator[](this, v10);
      sub_10161830(*v9, (int)v13);
      if ( (unsigned int)++v8 >= Buffer[0] )
        goto LABEL_24;
    }
  }
LABEL_25:
  CloseHandle(FileA);
  return 1;
}
