/*
 * func-name: sub_10002820
 * func-address: 0x10002820
 * callers: none
 * callees: 0x10002310
 */

int __thiscall sub_10002820(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *v6; // esi
  _DWORD v7[4]; // [esp+4h] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
  if ( (_BYTE)result )
  {
    result = a4;
    if ( (a4 & this[8217]) != 0 )
    {
      v6 = (_DWORD *)this[8215];
      LOBYTE(v7[0]) = 4;
      v7[2] = a2;
      v7[3] = a3;
      v7[1] = 8;
      if ( v6 )
        return sub_10002310(v7, v6);
    }
  }
  return result;
}
