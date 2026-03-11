/*
 * func-name: ?SetCurrentNation@OccupyIcon@GameClient@@UAEXW4NATION_TYPE@@@Z_0
 * func-address: 0x101694f0
 * callers: 0x1000f9e8
 * callees: 0x1000b5f0, 0x10010582
 */

int __thiscall GameClient::OccupyIcon::SetCurrentNation(_DWORD *this, int a2)
{
  if ( a2 != this[27] )
    GameClient::OccupyIcon::ChangeFX(a2);
  return GameClient::Establishment::SetCurrentNation(a2);
}
