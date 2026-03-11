/*
 * func-name: ?SetOwnerEstablishment@Equip@GameClient@@QAEXPAVEstablishment@2@@Z_0
 * func-address: 0x10035250
 * callers: 0x10016b67
 * callees: none
 */

void __thiscall GameClient::Equip::SetOwnerEstablishment(GameClient::Equip *this, struct GameClient::Establishment *a2)
{
  *((_DWORD *)this + 67) = a2;
}
