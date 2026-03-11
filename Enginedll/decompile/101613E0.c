/*
 * func-name: ?SaveMapAfter@Terrain@@UAEXXZ
 * func-address: 0x101613e0
 * callers: none
 * callees: 0x1004d710, 0x1015d9a0, 0x1015e8d0, 0x1015f860, 0x101611e0
 */

void __thiscall Terrain::SaveMapAfter(Terrain *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // eax
  int last_of; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // [esp-2Ch] [ebp-170h] BYREF
  LPCSTR v14; // [esp-28h] [ebp-16Ch]
  int v15; // [esp-24h] [ebp-168h]
  int v16; // [esp-20h] [ebp-164h]
  int v17; // [esp-1Ch] [ebp-160h]
  int v18; // [esp-18h] [ebp-15Ch]
  unsigned int v19; // [esp-14h] [ebp-158h]
  char *v20; // [esp+0h] [ebp-144h]
  int v21[7]; // [esp+4h] [ebp-140h] BYREF
  CHAR v22[28]; // [esp+20h] [ebp-124h] BYREF
  CHAR FileName[28]; // [esp+3Ch] [ebp-108h] BYREF
  _BYTE v24[28]; // [esp+58h] [ebp-ECh] BYREF
  _BYTE v25[28]; // [esp+74h] [ebp-D0h] BYREF
  CHAR v26[28]; // [esp+90h] [ebp-B4h] BYREF
  CHAR v27[28]; // [esp+ACh] [ebp-98h] BYREF
  int v28[7]; // [esp+C8h] [ebp-7Ch] BYREF
  _BYTE v29[28]; // [esp+E4h] [ebp-60h] BYREF
  int v30[7]; // [esp+100h] [ebp-44h] BYREF
  _BYTE v31[28]; // [esp+11Ch] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v32; // [esp+138h] [ebp-Ch]
  void *v33; // [esp+13Ch] [ebp-8h]
  int v34; // [esp+140h] [ebp-4h]

  v34 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v33 = &loc_101B597B;
  v32 = ExceptionList;
  if ( *(_DWORD *)(*((_DWORD *)this + 178) + 3212) < 0x10u )
    v3 = *((_DWORD *)this + 178) + 3192;
  else
    v3 = *(_DWORD *)(*((_DWORD *)this + 178) + 3192);
  std::string::string(v22, v3);
  v34 = 0;
  last_of = std::string::find_last_of(v22, ".", std::string::npos, 1);
  std::string::substr(v22, v21, 0, last_of);
  LOBYTE(v34) = 1;
  if ( std::string::find_last_of(v21, "\\", std::string::npos, 1) != -1 )
  {
    v5 = std::string::find_last_of(v21, "\\", std::string::npos, 1);
    v6 = std::string::substr(v21, FileName, 0, v5);
    LOBYTE(v34) = 2;
    std::string::operator=(v21, v6);
    LOBYTE(v34) = 1;
    std::string::~string(FileName);
  }
  v7 = std::operator+<char>(v30, v21, "\\");
  LOBYTE(v34) = 3;
  v8 = std::operator+<char>(FileName, v7, (char *)this + 444);
  LOBYTE(v34) = 4;
  std::operator+<char>(v24, v8, ".hmd");
  LOBYTE(v34) = 6;
  std::string::~string(FileName);
  LOBYTE(v34) = 7;
  std::string::~string(v30);
  v20 = &v13;
  std::string::string(&v13, v24);
  sub_1015D9A0((LPCVOID *)this + 338, v13, v14, v15, v16, v17, v18, v19);
  v9 = std::operator+<char>(v28, v21, "\\");
  LOBYTE(v34) = 8;
  v10 = std::operator+<char>(v27, v9, (char *)this + 444);
  LOBYTE(v34) = 9;
  std::operator+<char>(v26, v10, ".bmp");
  LOBYTE(v34) = 11;
  std::string::~string(v27);
  LOBYTE(v34) = 12;
  std::string::~string(v28);
  v20 = &v13;
  std::string::string(&v13, v26);
  sub_1015F860((_DWORD *)this + 338, v13, v14, v15, v16, v17, v18, v19);
  v11 = std::operator+<char>(v31, v21, "\\");
  LOBYTE(v34) = 13;
  v12 = std::operator+<char>(v29, v11, (char *)this + 444);
  LOBYTE(v34) = 14;
  std::operator+<char>(v25, v12, ".suf");
  LOBYTE(v34) = 16;
  std::string::~string(v29);
  LOBYTE(v34) = 17;
  std::string::~string(v31);
  sub_101611E0((_DWORD *)this + 346, (int)v25);
  Terrain::ForceComplete(this, 0);
  Actor::SaveMapAfter(this);
  LOBYTE(v34) = 12;
  std::string::~string(v25);
  LOBYTE(v34) = 7;
  std::string::~string(v26);
  LOBYTE(v34) = 1;
  std::string::~string(v24);
  LOBYTE(v34) = 0;
  std::string::~string(v21);
  v34 = -1;
  std::string::~string(v22);
}
