/*
 * func-name: sub_10002D30
 * func-address: 0x10002d30
 * callers: none
 * callees: 0x100054c0
 */

int __thiscall sub_10002D30(Outpop::P2P::Peer **this, int a2, int a3, int a4, int a5)
{
  return Outpop::P2P::Peer::interal_change_peer_id(this[7], (int)(this + 8));
}
