/*
 * func-name: ?handler_close@Dgram_Channel@IONetwork@Outpop@@AAEXXZ
 * func-address: 0x10031590
 * callers: 0x1002dff0
 * callees: 0x10003890, 0x10007400, 0x10029c80, 0x10036940
 */

char __thiscall Outpop::IONetwork::Dgram_Channel::handler_close(Outpop::IONetwork::Dgram_Channel *this)
{
  Outpop::Utility::Ref_Object *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // ebp
  char *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  int v11; // eax
  int v12; // edi
  Outpop::IONetwork::Dgram_Acceptor *v13; // ecx
  Outpop::Utility::Timer_Queue *v14; // eax
  bool v15; // zf
  wchar_t *tm; // [esp-4h] [ebp-38h]
  int v18; // [esp-4h] [ebp-38h]
  struct in_addr *v19; // [esp-4h] [ebp-38h]
  int v20; // [esp+0h] [ebp-34h]
  int v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+4h] [ebp-30h]
  int v23; // [esp+8h] [ebp-2Ch]
  int v24; // [esp+Ch] [ebp-28h]
  Outpop::Utility::Ref_Object *v25[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+30h] [ebp-4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v25[0] = v2;
    Outpop::Utility::Lock::lock(v2);
    v27 = 0;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    v18 = ntohs(*((_WORD *)this + 47));
    v9 = inet_ntoa(*(struct in_addr *)((char *)this + 96));
    sub_10007400(
      0xFFFF - v8,
      &log_buffer[v8],
      L"Dgram_Channel::handler_close(void) remote ip is %S,remote port is %d",
      v9,
      v18);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    v27 = -1;
    Outpop::Utility::Lock::unlock(v2);
  }
  v25[1] = (Outpop::IONetwork::Dgram_Channel *)((char *)this + 132);
  v11 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132)) - 1;
  v12 = v11;
  v26 = v11;
  v27 = 1;
  if ( v11 != -1 )
  {
    if ( *((_BYTE *)this + 215) )
    {
      Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::Dgram_Channel *)((char *)this + 80));
      v13 = (Outpop::IONetwork::Dgram_Acceptor *)*((_DWORD *)this + 46);
      v19 = (struct in_addr *)((char *)this + 80);
      if ( v13 )
        Outpop::IONetwork::Dgram_Acceptor::erase_channel_from_map(v13, v19);
      else
        Outpop::IONetwork::Dgram_Connector::erase_channel_from_map(
          *((Outpop::IONetwork::Dgram_Connector **)this + 47),
          (struct Outpop::IONetwork::INET_Addr *)v19);
      if ( *((_DWORD *)this + 158) != -1 )
      {
        v14 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(
                                                *((_DWORD *)this + 158),
                                                v20,
                                                v22,
                                                v23,
                                                v24);
        Outpop::Utility::Timer_Queue::cancel(v14, v21);
        *((_DWORD *)this + 158) = -1;
      }
      v15 = *((_DWORD *)this + 30) == 0;
      *((_BYTE *)this + 215) = 0;
      if ( !v15 )
      {
        v12 = -1;
        v26 = -1;
        Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
        v25[0] = this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v27) = 2;
        (*(void (__thiscall **)(_DWORD, _DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 30) + 4))(
          *((_DWORD *)this + 30),
          0,
          v25);
        LOBYTE(v27) = 1;
        if ( v25[0] )
          Outpop::Utility::Ref_Object::release(v25[0]);
      }
    }
    LOBYTE(v11) = -1;
    v27 = -1;
    if ( v12 != -1 )
    {
      v26 = -1;
      LOBYTE(v11) = Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
    }
  }
  return v11;
}
