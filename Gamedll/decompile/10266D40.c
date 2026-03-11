/*
 * func-name: sub_10266D40
 * func-address: 0x10266d40
 * callers: 0x10011068
 * callees: 0x1000d3aa, 0x10012887, 0x10015546, 0x10017a8a
 */

int __thiscall sub_10266D40(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v7; // [esp+14h] [ebp-3Ch] BYREF
  int v8; // [esp+18h] [ebp-38h]
  int v9; // [esp+1Ch] [ebp-34h]
  int v10; // [esp+20h] [ebp-30h]
  char v11[4]; // [esp+24h] [ebp-2Ch] BYREF
  int v12; // [esp+28h] [ebp-28h]
  int v13; // [esp+30h] [ebp-20h] BYREF
  int v14; // [esp+4Ch] [ebp-4h]

  sub_1000D3AA((int)&v7, (int)a2);
  v3 = v7;
  v12 = this[2];
  if ( !v7 || v7 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v12 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v13 = *a2;
    v14 = 0;
    sub_10012887((int)&v7);
    LOBYTE(v14) = 1;
    v5 = (_DWORD *)sub_10015546((int)v11, (int)&v13);
    v3 = (_DWORD *)*v5;
    v4 = v5[1];
    LOBYTE(v14) = 0;
    sub_10017A8A();
    v14 = -1;
    sub_10017A8A();
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
