/*
 * func-name: ?cancel_timer@P2P_Channel@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x100451f0
 * callers: 0x100455d0
 * callees: none
 */

char __thiscall Outpop::IONetwork::P2P_Channel::cancel_timer(Outpop::IONetwork::P2P_Channel *this)
{
  Outpop::Utility::Thread_Mutex *v2; // edi
  int v3; // eax
  Outpop::Utility::Timer_Queue *v4; // eax
  int v6; // [esp+0h] [ebp-24h]
  int v7; // [esp+0h] [ebp-24h]
  int v8; // [esp+4h] [ebp-20h]
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h]

  v2 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2P_Channel *)((char *)this + 132)) - 1;
  if ( v3 != -1 )
  {
    if ( *((_DWORD *)this + 156) != -1 )
    {
      v4 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(
                                             *((_DWORD *)this + 156),
                                             v6,
                                             v8,
                                             v9,
                                             v10);
      Outpop::Utility::Timer_Queue::cancel(v4, v7);
      *((_DWORD *)this + 156) = -1;
    }
    LOBYTE(v3) = Outpop::Utility::Thread_Mutex::release(v2);
  }
  return v3;
}
