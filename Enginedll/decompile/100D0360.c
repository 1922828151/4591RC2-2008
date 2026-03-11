/*
 * func-name: sub_100D0360
 * func-address: 0x100d0360
 * callers: 0x100cd620, 0x100cd7f0
 * callees: 0x1006c530
 */

int __thiscall sub_100D0360(_DWORD *this, const void *a2)
{
  int result; // eax
  _DWORD *v4; // eax

  result = sub_1006C530((int)this, this[1] + 1);
  if ( result >= 0 )
  {
    v4 = (_DWORD *)(*this + 532 * this[1]);
    if ( v4 )
    {
      v4[128] = 0;
      v4[129] = 0;
      v4[130] = 0;
    }
    qmemcpy((void *)(*this + 532 * this[1]++), a2, 0x214u);
    return 0;
  }
  return result;
}
