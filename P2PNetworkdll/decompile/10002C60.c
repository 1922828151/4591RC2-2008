/*
 * func-name: sub_10002C60
 * func-address: 0x10002c60
 * callers: 0x100052c0
 * callees: none
 */

_DWORD *__thiscall sub_10002C60(void *this, _DWORD *a2, int a3)
{
  a2[6] = 0;
  a2[5] = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  a2[3] = 0;
  *a2 = &Outpop::P2P::Peer_Change_ID_Result::`vftable';
  a2[7] = a3;
  std::string::string(a2 + 8, this);
  return a2;
}
