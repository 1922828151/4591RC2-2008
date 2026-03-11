/*
 * func-name: ?handle_time_out@Dgram_Channel@IONetwork@Outpop@@UAEXABVTime_Value@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@J@Z
 * func-address: 0x10031810
 * callers: none
 * callees: 0x10003bf0, 0x10007400, 0x10023ca0, 0x1002efa0, 0x10032340, 0x10033800, 0x10034560, 0x1003ba70, 0x1004e98e
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::handle_time_out(int this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  Outpop::Utility::Lock *v7; // ebx
  int v8; // eax
  bool v9; // zf
  int v10; // esi
  HANDLE *v11; // ecx
  LONG ack_stream; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *log_buffer; // edi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *dt; // eax
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Lock *v20; // ebx
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // edi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // eax
  int v27; // ecx
  Outpop::Utility::Logger *v28; // eax
  int v29; // edi
  int v30; // ebx
  int v31; // eax
  LONG v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // edi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  Outpop::Utility::Logger *v39; // eax
  _DWORD v41[5]; // [esp-4h] [ebp-50h] BYREF
  Outpop::Utility::Lock *v42; // [esp+10h] [ebp-3Ch]
  Outpop::Utility::Lock *v43; // [esp+14h] [ebp-38h]
  Outpop::Utility::Lock *v44; // [esp+18h] [ebp-34h]
  int v45; // [esp+1Ch] [ebp-30h] BYREF
  int v46; // [esp+20h] [ebp-2Ch]
  int v47; // [esp+24h] [ebp-28h]
  int v48; // [esp+28h] [ebp-24h]
  _BYTE v49[4]; // [esp+2Ch] [ebp-20h] BYREF
  int v50; // [esp+30h] [ebp-1Ch]
  int v51; // [esp+34h] [ebp-18h]
  int v52; // [esp+38h] [ebp-14h]
  int v53; // [esp+48h] [ebp-4h]

  ++*(_DWORD *)(this + 688);
  v6 = 0;
  if ( !(*(_DWORD *)(this + 688) % 3u) )
  {
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v53 = 0;
    if ( !(unsigned __int8)sub_10033800(this + 288, &v45) )
    {
      v7 = (Outpop::Utility::Lock *)operator new(56);
      v43 = v7;
      LOBYTE(v53) = 1;
      if ( v7 )
      {
        v42 = (Outpop::Utility::Lock *)v41;
        v41[0] = this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v53) = 1;
        v6 = sub_10034560(v7, v41[0]);
      }
      LOBYTE(v53) = 0;
      *(_DWORD *)(v6 + 24) = 1;
      *(_DWORD *)(v6 + 52) = a5;
      v8 = *(_DWORD *)(this + 184);
      if ( v8 )
      {
        v9 = !PostQueuedCompletionStatus(**(HANDLE **)(v8 + 124), 1u, 0, (LPOVERLAPPED)(v6 + 4));
        goto LABEL_10;
      }
      goto LABEL_7;
    }
    ack_stream = Outpop::IONetwork::Dgram_Channel::get_ack_stream(&v45);
    if ( ack_stream
      && !(InterlockedExchangeAdd((volatile LONG *)(this + 692), ack_stream) % 100)
      && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v42 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v42);
      LOBYTE(v53) = 3;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v41[0] = Outpop::Utility::Logger::make_tm(v15);
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v16);
      v18 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, v41[0]);
      sub_10007400(
        0xFFFF - v18,
        &log_buffer[v18],
        L"Dgram_Channel::handle_time_out  reliable_container  send  ack  pakcet 1,channel id is %d,num is:%d",
        *(_DWORD *)(this + 112),
        *(_DWORD *)(this + 692));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v41[0] = log_buffer;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v19);
      }
      LOBYTE(v53) = 0;
      Outpop::Utility::Lock::unlock(v42);
    }
    if ( v46 && (v47 - v46) >> 2 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v20 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v44 = v20;
        Outpop::Utility::Lock::lock(v20);
        LOBYTE(v53) = 4;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::get_log_buffer(v21);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v41[0] = Outpop::Utility::Logger::make_tm(v23);
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v25 = Outpop::Utility::Logger::make_dt(v24);
        v26 = sub_10007400(0xFFFFu, v22, L"\nLOGINFO %s:%s Message:", v25, v41[0]);
        if ( v46 )
          v27 = (v47 - v46) >> 2;
        else
          v27 = 0;
        sub_10007400(
          0xFFFF - v26,
          &v22[v26],
          L"Dgram_Channel::handle_time_out  reliable_container  have resend pakcet,num is:%d",
          v27);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v22);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v41[0] = v22;
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v28);
        }
        LOBYTE(v53) = 0;
        Outpop::Utility::Lock::unlock(v20);
      }
      Outpop::IONetwork::Dgram_Channel::send_unite_quence(this, (int)&v45);
    }
    if ( !(++*(_DWORD *)(this + 636) % 100) )
    {
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 340));
      v29 = *(_DWORD *)(this + 376);
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 340));
      if ( v29 >= 200 )
      {
        v30 = operator new(56);
        v44 = (Outpop::Utility::Lock *)v30;
        LOBYTE(v53) = 5;
        if ( v30 )
        {
          v43 = (Outpop::Utility::Lock *)v41;
          v41[0] = this;
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
          LOBYTE(v53) = 5;
          v6 = sub_10034560(v30, v41[0]);
        }
        else
        {
          v6 = 0;
        }
        LOBYTE(v53) = 0;
        *(_DWORD *)(v6 + 24) = 2;
        *(_DWORD *)(v6 + 52) = a5;
        v31 = *(_DWORD *)(this + 184);
        if ( v31 )
        {
          v11 = *(HANDLE **)(v31 + 124);
LABEL_9:
          v9 = Outpop::IONetwork::WIN32_IoCompletionPort::post(v11, (struct Outpop::IONetwork::Asynch_Result *)v6, 0) == -1;
LABEL_10:
          if ( v9 )
            (**(void (__thiscall ***)(int, int))v6)(v6, 1);
          goto LABEL_12;
        }
LABEL_7:
        v10 = *(_DWORD *)(this + 188);
        if ( !v10 )
        {
LABEL_12:
          v53 = -1;
          return sub_1003BA70();
        }
        v11 = *(HANDLE **)(v10 + 8);
        goto LABEL_9;
      }
      Outpop::IONetwork::Comminute_Container::check_stream_conminute((Outpop::IONetwork::Comminute_Container *)(this + 220));
    }
    v53 = -1;
    return sub_1003BA70();
  }
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 7;
  v32 = Outpop::IONetwork::Dgram_Channel::get_ack_stream(v49);
  if ( v50 && (v51 - v50) >> 2 )
  {
    if ( !(InterlockedExchangeAdd((volatile LONG *)(this + 692), v32) % 100)
      && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v43 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v43);
      LOBYTE(v53) = 8;
      v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v34 = Outpop::Utility::Logger::get_log_buffer(v33);
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v41[0] = Outpop::Utility::Logger::make_tm(v35);
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_dt(v36);
      v38 = sub_10007400(0xFFFFu, v34, L"\nLOGINFO %s:%s Message:", v37, v41[0]);
      sub_10007400(
        0xFFFF - v38,
        &v34[v38],
        L"Dgram_Channel::handle_time_out  reliable_container  send  ack  pakcet 2,channel id is %d num is:%d",
        *(_DWORD *)(this + 112),
        *(_DWORD *)(this + 692));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v34);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v41[0] = v34;
        v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v39);
      }
      LOBYTE(v53) = 7;
      Outpop::Utility::Lock::unlock(v43);
    }
    Outpop::IONetwork::Dgram_Channel::send_unite_quence(this, (int)v49);
  }
  v53 = -1;
  return sub_1003BA70();
}
