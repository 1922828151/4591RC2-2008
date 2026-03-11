/*
 * func-name: sub_10014470
 * func-address: 0x10014470
 * callers: none
 * callees: none
 */

int __thiscall sub_10014470(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[20];
  if ( v2 )
    return *(unsigned __int16 *)(v2 + 2 * a2);
  else
    return 0xFFFF;
}
