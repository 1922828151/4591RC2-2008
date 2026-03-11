/*
 * func-name: sub_1000A590
 * func-address: 0x1000a590
 * callers: 0x1000b090
 * callees: none
 */

int __stdcall sub_1000A590(int a1, int a2)
{
  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  *(_DWORD *)a1 = &Outpop::P2P::SRemoteConnectItem::`vftable';
  std::string::string(a1 + 8, a2);
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
