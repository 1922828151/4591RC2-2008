/*
 * func-name: sub_1000DEA0
 * func-address: 0x1000dea0
 * callers: 0x1000de00
 * callees: none
 */

_DWORD *__fastcall sub_1000DEA0(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a3;
  *a3 = Outpop::Utility::Singleton_Holder::`vftable';
  *a3 = &Outpop::Utility::Singleton_Holder_T<Outpop::Message::Message_Globe_Object>::`vftable';
  a3[1] = a2;
  return result;
}
