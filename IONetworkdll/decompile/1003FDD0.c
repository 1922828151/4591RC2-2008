/*
 * func-name: ??0Dgram_Accept_Bluider_Process@IONetwork@Outpop@@QAE@AAVINET_Addr@12@PAVDgram_Acceptor@12@@Z
 * func-address: 0x1003fdd0
 * callers: 0x10027c50
 * callees: 0x10002600
 */

Outpop::IONetwork::Dgram_Accept_Bluider_Process *__thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::Dgram_Accept_Bluider_Process(
        Outpop::IONetwork::Dgram_Accept_Bluider_Process *this,
        struct Outpop::IONetwork::INET_Addr *a2,
        struct Outpop::IONetwork::Dgram_Acceptor *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax

  Outpop::Utility::Ref_Object::Ref_Object(this);
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Accept_Bluider_Process::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Dgram_Accept_Bluider_Process *)((char *)this + 8));
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  v5 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 2) + 16))((char *)this + 8);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  return this;
}
