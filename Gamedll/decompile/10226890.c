/*
 * func-name: ?OnReadVarComplete@FEquip@GameClient@@UAEXXZ_0
 * func-address: 0x10226890
 * callers: 0x100049f3
 * callees: 0x10004ff2, 0x10012463
 */

void __thiscall GameClient::FEquip::OnReadVarComplete(GameClient::FEquip *this)
{
  int v2; // eax
  int v3; // [esp+0h] [ebp-4h]

  GameClient::FProduct::OnReadVarComplete(this);
  if ( *((_DWORD *)this + 102) )
  {
    v2 = AsyncLoader::Instance((char *)this + 388, v3);
    AsyncLoader::CachePacket(v2);
  }
  *((_BYTE *)this + 1792) = 1;
  sub_10004FF2((char *)this + 1728);
  *((_BYTE *)this + 1712) = 0;
  sub_10004FF2((char *)this + 1648);
  *((_BYTE *)this + 1872) = 0;
  sub_10004FF2((char *)this + 1808);
}
