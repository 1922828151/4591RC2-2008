/*
 * func-name: sub_100CE8D0
 * func-address: 0x100ce8d0
 * callers: 0x100b0ac0, 0x100b1450, 0x100b3670, 0x100b56d0
 * callees: 0x1006c5d0
 */

int __thiscall sub_100CE8D0(_DWORD *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int result; // eax

  if ( a2 < 0 )
    return -2147024809;
  v4 = this[1];
  if ( a2 > v4 )
    return -2147024809;
  result = sub_1006C5D0((int)this, v4 + 1);
  if ( result >= 0 )
  {
    memmove((void *)(*this + 4 * a2 + 4), (const void *)(*this + 4 * a2), 4 * (this[1] - a2));
    *(_DWORD *)(*this + 4 * a2) = *a3;
    ++this[1];
    return 0;
  }
  return result;
}
