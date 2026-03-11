/*
 * func-name: sub_10137F20
 * func-address: 0x10137f20
 * callers: 0x100114ff
 * callees: 0x1000259f, 0x10019ff6, 0x102c9576, 0x102c957c, 0x102c9582, 0x102c99de, 0x102c9d62, 0x102c9dc8, 0x102c9ea2
 */

void *__thiscall sub_10137F20(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  void *v11; // ebx
  int last_of; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  const CHAR *v16; // eax
  HANDLE FileA; // eax
  void *v18; // edi
  int v19; // eax
  int v20; // edi
  const CHAR *v21; // eax
  void *v22; // [esp-10h] [ebp-C8h]
  LONG v23; // [esp-Ch] [ebp-C4h]
  int Buffer; // [esp+14h] [ebp-A4h] BYREF
  DWORD NumberOfBytesRead; // [esp+18h] [ebp-A0h] BYREF
  HANDLE hFile; // [esp+1Ch] [ebp-9Ch]
  _BYTE v27[28]; // [esp+20h] [ebp-98h] BYREF
  void *v28; // [esp+3Ch] [ebp-7Ch]
  DWORD NumberOfBytesWritten; // [esp+40h] [ebp-78h] BYREF
  _BYTE v30[28]; // [esp+44h] [ebp-74h] BYREF
  void *v31; // [esp+60h] [ebp-58h]
  int v32[3]; // [esp+64h] [ebp-54h] BYREF
  _BYTE v33[28]; // [esp+70h] [ebp-48h] BYREF
  _BYTE v34[28]; // [esp+8Ch] [ebp-2Ch] BYREF
  int v35; // [esp+B4h] [ebp-4h]

  v35 = 0;
  v9 = *(_DWORD *)sub_1000259F(&a2);
  if ( v9 )
  {
    v11 = operator new(*(_DWORD *)(v9 + 56) + 1);
    memset(v11, 0, *(_DWORD *)(v9 + 56) + 1);
    std::string::string(v33);
    LOBYTE(v35) = 1;
    last_of = std::string::find_last_of(&a2, &unk_10313B0C, std::string::npos);
    if ( last_of == -1 )
    {
      std::string::operator=(v33, &a2);
    }
    else
    {
      v13 = std::string::length(&a2);
      v14 = std::string::substr(&a2, v27, last_of + 1, v13 - last_of - 1);
      LOBYTE(v35) = 2;
      std::string::operator=(v33, v14);
      LOBYTE(v35) = 1;
      std::string::~string(v27);
    }
    std::string::string(v34, v33);
    LOBYTE(v35) = 3;
    v15 = std::operator+<char>(v27, v33, &unk_10313B10);
    LOBYTE(v35) = 4;
    std::string::operator=(v33, v15);
    LOBYTE(v35) = 3;
    std::string::~string(v27);
    if ( *(_BYTE *)(v9 + 64) )
    {
      v16 = (const CHAR *)std::string::c_str(v33);
      FileA = CreateFileA(v16, 0x40000000u, 0, 0, 2u, 0x80u, 0);
      v23 = *(_DWORD *)(v9 + 60) + *(_DWORD *)(this + 36);
      v22 = *(void **)(this + 32);
      hFile = FileA;
      SetFilePointer(v22, v23, 0, 0);
      ReadFile(*(HANDLE *)(this + 32), &Buffer, 4u, &NumberOfBytesRead, 0);
      v18 = operator new(Buffer - 3);
      memset(v18, 0, Buffer - 3);
      ReadFile(*(HANDLE *)(this + 32), v18, Buffer - 4, &NumberOfBytesRead, 0);
      WriteFile(hFile, v18, NumberOfBytesRead, &NumberOfBytesWritten, 0);
      CloseHandle(hFile);
      operator delete[](v18);
      v19 = std::string::c_str(v33);
      v20 = gzopen(v19, &unk_10313B14);
      gzread(v20, v11, *(_DWORD *)(v9 + 56));
      gzclose(v20);
      v21 = (const CHAR *)std::string::c_str(v33);
      DeleteFileA(v21);
    }
    else
    {
      SetFilePointer(*(HANDLE *)(this + 32), *(_DWORD *)(this + 36) + *(_DWORD *)(v9 + 60) + 4, 0, 0);
      ReadFile(*(HANDLE *)(this + 32), v11, *(_DWORD *)(v9 + 56) - 4, &NumberOfBytesRead, 0);
    }
    std::string::string(v27, &a2);
    v28 = v11;
    LOBYTE(v35) = 5;
    std::string::string(v30, v27);
    v31 = v28;
    LOBYTE(v35) = 6;
    sub_10019FF6((int)v32, v30);
    LOBYTE(v35) = 5;
    std::string::~string(v30);
    LOBYTE(v35) = 3;
    std::string::~string(v27);
    LOBYTE(v35) = 1;
    std::string::~string(v34);
    LOBYTE(v35) = 0;
    std::string::~string(v33);
    v35 = -1;
    std::string::~string(&a2);
    return v11;
  }
  else
  {
    v35 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
