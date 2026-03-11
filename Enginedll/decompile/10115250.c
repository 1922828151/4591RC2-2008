/*
 * func-name: sub_10115250
 * func-address: 0x10115250
 * callers: 0x1010b430
 * callees: 0x1010fd40, 0x10113a00
 */

int __thiscall sub_10115250(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v7; // [esp+10h] [ebp-40h] BYREF
  int v8; // [esp+14h] [ebp-3Ch]
  char v9[4]; // [esp+18h] [ebp-38h] BYREF
  int v10; // [esp+1Ch] [ebp-34h]
  _BYTE v11[28]; // [esp+24h] [ebp-2Ch] BYREF
  int v12; // [esp+40h] [ebp-10h]
  int v13; // [esp+4Ch] [ebp-4h]

  sub_1010FD40(this, &v7, a2);
  v3 = v7;
  v10 = this[2];
  if ( !v7 || v7 != this + 1 )
    invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v10 )
  {
    std::string::string(v11, a2);
    v12 = 0;
    v13 = 0;
    v5 = (_DWORD *)sub_10113A00(this, (int)v9, (int)v11);
    v3 = (_DWORD *)*v5;
    v4 = v5[1];
    v13 = -1;
    std::string::~string(v11);
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    invalid_parameter_noinfo();
  return v4 + 36;
}
