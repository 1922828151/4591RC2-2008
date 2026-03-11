/*
 * func-name: ??0Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAE@AAVINET_Addr@12@PAVDgram_Connector@12@@Z
 * func-address: 0x10040dc0
 * callers: 0x10036c20
 * callees: 0x10002600
 */

Outpop::IONetwork::Dgram_Connect_Bluider_Process *__thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::Dgram_Connect_Bluider_Process(
        Outpop::IONetwork::Dgram_Connect_Bluider_Process *this,
        struct Outpop::IONetwork::INET_Addr *a2,
        struct Outpop::IONetwork::Dgram_Connector *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _BYTE v8[8]; // [esp+18h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  Outpop::Utility::Ref_Object::Ref_Object(this);
  v9 = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Connect_Bluider_Process::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Dgram_Connect_Bluider_Process *)((char *)this + 8));
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = a3;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::IONetwork::Dgram_Connect_Bluider_Process *)((char *)this + 60));
  *((_DWORD *)this + 17) = 0;
  LOBYTE(v9) = 4;
  v4 = (_DWORD *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  v5 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 2) + 16))((char *)this + 8);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  v6 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v8);
  LOBYTE(v9) = 5;
  *((_DWORD *)this + 15) = *v6;
  *((_DWORD *)this + 16) = v6[1];
  LOBYTE(v9) = 4;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v8);
  return this;
}
