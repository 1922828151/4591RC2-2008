/*
 * func-name: sub_10002750
 * func-address: 0x10002750
 * callers: none
 * callees: 0x100022c0
 */

int __thiscall sub_10002750(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v5; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
  if ( (_BYTE)result )
  {
    result = a3;
    if ( (a3 & this[8217]) != 0 )
    {
      v5 = (_DWORD *)this[8215];
      LOBYTE(v6[0]) = 2;
      v6[2] = a2;
      v6[1] = 4;
      if ( v5 )
        sub_100022C0(v6, v5);
      result = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
      if ( a2 == result )
        this[8218] = 0;
    }
  }
  return result;
}
