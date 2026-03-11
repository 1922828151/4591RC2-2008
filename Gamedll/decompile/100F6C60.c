/*
 * func-name: sub_100F6C60
 * func-address: 0x100f6c60
 * callers: 0x1000b73f
 * callees: 0x1001816a
 */

int __thiscall sub_100F6C60(_DWORD *this, unsigned int a2)
{
  unsigned int i; // ebx
  int result; // eax

  for ( i = a2; i >= 0x80; i >>= 7 )
  {
    sub_1001816A(1);
    *(_BYTE *)(this[1] + this[2]++) = i | 0x80;
  }
  sub_1001816A(1);
  result = this[1];
  *(_BYTE *)(result + this[2]++) = i;
  return result;
}
