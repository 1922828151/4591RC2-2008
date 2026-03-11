/*
 * func-name: sub_1020EA70
 * func-address: 0x1020ea70
 * callers: 0x100096d8
 * callees: 0x1001a8f2, 0x102c9d98
 */

bool sub_1020EA70()
{
  int v0; // eax

  if ( operator new(0x14u) )
    v0 = sub_1001A8F2();
  else
    v0 = 0;
  dword_103B67B4 = v0;
  return v0 != 0;
}
