/*
 * func-name: sub_102AEC80
 * func-address: 0x102aec80
 * callers: 0x1000ad12
 * callees: none
 */

_DWORD *__thiscall sub_102AEC80(_DWORD *this, char a2)
{
  _BYTE v4[28]; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  std::string::string(v4, &unk_1030A528);
  v5 = 0;
  Outpop::P2P::Peer::Peer(this, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v4);
  *this = &GameClient::ChatPeer::`vftable';
  this[2] = &GameClient::ChatPeer::`vftable';
  this[3] = &GameClient::ChatPeer::`vftable';
  this[4] = &GameClient::ChatPeer::`vftable';
  *((_BYTE *)this + 164) = a2;
  return this;
}
