/*
 * func-name: sub_1001EC70
 * func-address: 0x1001ec70
 * callers: 0x1001efc0
 * callees: 0x1001ebb0
 */

char __thiscall sub_1001EC70(_DWORD *this, unsigned int a2, unsigned int a3)
{
  if ( a2 >= a3 )
    return 0;
  this[8] = 0;
  dword_1005B1C4 = 0;
  sub_1001EBB0(this, a2, -1);
  return 1;
}
