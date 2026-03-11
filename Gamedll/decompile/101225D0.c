/*
 * func-name: ?GetSeatCount@Establishment@GameClient@@QAEJXZ_0
 * func-address: 0x101225d0
 * callers: 0x1000d36e
 * callees: none
 */

int __thiscall GameClient::Establishment::GetSeatCount(GameClient::Establishment *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 49);
  if ( v1 )
    return (*((_DWORD *)this + 50) - v1) >> 2;
  else
    return 0;
}
