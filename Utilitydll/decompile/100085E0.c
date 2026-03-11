/*
 * func-name: sub_100085E0
 * func-address: 0x100085e0
 * callers: 0x10008670
 * callees: none
 */

int __thiscall sub_100085E0(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  *this = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Timer_Queue>::`vftable';
  v2 = (int (__thiscall ***)(_DWORD, int))this[1];
  if ( v2 )
    result = (**v2)(v2, 1);
  *this = &Outpop::Utility::Singleton_Holder::`vftable';
  return result;
}
