/*
 * func-name: ?handler_close@P2P_Channel@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x100450a0
 * callers: 0x10044fa0, 0x100455d0
 * callees: 0x1004cc00
 */

void __thiscall Outpop::IONetwork::P2P_Channel::handler_close(Outpop::IONetwork::P2P_Channel *this)
{
  Outpop::Utility::Thread_Mutex *v2; // ebp
  char v3; // bl
  bool v4; // al
  int v5; // edi
  Outpop::Utility::Timer_Queue *v6; // eax
  int v7; // [esp+0h] [ebp-34h]
  int v8; // [esp+0h] [ebp-34h]
  int v9; // [esp+4h] [ebp-30h]
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+Ch] [ebp-28h]
  Outpop::Utility::Ref_Object *v12[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v13; // [esp+20h] [ebp-14h]
  int v14; // [esp+30h] [ebp-4h]

  v2 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
  v12[1] = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
  v3 = 0;
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2P_Channel *)((char *)this + 132));
  v5 = v4 - 1;
  v13 = v5;
  v14 = 0;
  if ( v4 )
  {
    if ( *((_BYTE *)this + 199) )
    {
      if ( *((_DWORD *)this + 156) != -1 )
      {
        v6 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(
                                               *((_DWORD *)this + 156),
                                               v7,
                                               v9,
                                               v10,
                                               v11);
        Outpop::Utility::Timer_Queue::cancel(v6, v8);
        *((_DWORD *)this + 156) = -1;
      }
      v3 = 1;
      if ( *((_DWORD *)this + 30) )
      {
        v5 = -1;
        v13 = -1;
        Outpop::Utility::Thread_Mutex::release(v2);
        v12[0] = this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v14) = 1;
        (*(void (__thiscall **)(_DWORD, _DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 30) + 4))(
          *((_DWORD *)this + 30),
          0,
          v12);
        LOBYTE(v14) = 0;
        if ( v12[0] )
          Outpop::Utility::Ref_Object::release(v12[0]);
      }
      *((_BYTE *)this + 199) = 0;
    }
    v14 = -1;
    if ( v5 != -1 )
    {
      v13 = -1;
      Outpop::Utility::Thread_Mutex::release(v2);
    }
    if ( v3 )
      Outpop::IONetwork::P2PUdpBuilder::erase_channel_from_map((char *)this + 664);
  }
}
