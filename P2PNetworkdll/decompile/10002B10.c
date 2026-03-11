/*
 * func-name: sub_10002B10
 * func-address: 0x10002b10
 * callers: 0x10004ea0
 * callees: none
 */

_DWORD *__userpurge sub_10002B10@<eax>(int a1@<ebx>, _DWORD *a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf
  _DWORD *result; // eax

  a2[6] = 0;
  a2[5] = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  a2[3] = 0;
  *a2 = &Outpop::P2P::Peer_Send_Result::`vftable';
  std::string::string(a2 + 7, a3);
  v4 = *a4;
  v5 = *a4 == 0;
  a2[14] = *a4;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
  result = a2;
  a2[15] = a1;
  return result;
}
