/*
 * func-name: ?check_channel_map_time_out@Dgram_Acceptor@IONetwork@Outpop@@AAEXXZ
 * func-address: 0x100292b0
 * callers: 0x10029290, 0x1002b990
 * callees: 0x10007400, 0x10032250, 0x1003a130, 0x1003b8c0, 0x1003ba70, 0x1004e870
 */

unsigned int __thiscall Outpop::IONetwork::Dgram_Acceptor::check_channel_map_time_out(
        Outpop::IONetwork::Dgram_Acceptor *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  void (__cdecl *v5)(); // ebp
  Outpop::Utility::Ref_Object *v6; // ebp
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // eax
  int v14; // esi
  char *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  _DWORD *v17; // eax
  Outpop::Utility::Time_Value *last_receive_stream_time; // eax
  bool v19; // bl
  Outpop::Utility::Lock *v20; // ebx
  Outpop::Utility::Logger *v21; // eax
  wchar_t *log_buffer; // edi
  int v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *dt; // eax
  int v27; // esi
  char *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  _DWORD *v30; // esi
  unsigned int result; // eax
  _DWORD *v32; // edi
  Outpop::Utility::Ref_Object **v33; // esi
  Outpop::Utility::Ref_Object **v34; // edi
  wchar_t *v35; // [esp-18h] [ebp-94h]
  wchar_t *tm; // [esp-18h] [ebp-94h]
  DWORD v37; // [esp-14h] [ebp-90h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-90h]
  DWORD v39; // [esp-10h] [ebp-8Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-8Ch]
  DWORD v41; // [esp-Ch] [ebp-88h]
  DWORD LastError; // [esp-Ch] [ebp-88h]
  int v43; // [esp-4h] [ebp-80h]
  int v44; // [esp-4h] [ebp-80h]
  struct in_addr *v46; // [esp+18h] [ebp-64h]
  int v47; // [esp+1Ch] [ebp-60h]
  struct in_addr *v48; // [esp+20h] [ebp-5Ch]
  _DWORD *v49; // [esp+2Ch] [ebp-50h]
  _DWORD *v50; // [esp+30h] [ebp-4Ch]
  Outpop::Utility::Thread_Mutex *v51; // [esp+34h] [ebp-48h]
  _BYTE v52[8]; // [esp+3Ch] [ebp-40h] BYREF
  _BYTE v53[8]; // [esp+44h] [ebp-38h] BYREF
  _BYTE v54[8]; // [esp+4Ch] [ebp-30h] BYREF
  _BYTE v55[8]; // [esp+54h] [ebp-28h] BYREF
  _DWORD *v56; // [esp+60h] [ebp-1Ch]
  unsigned int v57; // [esp+64h] [ebp-18h]
  int v58; // [esp+68h] [ebp-14h]
  int v59; // [esp+78h] [ebp-4h]

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 1;
  v51 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184);
  if ( !Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184)) )
    return sub_1003BA70();
  Outpop::Utility::Time_Value::gettimeofday(v52);
  LOBYTE(v59) = 2;
  v2 = (_DWORD *)**((_DWORD **)this + 64);
  v3 = (_DWORD *)((char *)this + 252);
  v50 = v2;
  v49 = v3;
  while ( 1 )
  {
    v4 = (_DWORD *)*((_DWORD *)this + 64);
    if ( v3 && v3 == (_DWORD *)((char *)this + 252) )
    {
      v5 = invalid_parameter_noinfo;
    }
    else
    {
      v5 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    if ( v2 == v4 )
      break;
    if ( !v3 )
      v5();
    if ( v2 == (_DWORD *)v3[1] )
      v5();
    if ( *(_BYTE *)(v2[4] + 620) )
    {
      if ( v2 == (_DWORD *)v3[1] )
        v5();
      last_receive_stream_time = (Outpop::Utility::Time_Value *)Outpop::IONetwork::Dgram_Channel::get_last_receive_stream_time(
                                                                  v2[4],
                                                                  v53);
      LOBYTE(v59) = 5;
      v47 = Outpop::Utility::Time_Value::sec(last_receive_stream_time);
      v19 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v52) - v47 > *((_DWORD *)this + 11);
      LOBYTE(v59) = 2;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v53);
      if ( v19 )
      {
        if ( v2 == (_DWORD *)v3[1] )
          v5();
        v48 = (struct in_addr *)v2[4];
        v6 = (Outpop::Utility::Ref_Object *)v48;
        if ( v48 )
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v48);
        LOBYTE(v59) = 6;
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v20 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v20);
          LOBYTE(v59) = 7;
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
          v23 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v24);
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v25);
          v27 = sub_10007400(
                  0xFFFF - v23,
                  &log_buffer[v23],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  472)
              + v23;
          v44 = ntohs(v48[23].S_un.S_un_w.s_w2);
          v28 = inet_ntoa(v48[24]);
          sub_10007400(
            0xFFFF - v27,
            &log_buffer[v27],
            L"Dgram_Acceptor::check_channel_map_time_out  it->second->get_last_receive_stream_time().sec() > 100,ip is %S,port is  %d",
            v28,
            v44);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v29);
          }
          LOBYTE(v59) = 6;
          Outpop::Utility::Lock::unlock(v20);
          v2 = v50;
          v3 = v49;
        }
        v17 = (_DWORD *)sub_1003A130(v55, v3, v2);
        goto LABEL_47;
      }
    }
    else
    {
      if ( v2 == (_DWORD *)v3[1] )
        v5();
      if ( InterlockedExchange((volatile LONG *)(v2[4] + 624), *(_DWORD *)(v2[4] + 624)) >= 3 )
      {
        if ( v2 == (_DWORD *)v3[1] )
          v5();
        v46 = (struct in_addr *)v2[4];
        v6 = (Outpop::Utility::Ref_Object *)v46;
        if ( v46 )
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v46);
        LOBYTE(v59) = 3;
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v7);
          LOBYTE(v59) = 4;
          v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v9 = Outpop::Utility::Logger::get_log_buffer(v8);
          v10 = sub_10007400(0xFFFFu, v9, L"\n%s", L"LOG_ERROR");
          v41 = GetLastError();
          v39 = GetCurrentThreadId();
          v37 = GetCurrentProcessId();
          v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v35 = Outpop::Utility::Logger::make_tm(v11);
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v13 = Outpop::Utility::Logger::make_dt(v12);
          v14 = sub_10007400(
                  0xFFFF - v10,
                  &v9[v10],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v13,
                  v35,
                  v37,
                  v39,
                  v41,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  457)
              + v10;
          v43 = ntohs(v46[23].S_un.S_un_w.s_w2);
          v15 = inet_ntoa(v46[24]);
          sub_10007400(
            0xFFFF - v14,
            &v9[v14],
            L"Dgram_Acceptor::check_channel_map_time_out  it->second->get_login_stream_packet_count() >= 3,ip is %S,port is  %d",
            v15,
            v43);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v9);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v16);
          }
          LOBYTE(v59) = 3;
          Outpop::Utility::Lock::unlock(v7);
          v2 = v50;
          v3 = v49;
        }
        v17 = (_DWORD *)sub_1003A130(v54, v3, v2);
LABEL_47:
        v50 = (_DWORD *)v17[1];
        v49 = (_DWORD *)*v17;
        sub_1003B8C0();
        LOBYTE(v59) = 2;
        if ( v6 )
          Outpop::Utility::Ref_Object::release(v6);
        v3 = v49;
        goto LABEL_4;
      }
    }
    if ( v2 == (_DWORD *)v3[1] )
      v5();
    v50 = (_DWORD *)*v2;
LABEL_4:
    v2 = v50;
  }
  LOBYTE(v59) = 1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v52);
  LOBYTE(v59) = 0;
  Outpop::Utility::Thread_Mutex::release(v51);
  v30 = v56;
  result = v57;
  if ( (unsigned int)v56 > v57 )
  {
    v5();
    result = v57;
  }
  while ( 1 )
  {
    v32 = (_DWORD *)result;
    if ( (unsigned int)v56 > result )
    {
      v5();
      result = v57;
    }
    if ( v30 == v32 )
      break;
    if ( (unsigned int)v30 >= result )
      v5();
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v30 + 24))(*v30);
    result = v57;
    if ( (unsigned int)v30 >= v57 )
    {
      v5();
      result = v57;
    }
    ++v30;
  }
  v59 = -1;
  v33 = (Outpop::Utility::Ref_Object **)v56;
  if ( v56 )
  {
    v34 = (Outpop::Utility::Ref_Object **)v57;
    if ( v56 != (_DWORD *)v57 )
    {
      do
      {
        if ( *v33 )
          Outpop::Utility::Ref_Object::release(*v33);
        ++v33;
      }
      while ( v33 != v34 );
      v33 = (Outpop::Utility::Ref_Object **)v56;
    }
    result = operator delete(v33);
  }
  v56 = 0;
  v57 = 0;
  v58 = 0;
  return result;
}
