/*
 * func-name: sub_10061240
 * func-address: 0x10061240
 * callers: 0x10060230, 0x100604d0
 * callees: none
 */

int __thiscall sub_10061240(unsigned __int16 *this)
{
  int result; // eax
  int v2; // esi
  __int16 i; // di
  __int16 v4; // dx
  int v5; // eax

  result = this[10];
  if ( (_WORD)result )
  {
    v2 = (unsigned __int16)result - 1;
    for ( i = -1; v2 >= 0; i = v4 )
    {
      v4 = v2;
      v5 = 12 * (unsigned __int16)v2--;
      *(_WORD *)(v5 + *(_DWORD *)this + 10) = i;
      *(_WORD *)(v5 + *(_DWORD *)this + 8) = v4;
    }
    result = 0;
    this[8] = 0;
    this[6] = -1;
    this[7] = -1;
    this[9] = 0;
  }
  return result;
}
