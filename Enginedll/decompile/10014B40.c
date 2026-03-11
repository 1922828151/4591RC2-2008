/*
 * func-name: sub_10014B40
 * func-address: 0x10014b40
 * callers: 0x100042c0, 0x100431a0
 * callees: 0x1000f080, 0x10013cc0
 */

_DWORD *__thiscall sub_10014B40(int *this, _DWORD *a2, int *a3, _DWORD *a4, int a5, char a6)
{
  unsigned int v7; // edi
  int *v8; // ebp
  int v9; // esi
  unsigned int v10; // edi
  _DWORD *v12; // [esp-10h] [ebp-20h]
  int v13; // [esp-Ch] [ebp-1Ch]
  char v14; // [esp-4h] [ebp-14h]

  v7 = this[2];
  if ( v7 > this[3] )
    invalid_parameter_noinfo();
  if ( !this )
    invalid_parameter_noinfo();
  v8 = a3;
  v14 = a6;
  v9 = a5 + 32 * ((int)((int)a4 - v7) >> 2);
  v12 = a4;
  v13 = a5;
  if ( !a3 )
    invalid_parameter_noinfo();
  sub_10013CC0(this, v8, v12, v13, (char *)1, v14);
  v10 = this[2];
  if ( v10 > this[3] )
    invalid_parameter_noinfo();
  a4 = (_DWORD *)v10;
  a5 = 0;
  if ( !this )
    invalid_parameter_noinfo();
  a3 = this;
  sub_1000F080((int *)&a3, a2, v9);
  return a2;
}
