/*
 * func-name: sub_1000EDE0
 * func-address: 0x1000ede0
 * callers: 0x1000f1f0
 * callees: none
 */

_DWORD *__stdcall sub_1000EDE0(_DWORD *a1, int *a2)
{
  int v2; // eax

  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::P2P::UPNP_Map_Succeed_Result::`vftable';
  v2 = *a2;
  a1[7] = *a2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v2 + 76));
  a1[8] = 4;
  a1[9] = 0;
  return a1;
}
