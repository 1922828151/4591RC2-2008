/*
 * func-name: sub_102AED70
 * func-address: 0x102aed70
 * callers: 0x10002c0c
 * callees: 0x102c9d50
 */

Outpop::P2P::Peer *__thiscall sub_102AED70(Outpop::P2P::Peer *this, char a2)
{
  *(_DWORD *)this = &GameClient::ChatPeer::`vftable';
  *((_DWORD *)this + 2) = &GameClient::ChatPeer::`vftable';
  *((_DWORD *)this + 3) = &GameClient::ChatPeer::`vftable';
  *((_DWORD *)this + 4) = &GameClient::ChatPeer::`vftable';
  Outpop::P2P::Peer::~Peer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
