/*
 * func-name: ??1Record@Utility@Outpop@@UAE@XZ
 * func-address: 0x10016af0
 * callers: 0x10016b70, 0x10016bd0
 * callees: 0x10016990
 */

void __thiscall Outpop::Utility::Record::~Record(Outpop::Utility::Record *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &Outpop::Utility::Record::`vftable'{for `Outpop::Utility::Thread_Message'};
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 + 4) + 8) = &Outpop::Utility::Record::`vftable'{for `std::strstream'};
  sub_10016990((_DWORD *)this + 26);
  *(_DWORD *)this = &Outpop::Utility::Thread_Message::`vftable';
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
}
