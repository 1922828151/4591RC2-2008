/*
 * func-name: ??1Channel_Manager@Message@Outpop@@UAE@XZ
 * func-address: 0x10010830
 * callers: 0x10003ea0
 * callees: 0x10006f70, 0x100129a0, 0x100294f2
 */

void __thiscall Outpop::Message::Channel_Manager::~Channel_Manager(Outpop::Message::Channel_Manager *this)
{
  int *i; // ebp
  _DWORD **v3; // ecx
  _DWORD *v4; // eax
  bool v5; // zf
  Outpop::Utility::Lock *v6; // [esp+18h] [ebp-1Ch]
  _DWORD *v7; // [esp+18h] [ebp-1Ch]

  *(_DWORD *)this = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  *((_DWORD *)this + 1) = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  v6 = (Outpop::Message::Channel_Manager *)((char *)this + 64);
  Outpop::Utility::Lock::lock((Outpop::Message::Channel_Manager *)((char *)this + 64));
  *((_BYTE *)this + 164) = 0;
  for ( i = (int *)**((_DWORD **)this + 24); i != *((int **)this + 24); i = (int *)*i )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)i[3] + 24))(i[3]);
    if ( i == *((int **)this + 24) )
      invalid_parameter_noinfo();
  }
  sub_100129A0();
  Outpop::Utility::Lock::unlock(v6);
  if ( *((_DWORD *)this + 38) )
    operator delete(*((void **)this + 38));
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  if ( *((_DWORD *)this + 34) )
    operator delete(*((void **)this + 34));
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  sub_10006F70((int)this + 88);
  Outpop::Utility::Lock::~Lock((Outpop::Message::Channel_Manager *)((char *)this + 64));
  *((_DWORD *)this + 2) = &Outpop::Utility::event_template<int,Outpop::Utility::Null_Lock>::`vftable';
  if ( *((_DWORD *)this + 8) )
    operator delete(*((void **)this + 8));
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  v3 = (_DWORD **)*((_DWORD *)this + 5);
  v4 = *v3;
  *v3 = v3;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v5 = v4 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v5 )
  {
    do
    {
      v7 = (_DWORD *)*v4;
      operator delete(v4);
      v4 = v7;
    }
    while ( v7 != *((_DWORD **)this + 5) );
  }
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = &Outpop::Utility::event_base::`vftable';
  Outpop::IONetwork::Channel_Handler::~Channel_Handler((Outpop::Message::Channel_Manager *)((char *)this + 4));
  *(_DWORD *)this = Outpop::IONetwork::Channel_Error_Handler::`vftable';
}
