/*
 * func-name: ??0Channel@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10004f50
 * callers: 0x1000e490, 0x1002cbf0, 0x10042a80
 * callees: 0x10002600
 */

Outpop::IONetwork::Channel *__thiscall Outpop::IONetwork::Channel::Channel(Outpop::IONetwork::Channel *this)
{
  _DWORD *v2; // eax
  _BYTE v4[8]; // [esp+18h] [ebp-14h] BYREF
  int v5; // [esp+28h] [ebp-4h]

  Outpop::Utility::Timer_Handler::Timer_Handler(this);
  v5 = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Channel::`vftable';
  *((_DWORD *)this + 9) = 300;
  *((_DWORD *)this + 11) = 300;
  *((_DWORD *)this + 12) = 100;
  *((_DWORD *)this + 8) = 1500;
  *((_DWORD *)this + 10) = 10000;
  *((_DWORD *)this + 7) = 0xFFFF;
  *((_DWORD *)this + 6) = 0xFFFF;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Channel *)((char *)this + 52));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Channel *)((char *)this + 80));
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 32) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Channel *)((char *)this + 132));
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::IONetwork::Channel *)((char *)this + 164));
  LOBYTE(v5) = 5;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  v2 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v4);
  LOBYTE(v5) = 6;
  *((_DWORD *)this + 41) = *v2;
  *((_DWORD *)this + 42) = v2[1];
  LOBYTE(v5) = 5;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v4);
  return this;
}
