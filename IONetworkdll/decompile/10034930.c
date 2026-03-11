/*
 * func-name: sub_10034930
 * func-address: 0x10034930
 * callers: 0x10033240
 * callees: 0x10007400, 0x10024d90, 0x100353f0, 0x1003da30, 0x1004e870
 */

char __stdcall sub_10034930(_DWORD *a1, Outpop::Utility::Lock *a2)
{
  _DWORD *v2; // edi
  bool v3; // al
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // eax
  int v14; // ebp
  Outpop::Utility::Logger *v15; // eax
  int v16; // esi
  Outpop::Utility::Lock *v17; // ebp
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Lock *v25; // ebp
  Outpop::Utility::Logger *v26; // eax
  wchar_t *log_buffer; // edi
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *dt; // eax
  int v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  wchar_t *v39; // [esp-4h] [ebp-38h]
  wchar_t *v40; // [esp-4h] [ebp-38h]
  _DWORD *v41; // [esp+18h] [ebp-1Ch] BYREF
  int v42; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Thread_Mutex *v43; // [esp+20h] [ebp-14h]
  int v44; // [esp+24h] [ebp-10h]
  int v45; // [esp+30h] [ebp-4h]

  v2 = a1;
  v43 = (Outpop::Utility::Thread_Mutex *)(a1 + 13);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 13));
  v44 = v3 - 1;
  v45 = 0;
  if ( !v3 )
    return 0;
  sub_1003DA30(&v41, &a2);
  v4 = v41;
  v5 = a1[2];
  if ( !v41 || v41 != a1 + 1 )
    invalid_parameter_noinfo();
  v6 = v42;
  v7 = Outpop::Utility::Logger::instance();
  if ( v6 == v5 )
  {
    if ( (*(_BYTE *)(v7 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v25 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v25);
      LOBYTE(v45) = 3;
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v26);
      v28 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v29);
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v30);
      v32 = sub_10007400(
              0xFFFF - v28,
              &log_buffer[v28],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Reliable_Container.h",
              135);
      sub_10007400(
        0xFFFF - (v32 + v28),
        &log_buffer[v32 + v28],
        L"ERROR  dgram_channel act packet reliable id not find:%d",
        (unsigned __int16)a2);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v33);
      }
      LOBYTE(v45) = 0;
      Outpop::Utility::Lock::unlock(v25);
    }
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      a2 = v8;
      Outpop::Utility::Lock::lock(v8);
      LOBYTE(v45) = 1;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v10 = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v39 = Outpop::Utility::Logger::make_tm(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v13 = Outpop::Utility::Logger::make_dt(v12);
      v14 = sub_10007400(0xFFFFu, v10, L"\nLOGINFO %s:%s Message:", v13, v39);
      if ( !v4 )
        invalid_parameter_noinfo();
      if ( v42 == v4[1] )
        invalid_parameter_noinfo();
      sub_10007400(
        0xFFFF - v14,
        &v10[v14],
        L"delete  stream  in reliable_container,stream  reliable id is:%d",
        *(unsigned __int16 *)(v42 + 8));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v10);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      LOBYTE(v45) = 0;
      Outpop::Utility::Lock::unlock(v8);
      v2 = a1;
      v6 = v42;
    }
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( v6 == v4[1] )
      invalid_parameter_noinfo();
    v16 = *(_DWORD *)(v6 + 12);
    if ( v16 )
    {
      sub_10024D90(*(Outpop::Utility::Ref_Object ***)(v6 + 12));
      operator delete(v16);
    }
    sub_100353F0(&v41, v4, v6);
    if ( v2[29] < v2[30] )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        a2 = v17;
        Outpop::Utility::Lock::lock(v17);
        LOBYTE(v45) = 2;
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v19 = Outpop::Utility::Logger::get_log_buffer(v18);
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v40 = Outpop::Utility::Logger::make_tm(v20);
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::make_dt(v21);
        v23 = sub_10007400(0xFFFFu, v19, L"\nLOGINFO %s:%s Message:", v22, v40);
        sub_10007400(
          0xFFFF - v23,
          &v19[v23],
          L" Reliable_Container::erase_stream_from_map move_window_size_++  is:%d",
          a1[29]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v19);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v24);
        }
        LOBYTE(v45) = 0;
        Outpop::Utility::Lock::unlock(v17);
        v2 = a1;
      }
      ++v2[29];
    }
  }
  v45 = -1;
  v44 = -1;
  Outpop::Utility::Thread_Mutex::release(v43);
  return 1;
}
