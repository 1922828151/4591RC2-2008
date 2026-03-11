/*
 * func-name: sub_1000DF00
 * func-address: 0x1000df00
 * callers: 0x1000df90
 * callees: 0x1000dfb0
 */

void *__thiscall sub_1000DF00(void *this)
{
  void *result; // eax

  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<Outpop::Message::Message_Globe_Object>::`vftable';
  result = (void *)*((_DWORD *)this + 1);
  if ( result )
  {
    sub_1000DFB0(*((void **)this + 1));
    result = Outpop::Utility::Singleton_Holder::`vftable';
  }
  *(_DWORD *)this = Outpop::Utility::Singleton_Holder::`vftable';
  return result;
}
