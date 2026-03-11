/*
 * func-name: sub_101E2CC0
 * func-address: 0x101e2cc0
 * callers: 0x10006497
 * callees: 0x1000245f, 0x100050b0, 0x100092c8, 0x10015a0f, 0x100198e4, 0x102c9d98
 */

int __thiscall sub_101E2CC0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v4; // edi
  int v5; // ebp
  _DWORD *v6; // ebx
  int v7; // edx
  _DWORD *v8; // ebx
  int v9; // esi
  _DWORD *v10; // ebx
  _DWORD *v12; // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  char v14[4]; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+34h] [ebp-4h]

  v4 = a2;
  v5 = this[4];
  a2 = (_DWORD *)*a2;
  v6 = this + 3;
  sub_10015A0F((int)&v12, (int)&a2);
  if ( !v12 || v12 != v6 )
    _invalid_parameter_noinfo();
  if ( v13 != v5 )
    return 0;
  v7 = this[14];
  a2 = (_DWORD *)*v4;
  v8 = this + 13;
  v15 = v7;
  sub_100050B0((int)&v12, (int)&a2);
  v9 = 0;
  if ( !v12 || v12 != v8 )
    _invalid_parameter_noinfo();
  if ( v13 != v15 )
    return 0;
  v10 = (_DWORD *)*v4;
  a2 = operator new(0x138u);
  v16 = 0;
  if ( a2 )
    v9 = sub_100198E4((int)v4, a3);
  v16 = -1;
  v12 = v10;
  v13 = v9;
  sub_100092C8((int)v14, (int)&v12);
  v12 = v10;
  v13 = v9;
  sub_1000245F((int)v14, (int)&v12);
  return v9;
}
