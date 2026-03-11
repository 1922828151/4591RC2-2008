/*
 * func-name: sub_10002100
 * func-address: 0x10002100
 * callers: 0x10002d40
 * callees: 0x10001830
 */

bool __thiscall sub_10002100(_DWORD *this, int a2)
{
  float *v2; // edi

  v2 = (float *)a2;
  a2 = *(int *)a2;
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  a2 = *((int *)v2 + 1);
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  a2 = *((int *)v2 + 2);
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  a2 = *((int *)v2 + 3);
  return sub_10001830(this, (int)&a2, 4u) == 4;
}
