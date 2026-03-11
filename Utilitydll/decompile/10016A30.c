/*
 * func-name: ??0Record@Utility@Outpop@@QAE@XZ
 * func-address: 0x10016a30
 * callers: none
 * callees: 0x10016910
 */

Outpop::Utility::Record *__thiscall Outpop::Utility::Record::Record(Outpop::Utility::Record *this, int a2)
{
  int v3; // eax

  if ( a2 )
  {
    *((_DWORD *)this + 2) = &Outpop::Utility::Record::`vbtable'{for `std::istream'};
    *((_DWORD *)this + 4) = &Outpop::Utility::Record::`vbtable'{for `std::ostream'};
    std::ios::ios((char *)this + 104);
  }
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Thread_Message::`vftable';
  sub_10016910((int)this + 8);
  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &Outpop::Utility::Record::`vftable'{for `Outpop::Utility::Thread_Message'};
  *(_DWORD *)((char *)this + *(_DWORD *)(v3 + 4) + 8) = &Outpop::Utility::Record::`vftable'{for `std::strstream'};
  return this;
}
