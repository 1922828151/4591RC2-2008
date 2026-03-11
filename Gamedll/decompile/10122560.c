/*
 * func-name: ?GetEquipCount@Seat@GameClient@@QAEJXZ_0
 * func-address: 0x10122560
 * callers: 0x1001a299
 * callees: none
 */

int __thiscall GameClient::Seat::GetEquipCount(GameClient::Seat *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 8);
  if ( v1 )
    return (*((_DWORD *)this + 9) - v1) >> 2;
  else
    return 0;
}
