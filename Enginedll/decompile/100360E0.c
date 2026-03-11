/*
 * func-name: sub_100360E0
 * func-address: 0x100360e0
 * callers: 0x10033b90, 0x10034c30
 * callees: 0x1006c5d0
 */

int __thiscall sub_100360E0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  result = sub_1006C5D0(this[1] + 1);
  if ( result >= 0 )
  {
    *(_DWORD *)(*this + 4 * this[1]++) = *a2;
    return 0;
  }
  return result;
}
