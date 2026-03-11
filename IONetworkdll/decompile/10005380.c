/*
 * func-name: ??0Channel@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10005380
 * callers: 0x1000e250, 0x10022aa0, 0x10042140
 * callees: 0x10002e10
 */

Outpop::IONetwork::Channel *__thiscall Outpop::IONetwork::Channel::Channel(
        Outpop::IONetwork::Channel *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  Outpop::Utility::Timer_Handler::Timer_Handler(this, (const struct Outpop::Utility::Timer_Handler *)a2);
  *(_DWORD *)this = &Outpop::IONetwork::Channel::`vftable';
  qmemcpy((char *)this + 8, a2 + 2, 0x2Cu);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Channel *)((char *)this + 52),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 13));
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Channel *)((char *)this + 80),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 20));
  *((_DWORD *)this + 27) = a2[27];
  *((_DWORD *)this + 28) = a2[28];
  *((_DWORD *)this + 29) = a2[29];
  *((_DWORD *)this + 30) = a2[30];
  *((_DWORD *)this + 31) = a2[31];
  *((_DWORD *)this + 32) = a2[32];
  *((_DWORD *)this + 33) = a2[33];
  *((_DWORD *)this + 34) = a2[34];
  *((_DWORD *)this + 35) = a2[35];
  *((_DWORD *)this + 36) = a2[36];
  *((_DWORD *)this + 37) = a2[37];
  *((_DWORD *)this + 38) = a2[38];
  v3 = a2[39];
  *((_DWORD *)this + 39) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_DWORD *)this + 40) = a2[40];
  *((_DWORD *)this + 41) = a2[41];
  *((_DWORD *)this + 42) = a2[42];
  *((_DWORD *)this + 43) = a2[43];
  *((_DWORD *)this + 44) = a2[44];
  return this;
}
