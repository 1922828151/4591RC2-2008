/*
 * func-name: sub_10002A10
 * func-address: 0x10002a10
 * callers: 0x10004000
 * callees: none
 */

_DWORD *__stdcall sub_10002A10(_DWORD *a1, int a2, int a3)
{
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::P2P::Close_Peer_Result::`vftable';
  std::string::string(a1 + 7, a2);
  a1[14] = a3;
  return a1;
}
