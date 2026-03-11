/*
 * func-name: sub_10171E90
 * func-address: 0x10171e90
 * callers: 0x10017b2f
 * callees: 0x10006bea, 0x100124db, 0x10018912, 0x10018f8e, 0x1001968c, 0x102c9d50
 */

int __thiscall sub_10171E90(_DWORD *this, int a2)
{
  int *v3; // ebp
  _DWORD *v4; // edi
  int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v8; // [esp+14h] [ebp-74h] BYREF
  int v9; // [esp+18h] [ebp-70h]
  char v10[4]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v11; // [esp+20h] [ebp-68h]
  char v12[4]; // [esp+28h] [ebp-60h] BYREF
  void *v13; // [esp+30h] [ebp-58h]
  void *v14; // [esp+3Ch] [ebp-4Ch]
  int v15; // [esp+40h] [ebp-48h]
  int v16; // [esp+44h] [ebp-44h]
  int v17; // [esp+50h] [ebp-38h] BYREF
  void *v18; // [esp+5Ch] [ebp-2Ch]
  void *v19; // [esp+68h] [ebp-20h]
  int v20; // [esp+6Ch] [ebp-1Ch]
  int v21; // [esp+70h] [ebp-18h]
  int v22; // [esp+84h] [ebp-4h]

  v3 = (int *)a2;
  sub_1001968C((int)&v8, a2);
  v4 = v8;
  v11 = this[2];
  if ( !v8 || v8 != this + 1 )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v11 )
  {
    sub_10018F8E((int)&a2, (int)&a2);
    v17 = *v3;
    v22 = 0;
    sub_10018912((int)v12);
    LOBYTE(v22) = 1;
    v6 = (_DWORD *)sub_100124DB((int)v10, (int)&v17);
    v4 = (_DWORD *)*v6;
    v5 = v6[1];
    LOBYTE(v22) = 0;
    if ( v19 )
      operator delete(v19);
    v19 = 0;
    v20 = 0;
    v21 = 0;
    sub_10006BEA();
    operator delete(v18);
    v18 = 0;
    v22 = -1;
    if ( v14 )
      operator delete(v14);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    sub_10006BEA();
    operator delete(v13);
  }
  if ( !v4 )
    _invalid_parameter_noinfo();
  if ( v5 == v4[1] )
    _invalid_parameter_noinfo();
  return v5 + 12;
}
