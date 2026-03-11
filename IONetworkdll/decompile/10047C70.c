/*
 * func-name: sub_10047C70
 * func-address: 0x10047c70
 * callers: 0x10044a00
 * callees: 0x10007400, 0x1000ac30, 0x1000aff0, 0x1000b040, 0x10048940
 */

char __stdcall sub_10047C70(_DWORD *a1, _DWORD *a2)
{
  bool v3; // al
  unsigned int v4; // ecx
  unsigned int v6; // eax
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Ref_Object *v16; // edi
  int reliable_id; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  Outpop::Utility::Ref_Object *v22; // [esp+18h] [ebp-1Ch] BYREF
  Outpop::Utility::Lock *i; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Thread_Mutex *v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+24h] [ebp-10h]
  int v26; // [esp+30h] [ebp-4h]
  int v27; // [esp+38h] [ebp+4h]

  v24 = (Outpop::Utility::Thread_Mutex *)(a1 + 13);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 13));
  v25 = v3 - 1;
  v26 = 0;
  if ( !v3 )
    return 0;
  v4 = a1[3];
  if ( v4 )
  {
    v6 = a1[29];
    if ( v4 < v6 )
    {
      v27 = v6 - v4;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        i = v7;
        Outpop::Utility::Lock::lock(v7);
        LOBYTE(v26) = 1;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10007400(
                0xFFFF - v10,
                &log_buffer[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                319);
        sub_10007400(
          0xFFFF - (v14 + v10),
          &log_buffer[v14 + v10],
          L"channel  %d check_move_windows_size  i_count is %d,move_window_size_ is %d",
          *(_DWORD *)(a1[36] + 112),
          v27,
          a1[29]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        LOBYTE(v26) = 0;
        Outpop::Utility::Lock::unlock(v7);
      }
      for ( i = 0; (int)i < v27; i = (Outpop::Utility::Lock *)((char *)i + 1) )
      {
        if ( !a1[35] )
          break;
        v16 = *(Outpop::Utility::Ref_Object **)sub_1000AFF0(a1 + 31);
        v22 = v16;
        if ( v16 )
          Outpop::Utility::Ref_Object::addref(v16);
        LOBYTE(v26) = 2;
        sub_1000B040(a1 + 31);
        sub_1000AC30((int)&v22, a2);
        reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(v16);
        sub_10048940(reliable_id, &v22);
        LOBYTE(v26) = 0;
        if ( v16 )
          Outpop::Utility::Ref_Object::release(v16);
      }
    }
    v26 = -1;
    v25 = -1;
    Outpop::Utility::Thread_Mutex::release(v24);
    return 1;
  }
  else
  {
    v26 = -1;
    v25 = -1;
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(a1 + 13));
    return 1;
  }
}
