/*
 * func-name: sub_1013EC20
 * func-address: 0x1013ec20
 * callers: 0x1013e2e0, 0x1013ed50
 * callees: 0x101370c0
 */

int __thiscall sub_1013EC20(_DWORD *this, unsigned int a2)
{
  unsigned int i; // ebx
  int result; // eax

  for ( i = a2; i >= 0x80; i >>= 7 )
  {
    sub_101370C0((int)this, 1u);
    *(_BYTE *)(this[1] + this[2]++) = i | 0x80;
  }
  sub_101370C0((int)this, 1u);
  result = this[1];
  *(_BYTE *)(result + this[2]++) = i;
  return result;
}
