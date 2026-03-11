/*
 * func-name: sub_10060470
 * func-address: 0x10060470
 * callers: 0x100605b0
 * callees: 0x100601a0, 0x101a2534
 */

_DWORD *sub_10060470()
{
  _DWORD *v0; // eax

  v0 = operator new(0x70u);
  if ( v0 )
    return sub_100601A0(v0);
  else
    return 0;
}
