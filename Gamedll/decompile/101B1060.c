/*
 * func-name: ?IsWeaponInSeat@Seat@GameClient@@QAE_NK@Z_0
 * func-address: 0x101b1060
 * callers: 0x10008d64
 * callees: none
 */

char __thiscall GameClient::Seat::IsWeaponInSeat(GameClient::Seat *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 8);
    if ( !v4 || i >= (*((_DWORD *)this + 9) - v4) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 8) + 4 * i) + 12) == a2 )
      return 1;
  }
  return 0;
}
