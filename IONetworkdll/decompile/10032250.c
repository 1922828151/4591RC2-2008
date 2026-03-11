/*
 * func-name: ?get_last_receive_stream_time@Dgram_Channel@IONetwork@Outpop@@QAE?AVTime_Value@Utility@3@XZ
 * func-address: 0x10032250
 * callers: 0x100292b0, 0x100390a0
 * callees: none
 */

Outpop::Utility::Time_Value *__thiscall Outpop::IONetwork::Dgram_Channel::get_last_receive_stream_time(
        _DWORD *this,
        Outpop::Utility::Time_Value *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  bool v4; // al
  int v5; // ecx
  Outpop::Utility::Time_Value *v6; // esi
  _DWORD v8[3]; // [esp+18h] [ebp-20h] BYREF
  int v9; // [esp+24h] [ebp-14h]
  int v10; // [esp+34h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(this + 33);
  v8[2] = this + 33;
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 33));
  v9 = v4 - 1;
  v10 = 1;
  if ( v4 )
  {
    v5 = this[42];
    v8[0] = this[41];
    v8[1] = v5;
    v6 = a2;
    *(_DWORD *)a2 = v8[0];
    *((_DWORD *)a2 + 1) = v5;
    LOBYTE(v10) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v8);
    LOBYTE(v10) = 0;
    v9 = -1;
    Outpop::Utility::Thread_Mutex::release(v3);
  }
  else
  {
    v6 = a2;
    Outpop::Utility::Time_Value::Time_Value(a2, 0, 0);
    LOBYTE(v10) = 0;
  }
  return v6;
}
