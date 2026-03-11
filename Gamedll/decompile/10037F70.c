/*
 * func-name: sub_10037F70
 * func-address: 0x10037f70
 * callers: 0x100180b6
 * callees: 0x10010820
 */

int __thiscall sub_10037F70(_DWORD *this)
{
  _DWORD *v1; // edx
  int result; // eax
  _DWORD *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  v1 = (_DWORD *)this[2];
  result = (int)(this + 50);
  if ( v1 != this + 50 && v1 == this + 60 )
  {
    this[3] = result;
    v3 = this + 50;
    return sub_10010820((int)&v3);
  }
  return result;
}
