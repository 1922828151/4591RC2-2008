/*
 * func-name: sub_1020C1E0
 * func-address: 0x1020c1e0
 * callers: 0x10008df5
 * callees: 0x1000b50a
 */

_DWORD *__thiscall sub_1020C1E0(_DWORD *this, int a2, __int16 a3, Outpop::Utility::Ref_Object **a4, int a5)
{
  Outpop::Utility::Ref_Object *v6; // ecx
  bool v7; // zf

  this[6] = 0;
  this[5] = 0;
  this[1] = 0;
  this[2] = 0;
  this[4] = 0;
  this[3] = 0;
  *this = &GameClient::Send_P2P_Message_Result::`vftable';
  sub_1000B50A(a2);
  *((_WORD *)this + 22) = a3;
  v6 = *a4;
  v7 = *a4 == 0;
  this[12] = *a4;
  if ( !v7 )
    Outpop::Utility::Ref_Object::addref(v6);
  this[13] = a5;
  return this;
}
