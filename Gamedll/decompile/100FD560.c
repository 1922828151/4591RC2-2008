/*
 * func-name: sub_100FD560
 * func-address: 0x100fd560
 * callers: 0x1000be6a
 * callees: 0x10003adf, 0x1000df7b
 */

int __thiscall sub_100FD560(_DWORD *this, void *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v7; // [esp+14h] [ebp-40h] BYREF
  int v8; // [esp+18h] [ebp-3Ch]
  int v9; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+20h] [ebp-34h]
  _BYTE v11[28]; // [esp+28h] [ebp-2Ch] BYREF
  int v12; // [esp+44h] [ebp-10h]
  int v13; // [esp+50h] [ebp-4h]

  sub_1000DF7B((int)&v7, (int)a2);
  v3 = v7;
  v10 = this[2];
  if ( !v7 || v7 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v10 )
  {
    std::string::string(v11, a2);
    v12 = 0;
    v13 = 0;
    v5 = (_DWORD *)sub_10003ADF((int)&v9, v11);
    v3 = (_DWORD *)*v5;
    v4 = v5[1];
    v13 = -1;
    std::string::~string(v11);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 36;
}
