/*
 * func-name: sub_10016200
 * func-address: 0x10016200
 * callers: 0x100192b0, 0x10019db0, 0x1001f2c0, 0x1001fde0
 * callees: 0x10002600
 */

_DWORD *__stdcall sub_10016200(_DWORD *a1)
{
  _DWORD *v1; // eax
  _BYTE v3[12]; // [esp+10h] [ebp-18h] BYREF
  int v4; // [esp+24h] [ebp-4h]

  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  v4 = 0;
  *a1 = &Outpop::IONetwork::Wait_Channel::`vftable';
  a1[2] = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 3));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 10));
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 17));
  LOBYTE(v4) = 4;
  v1 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v3);
  LOBYTE(v4) = 5;
  a1[17] = *v1;
  a1[18] = v1[1];
  LOBYTE(v4) = 4;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v3);
  return a1;
}
