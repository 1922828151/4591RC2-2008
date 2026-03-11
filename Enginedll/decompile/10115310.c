/*
 * func-name: sub_10115310
 * func-address: 0x10115310
 * callers: 0x1010b030
 * callees: 0x1010e220, 0x1010e270, 0x101105e0, 0x10113fb0
 */

int __thiscall sub_10115310(_DWORD *this, void *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  void *v5; // eax
  char *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v9; // [esp+10h] [ebp-74h] BYREF
  int v10; // [esp+14h] [ebp-70h]
  char v11[4]; // [esp+18h] [ebp-6Ch] BYREF
  int v12; // [esp+1Ch] [ebp-68h]
  _BYTE v13[28]; // [esp+24h] [ebp-60h] BYREF
  char v14[56]; // [esp+40h] [ebp-44h] BYREF
  int v15; // [esp+80h] [ebp-4h]

  sub_101105E0(this, &v9, (int)a2);
  v3 = v9;
  v12 = this[2];
  if ( !v9 || v9 != this + 1 )
    invalid_parameter_noinfo();
  v4 = v10;
  if ( v10 == v12 )
  {
    std::wstring::wstring(v13);
    v15 = 0;
    v6 = (char *)sub_1010E270((int)v14, a2, v5);
    LOBYTE(v15) = 1;
    v7 = (_DWORD *)sub_10113FB0(this, (int)v11, v6);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v15) = 0;
    sub_1010E220(v14);
    v15 = -1;
    std::wstring::~wstring(v13);
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    invalid_parameter_noinfo();
  return v4 + 36;
}
