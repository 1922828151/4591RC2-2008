/*
 * func-name: sub_10002C10
 * func-address: 0x10002c10
 * callers: none
 * callees: 0x10004f40
 */

int __thiscall sub_10002C10(char *this, int a2, int a3, int a4, int a5)
{
  return Outpop::P2P::Peer::interal_send_message(this + 28, this + 56);
}
