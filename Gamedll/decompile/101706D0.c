/*
 * func-name: sub_101706D0
 * func-address: 0x101706d0
 * callers: 0x1000f18c
 * callees: 0x100082e2, 0x10015ef1
 */

int __thiscall sub_101706D0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  _DWORD *v9; // [esp+14h] [ebp-5Ch] BYREF
  int v10; // [esp+18h] [ebp-58h]
  char v11[4]; // [esp+1Ch] [ebp-54h] BYREF
  int v12; // [esp+20h] [ebp-50h]
  _BYTE v13[28]; // [esp+28h] [ebp-48h] BYREF
  int v14; // [esp+44h] [ebp-2Ch] BYREF
  _BYTE v15[28]; // [esp+48h] [ebp-28h] BYREF
  int v16; // [esp+6Ch] [ebp-4h]

  sub_100082E2((int)&v9, (int)a2);
  v3 = v9;
  v12 = this[2];
  if ( !v9 || v9 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v10;
  if ( v10 == v12 )
  {
    v5 = std::wstring::wstring(v13);
    v6 = *a2;
    v16 = 0;
    v14 = v6;
    std::wstring::wstring(v15, v5);
    LOBYTE(v16) = 1;
    v7 = (_DWORD *)sub_10015EF1((int)v11, (int)&v14);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v16) = 0;
    std::wstring::~wstring(v15);
    v16 = -1;
    std::wstring::~wstring(v13);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
