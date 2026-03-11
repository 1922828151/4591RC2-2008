/*
 * func-name: ??0P2P_Context@P2P@Outpop@@QAE@XZ
 * func-address: 0x10001c80
 * callers: 0x100256d0
 * callees: none
 */

Outpop::P2P::P2P_Context *__thiscall Outpop::P2P::P2P_Context::P2P_Context(Outpop::P2P::P2P_Context *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _BYTE v9[8]; // [esp+28h] [ebp-30h] BYREF
  _BYTE v10[28]; // [esp+30h] [ebp-28h] BYREF
  int v11; // [esp+54h] [ebp-4h]

  v11 = 0;
  v2 = (_DWORD *)((char *)this + 8);
  *(_DWORD *)this = &Outpop::P2P::P2P_Context::`vftable';
  Outpop::Utility::Time_Value::Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 8));
  Outpop::Utility::Time_Value::Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 16));
  Outpop::Utility::Time_Value::Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 24));
  Outpop::Utility::Time_Value::Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 36));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::P2P::P2P_Context *)((char *)this + 48));
  *((_DWORD *)this + 19) = 0;
  LOBYTE(v11) = 6;
  *((_DWORD *)this + 1) = 0;
  v3 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v9, 3, 0);
  *v2 = *v3;
  v2[1] = v3[1];
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v9);
  v4 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v9, 3, 0);
  *((_DWORD *)this + 4) = *v4;
  *((_DWORD *)this + 5) = v4[1];
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v9);
  *((_DWORD *)this + 8) = 10;
  v5 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v9, 3, 0);
  *((_DWORD *)this + 6) = *v5;
  *((_DWORD *)this + 7) = v5[1];
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v9);
  *((_DWORD *)this + 11) = 10;
  v6 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v9, 30, 0);
  *((_DWORD *)this + 9) = *v6;
  *((_DWORD *)this + 10) = v6[1];
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v9);
  v7 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v10, 0x16F4u, "211.144.92.86", 0);
  LOBYTE(v11) = 7;
  Outpop::IONetwork::INET_Addr::operator=((char *)this + 48, v7);
  LOBYTE(v11) = 6;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v10);
  *((_WORD *)this + 40) = 0;
  *((_BYTE *)this + 82) = 0;
  return this;
}
