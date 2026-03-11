/*
 * func-name: sub_1000ECB0
 * func-address: 0x1000ecb0
 * callers: 0x1000f1f0
 * callees: none
 */

_DWORD *__userpurge sub_1000ECB0@<eax>(int a1@<edi>, _DWORD *a2, int *a3)
{
  int v3; // eax
  _DWORD *result; // eax

  a2[6] = 0;
  a2[5] = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  a2[3] = 0;
  *a2 = &Outpop::P2P::UPNP_State_Change_Result::`vftable';
  v3 = *a3;
  a2[7] = *a3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v3 + 76));
  result = a2;
  a2[8] = a1;
  return result;
}
