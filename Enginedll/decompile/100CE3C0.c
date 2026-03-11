/*
 * func-name: sub_100CE3C0
 * func-address: 0x100ce3c0
 * callers: 0x100ab540, 0x100abf40
 * callees: none
 */

int __thiscall sub_100CE3C0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( a2 < 0 )
    return -2147024809;
  v3 = this[1];
  if ( a2 >= v3 )
    return -2147024809;
  memmove((void *)(*this + 4 * a2), (const void *)(*this + 4 * a2 + 4), 4 * (v3 - a2) - 4);
  --this[1];
  return 0;
}
