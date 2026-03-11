/*
 * func-name: sub_10060B40
 * func-address: 0x10060b40
 * callers: none
 * callees: 0x10060ac0
 */

char __thiscall sub_10060B40(_DWORD *this, unsigned int a2, int a3, int a4)
{
  int v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // esi

  v5 = this[3];
  if ( !v5 || a2 >= (this[4] - v5) >> 1 )
    invalid_parameter_noinfo();
  v6 = *(_WORD *)(this[3] + 2 * a2);
  if ( v6 == 0xFFFF )
    return 1;
  while ( 1 )
  {
    v7 = 6 * v6;
    if ( !sub_10060AC0(a3, *(_DWORD *)(this[6] + 12 * *(unsigned __int16 *)(this[13] + v7)), a4) )
      break;
    v6 = *(_WORD *)(this[13] + v7 + 4);
    if ( v6 == 0xFFFF )
      return 1;
  }
  return 0;
}
