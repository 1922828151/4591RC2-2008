/*
 * func-name: sub_100136B0
 * func-address: 0x100136b0
 * callers: 0x10013cc0
 * callees: 0x10009d50, 0x1000c900, 0x1000cb30, 0x1000f080, 0x10010c40, 0x10012840, 0x10013480
 */

int __thiscall sub_100136B0(int *this, int *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v6; // ebx
  _DWORD *v7; // ebp
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // edi
  int *v12; // eax
  int v13[3]; // [esp-24h] [ebp-40h] BYREF
  _DWORD *v14[3]; // [esp-18h] [ebp-34h] BYREF
  int *v15[7]; // [esp-Ch] [ebp-28h] BYREF
  _DWORD v16[3]; // [esp+10h] [ebp-Ch] BYREF

  v6 = this[2];
  v7 = this + 1;
  if ( v6 > this[3] )
    invalid_parameter_noinfo();
  if ( !this )
    invalid_parameter_noinfo();
  v8 = a3 - v6;
  v9 = a5;
  v10 = a4 + 32 * (v8 >> 2);
  if ( a5 )
  {
    if ( -1 - *this < a5 )
      sub_10009D50();
    sub_10012840(v7, (*this + a5 + 31) >> 5, 0);
    if ( !*this )
    {
      *this = v9;
      return v10;
    }
    sub_10010C40(this, &a2);
    *this += v9;
    sub_10010C40(this, v15);
    sub_1000C900(v14, &a2);
    v12 = sub_1000CB30(this, v16);
    sub_1000F080(v12, v13, v10);
    sub_10013480(&a2, v13[0], (_DWORD *)v13[1], v13[2], v14[0], v14[1], (int)v14[2], v15[0], v15[1], (int)v15[2]);
  }
  return v10;
}
