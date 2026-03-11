/*
 * func-name: ??1Aura@GameClient@@UAE@XZ_0
 * func-address: 0x101d10c0
 * callers: 0x10004246
 * callees: 0x10016b58, 0x10018d31
 */

void __thiscall GameClient::Aura::~Aura(GameClient::Aura *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::Aura::`vftable';
  sub_10016B58(v2, v3);
  GameClient::DataObject::~DataObject(this);
}
