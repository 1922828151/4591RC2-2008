/*
 * func-name: sub_1014BDC0
 * func-address: 0x1014bdc0
 * callers: none
 * callees: 0x100107df, 0x1001285a, 0x10016d7e, 0x102c9d50
 */

int __thiscall sub_1014BDC0(_DWORD *this)
{
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  void (__thiscall ***v8)(_DWORD, int); // ecx
  _BYTE v11[8]; // [esp+18h] [ebp-14h] BYREF
  int v12; // [esp+28h] [ebp-4h]

  v2 = (_DWORD **)this[5];
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(this[5] + 4) = this[5];
  v4 = v3 == (_DWORD *)this[5];
  v12 = 2;
  this[6] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != (_DWORD *)this[5] );
  }
  v6 = this[2];
  if ( this[1] > v6 )
    _invalid_parameter_noinfo();
  v7 = this[1];
  if ( v7 > this[2] )
    _invalid_parameter_noinfo();
  sub_100107DF((int)v11, (int)this, v7, (int)this, v6);
  v8 = (void (__thiscall ***)(_DWORD, int))this[12];
  if ( v8 )
  {
    (**v8)(v8, 1);
    this[12] = 0;
  }
  sub_10016D7E();
  sub_10016D7E();
  v12 = -1;
  return sub_1001285A();
}
