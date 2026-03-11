/*
 * func-name: ??0P2P_Channel@IONetwork@Outpop@@QAE@AAUChannel_Config@12@@Z
 * func-address: 0x10042a80
 * callers: 0x1004ccb0
 * callees: 0x10004f50, 0x100231a0, 0x1003c620, 0x10046630
 */

Outpop::IONetwork::P2P_Channel *__thiscall Outpop::IONetwork::P2P_Channel::P2P_Channel(
        Outpop::IONetwork::P2P_Channel *this,
        struct Outpop::IONetwork::Channel_Config *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // eax
  Outpop::Utility::Ref_Object *v8; // [esp+1Ch] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v9[2]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v10[2]; // [esp+28h] [ebp-28h] BYREF
  _DWORD v11[2]; // [esp+30h] [ebp-20h] BYREF
  _BYTE v12[12]; // [esp+38h] [ebp-18h] BYREF
  int v13; // [esp+4Ch] [ebp-4h]

  v9[1] = this;
  Outpop::IONetwork::Channel::Channel(this);
  v13 = 0;
  *(_DWORD *)this = &Outpop::IONetwork::P2P_Channel::`vftable';
  *((_DWORD *)this + 45) = 0;
  *((_WORD *)this + 92) = 0;
  *((_BYTE *)this + 199) = 1;
  *((_BYTE *)this + 200) = 1;
  Outpop::IONetwork::Comminute_Container::Comminute_Container((Outpop::IONetwork::P2P_Channel *)((char *)this + 204));
  sub_10046630((char *)this + 272, this);
  Outpop::IONetwork::Sequence_Container::Sequence_Container((Outpop::IONetwork::P2P_Channel *)((char *)this + 428));
  Outpop::Utility::Time_Value::Time_Value((Outpop::IONetwork::P2P_Channel *)((char *)this + 604));
  *((_BYTE *)this + 612) = 0;
  *((_DWORD *)this + 155) = 0;
  *((_BYTE *)this + 632) = 0;
  std::string::string((char *)this + 636);
  std::string::string((char *)this + 664);
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_BYTE *)this + 700) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::IONetwork::P2P_Channel *)((char *)this + 704));
  LOBYTE(v13) = 10;
  *((_DWORD *)this + 154) = 0;
  *((_DWORD *)this + 157) = 0;
  v3 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v10);
  LOBYTE(v13) = 11;
  *((_DWORD *)this + 151) = *v3;
  *((_DWORD *)this + 152) = v3[1];
  LOBYTE(v13) = 10;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v10);
  v4 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v11);
  LOBYTE(v13) = 12;
  *((_DWORD *)this + 176) = *v4;
  *((_DWORD *)this + 177) = v4[1];
  LOBYTE(v13) = 10;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v11);
  *((_WORD *)this + 93) = 0;
  *((_WORD *)this + 94) = 0;
  *((_WORD *)this + 95) = 0;
  *((_WORD *)this + 96) = 0;
  *((_WORD *)this + 97) = 0;
  *((_WORD *)this + 98) = 0;
  qmemcpy((char *)this + 8, a2, 0x2Cu);
  v9[0] = 0;
  LOBYTE(v13) = 13;
  v5 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v12, 10, 0);
  LOBYTE(v13) = 14;
  v8 = this;
  Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v13) = 15;
  v6 = Outpop::Utility::Timer_Queue::instance(&v8, v5, v9, 0, 0);
  *((_DWORD *)this + 156) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v6);
  LOBYTE(v13) = 14;
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  LOBYTE(v13) = 13;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v12);
  LOBYTE(v13) = 10;
  if ( v9[0] )
    Outpop::Utility::Ref_Object::release(v9[0]);
  return this;
}
