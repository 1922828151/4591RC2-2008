/*
 * func-name: sub_101F08F0
 * func-address: 0x101f08f0
 * callers: 0x10016414
 * callees: 0x10006f5f, 0x100159a1
 */

int __thiscall sub_101F08F0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // edx
  void *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v9; // [esp+14h] [ebp-5Ch] BYREF
  int v10; // [esp+18h] [ebp-58h]
  char v11[4]; // [esp+1Ch] [ebp-54h] BYREF
  int v12; // [esp+20h] [ebp-50h]
  _BYTE v13[28]; // [esp+28h] [ebp-48h] BYREF
  int v14; // [esp+44h] [ebp-2Ch] BYREF
  _BYTE v15[28]; // [esp+48h] [ebp-28h] BYREF
  int v16; // [esp+6Ch] [ebp-4h]

  sub_10006F5F((int)&v9, (int)a2);
  v3 = v9;
  v12 = this[2];
  if ( !v9 || v9 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v10;
  if ( v10 == v12 )
  {
    std::string::string(v13);
    v5 = *a2;
    v16 = 0;
    v14 = v5;
    std::string::string(v15, v6);
    LOBYTE(v16) = 1;
    v7 = (_DWORD *)sub_100159A1((int)v11, (int)&v14);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v16) = 0;
    std::string::~string(v15);
    v16 = -1;
    std::string::~string(v13);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
