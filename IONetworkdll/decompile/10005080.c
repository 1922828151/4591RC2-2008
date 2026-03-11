/*
 * func-name: ??1Channel@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10005080
 * callers: 0x10005650, 0x1000e250, 0x1000e490, 0x1000e720, 0x10022aa0, 0x1002cbf0, 0x1002cfb0, 0x10042140, 0x10042a80, 0x10042cd0
 * callees: none
 */

void __thiscall Outpop::IONetwork::Channel::~Channel(Outpop::IONetwork::Channel *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::IONetwork::Channel::`vftable';
  Outpop::Utility::Time_Value::~Time_Value((Outpop::IONetwork::Channel *)((char *)this + 164));
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 39);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Channel *)((char *)this + 132));
  *((_DWORD *)this + 20) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 20) = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 13) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 13) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
}
