/*
 * func-name: sub_10021970
 * func-address: 0x10021970
 * callers: 0x10020d10
 * callees: 0x10021d60, 0x100222f0, 0x10022550, 0x10022a10
 */

int __thiscall sub_10021970(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v8; // [esp+18h] [ebp-40h] BYREF
  int v9; // [esp+1Ch] [ebp-3Ch]
  int v10; // [esp+20h] [ebp-38h]
  int v11; // [esp+24h] [ebp-34h]
  char v12[4]; // [esp+28h] [ebp-30h] BYREF
  int v13; // [esp+2Ch] [ebp-2Ch]
  char v14[4]; // [esp+34h] [ebp-24h] BYREF
  int v15; // [esp+54h] [ebp-4h]

  sub_100222F0(&v8, a2);
  v3 = v8;
  v13 = this[2];
  if ( !v8 || v8 != this + 1 )
    invalid_parameter_noinfo();
  v4 = v9;
  if ( v9 == v13 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v15 = 0;
    v5 = sub_10022550(v14, a2, &v8);
    LOBYTE(v15) = 1;
    v6 = (_DWORD *)sub_10021D60(this, v12, v5);
    v3 = (_DWORD *)*v6;
    v4 = v6[1];
    LOBYTE(v15) = 0;
    sub_10022A10();
    v15 = -1;
    sub_10022A10();
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    invalid_parameter_noinfo();
  return v4 + 12;
}
