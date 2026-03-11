/*
 * func-name: sub_101153F0
 * func-address: 0x101153f0
 * callers: 0x1010b240
 * callees: 0x10114560, 0x1016fd00
 */

int __thiscall sub_101153F0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // edx
  void *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v9; // [esp+10h] [ebp-5Ch] BYREF
  int v10; // [esp+14h] [ebp-58h]
  char v11[4]; // [esp+18h] [ebp-54h] BYREF
  int v12; // [esp+1Ch] [ebp-50h]
  _BYTE v13[28]; // [esp+24h] [ebp-48h] BYREF
  int v14; // [esp+40h] [ebp-2Ch] BYREF
  _BYTE v15[28]; // [esp+44h] [ebp-28h] BYREF
  int v16; // [esp+68h] [ebp-4h]

  sub_1016FD00(&v9, a2);
  v3 = v9;
  v12 = this[2];
  if ( !v9 || v9 != this + 1 )
    invalid_parameter_noinfo();
  v4 = v10;
  if ( v10 == v12 )
  {
    std::wstring::wstring(v13);
    v5 = *a2;
    v16 = 0;
    v14 = v5;
    std::wstring::wstring(v15, v6);
    LOBYTE(v16) = 1;
    v7 = (_DWORD *)sub_10114560(this, (int)v11, &v14);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v16) = 0;
    std::wstring::~wstring(v15);
    v16 = -1;
    std::wstring::~wstring(v13);
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    invalid_parameter_noinfo();
  return v4 + 12;
}
