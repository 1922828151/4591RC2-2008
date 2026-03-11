/*
 * func-name: sub_1000D5A0
 * func-address: 0x1000d5a0
 * callers: 0x1000ab00, 0x1000ac90, 0x1000afe0, 0x1000b090, 0x1000b380
 * callees: 0x10008c80, 0x100098d0, 0x1000a680, 0x1000dc70, 0x1000e200, 0x100234ce
 */

int __thiscall sub_1000D5A0(int this, Outpop::Utility::Ref_Object **a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  int v5; // eax
  void **v6; // edi
  void *v7; // eax
  void *v8; // eax
  unsigned int v9; // ebx
  void *v10; // eax
  bool v11; // cc
  struct Outpop::IONetwork::Asynch_Result *v13; // [esp+14h] [ebp-40h]
  int v14; // [esp+18h] [ebp-3Ch]
  void **v15; // [esp+1Ch] [ebp-38h] BYREF
  void *v16[2]; // [esp+20h] [ebp-34h] BYREF
  _DWORD v17[2]; // [esp+28h] [ebp-2Ch] BYREF
  _BYTE v18[8]; // [esp+30h] [ebp-24h] BYREF
  _BYTE v19[16]; // [esp+38h] [ebp-1Ch] BYREF
  int v20; // [esp+50h] [ebp-4h]

  ++*(_DWORD *)(this + 60);
  v14 = 1;
  if ( *(_DWORD *)(this + 60) != -1 )
    v14 = *(_DWORD *)(this + 60);
  v5 = Outpop::Utility::Time_Value::gettimeofday(v18);
  v6 = 0;
  v20 = 0;
  Outpop::Utility::operator+(v17, v5, a3);
  LOBYTE(v20) = 2;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v18);
  v7 = operator new(0x20u);
  v16[0] = v7;
  LOBYTE(v20) = 3;
  if ( v7 )
    v6 = (void **)sub_1000A680(v17, (int)v7, v14, a2, a4);
  LOBYTE(v20) = 2;
  v15 = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v6);
  LOBYTE(v20) = 4;
  v8 = operator new(0x24u);
  v16[0] = v8;
  LOBYTE(v20) = 5;
  if ( v8 )
    v13 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000E200(v8);
  else
    v13 = 0;
  LOBYTE(v20) = 4;
  sub_10008C80((int)&v15, (_DWORD *)this);
  v9 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(this + 4) > v9 )
    invalid_parameter_noinfo();
  v10 = *(void **)(this + 4);
  v11 = (unsigned int)v10 <= *(_DWORD *)(this + 8);
  v16[0] = v10;
  if ( !v11 )
  {
    invalid_parameter_noinfo();
    v10 = v16[0];
  }
  sub_100098D0(*(unsigned __int8 *)(this + 16), this, (int)v10, this, v9);
  v16[0] = v6[7];
  v16[1] = v6;
  Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v6);
  LOBYTE(v20) = 6;
  sub_1000DC70(this + 64, v19, v16);
  LOBYTE(v20) = 4;
  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v6);
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post((Outpop::IONetwork::WIN32_IoCompletionPort *)(this + 20), v13, 0) )
  {
    if ( v13 )
      (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v13)(v13, 1);
    LOBYTE(v20) = 2;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v6);
    v20 = -1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v17);
    return -1;
  }
  else
  {
    LOBYTE(v20) = 2;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v6);
    v20 = -1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v17);
    return v14;
  }
}
