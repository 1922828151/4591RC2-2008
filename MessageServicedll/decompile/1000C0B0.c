/*
 * func-name: sub_1000C0B0
 * func-address: 0x1000c0b0
 * callers: 0x1000bde0, 0x10016550
 * callees: 0x1000c280
 */

int __thiscall sub_1000C0B0(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
    return sub_1000C280(a2, this);
  return result;
}
