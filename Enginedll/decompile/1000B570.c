/*
 * func-name: sub_1000B570
 * func-address: 0x1000b570
 * callers: 0x10088cd0
 * callees: 0x101786e0, 0x101a251c
 */

int __thiscall sub_1000B570(void *this)
{
  int result; // eax

  memset(this, 0, 0x40u);
  result = sub_101786E0(1.0);
  *((float *)this + 15) = 1.0;
  return result;
}
