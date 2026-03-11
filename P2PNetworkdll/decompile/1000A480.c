/*
 * func-name: sub_1000A480
 * func-address: 0x1000a480
 * callers: 0x10004730
 * callees: none
 */

Outpop::Utility::Ref_Object *__stdcall sub_1000A480(Outpop::Utility::Ref_Object *a1, int a2, int a3)
{
  Outpop::Utility::Ref_Object::Ref_Object(a1);
  *(_DWORD *)a1 = &Outpop::P2P::Remote_Peer::`vftable';
  *((_DWORD *)a1 + 2) = a3;
  std::string::string((char *)a1 + 12, a2);
  return a1;
}
