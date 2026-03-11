/*
 * func-name: sub_1026F300
 * func-address: 0x1026f300
 * callers: 0x1000fafb
 * callees: 0x10007059, 0x1000b50a, 0x100140c9, 0x102c9d50
 */

int __thiscall sub_1026F300(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v8; // [esp+14h] [ebp-44h] BYREF
  int v9; // [esp+18h] [ebp-40h]
  char v10[4]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v11; // [esp+20h] [ebp-38h]
  char v12[4]; // [esp+28h] [ebp-30h] BYREF
  void *v13; // [esp+2Ch] [ebp-2Ch]
  int v14; // [esp+30h] [ebp-28h]
  int v15; // [esp+34h] [ebp-24h]
  int v16; // [esp+38h] [ebp-20h] BYREF
  void *v17; // [esp+40h] [ebp-18h]
  int v18; // [esp+44h] [ebp-14h]
  int v19; // [esp+48h] [ebp-10h]
  int v20; // [esp+54h] [ebp-4h]

  sub_10007059((int)&v8, (int)a2);
  v3 = v8;
  v11 = this[2];
  if ( !v8 || v8 != this + 1 )
    _invalid_parameter_noinfo();
  if ( v9 == v11 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v4 = *a2;
    v20 = 0;
    v16 = v4;
    sub_1000B50A((int)v12);
    LOBYTE(v20) = 1;
    v5 = (_DWORD *)sub_100140C9((int)v10, (int)&v16);
    v3 = (_DWORD *)*v5;
    v9 = v5[1];
    if ( v17 )
      operator delete(v17);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( v13 )
      operator delete(v13);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3[1] )
  {
    _invalid_parameter_noinfo();
    v6 = v9;
  }
  return v6 + 12;
}
