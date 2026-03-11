/*
 * func-name: sub_10002DC0
 * func-address: 0x10002dc0
 * callers: 0x100030a0, 0x10003150
 * callees: 0x100033e0, 0x10003480, 0x10007a96, 0x10019750
 */

int __stdcall sub_10002DC0(int a1, int a2)
{
  unsigned int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  const char *v12; // eax
  _DWORD *v14; // [esp+14h] [ebp-2E4h]
  _BYTE v15[28]; // [esp+18h] [ebp-2E0h] BYREF
  _BYTE v16[28]; // [esp+34h] [ebp-2C4h] BYREF
  _BYTE v17[28]; // [esp+50h] [ebp-2A8h] BYREF
  _BYTE v18[28]; // [esp+6Ch] [ebp-28Ch] BYREF
  _BYTE v19[28]; // [esp+88h] [ebp-270h] BYREF
  int v20; // [esp+A4h] [ebp-254h] BYREF
  _DWORD v21[144]; // [esp+A8h] [ebp-250h] BYREF
  int v22; // [esp+2F4h] [ebp-4h]

  v2 = 0;
  while ( *(_DWORD *)(a2 + 4 * v2) )
  {
    v3 = *(_DWORD *)(a2 + 4 * v2);
    v20 = 580;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v3 + 60))(v3, &v20);
    if ( !sub_100033E0((_DWORD *)(a1 + 4), v21) && (int)++v2 < 4 )
      continue;
    return 1;
  }
  v14 = (_DWORD *)(a2 + 4 * v2);
  (*(void (__stdcall **)(_DWORD, int, _DWORD *, _DWORD))(**(_DWORD **)(dword_100384E8 + 6080) + 12))(
    *(_DWORD *)(dword_100384E8 + 6080),
    a1 + 4,
    v14,
    0);
  if ( *v14 )
  {
    v4 = sub_10003480((int)v18, v2);
    v22 = 0;
    v5 = std::string::string(" ");
    LOBYTE(v22) = 1;
    v6 = std::string::string(a1 + 40);
    LOBYTE(v22) = 2;
    v7 = std::operator+<char>(v17, v6, v5);
    LOBYTE(v22) = 3;
    v8 = std::operator+<char>(v19, v7, v4);
    v9 = *(_DWORD *)(dword_100384E8 + 7304);
    v10 = (_DWORD *)(dword_100384E8 + 7304);
    LOBYTE(v22) = 4;
    if ( !v9 || v2 >= (*(_DWORD *)(dword_100384E8 + 7308) - v9) / 28 )
      invalid_parameter_noinfo();
    std::string::operator=(*v10 + 28 * v2, v8);
    LOBYTE(v22) = 3;
    std::string::~string(v19);
    LOBYTE(v22) = 2;
    std::string::~string(v17);
    LOBYTE(v22) = 1;
    std::string::~string(v15);
    LOBYTE(v22) = 0;
    std::string::~string(v16);
    v22 = -1;
    std::string::~string(v18);
    v11 = (*(int (__stdcall **)(_DWORD, void *))(*(_DWORD *)*v14 + 44))(*v14, &unk_1001C0E4);
    if ( v11 < 0 )
    {
      v12 = sub_10007A96(v11);
      Warning("Joystick # %i SetDataFormat() failed: %s", v2, v12);
    }
  }
  return 1;
}
