/*
 * func-name: sub_10048B90
 * func-address: 0x10048b90
 * callers: 0x10047130
 * callees: 0x10007400, 0x10024d90, 0x100353f0, 0x1003da30, 0x1004e870
 */

char __stdcall sub_10048B90(_DWORD *a1, Outpop::Utility::Lock *a2)
{
  _DWORD *v2; // edi
  bool v3; // al
  int v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // ebp
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // eax
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Ref_Object **v17; // ebp
  Outpop::Utility::Lock *v18; // edi
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // ebp
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // eax
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Lock *v27; // ebp
  Outpop::Utility::Logger *v28; // eax
  wchar_t *log_buffer; // edi
  int v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *dt; // eax
  int v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v37; // [esp-18h] [ebp-4Ch]
  wchar_t *v38; // [esp-18h] [ebp-4Ch]
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD v40; // [esp-14h] [ebp-48h]
  DWORD v41; // [esp-14h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD v43; // [esp-10h] [ebp-44h]
  DWORD v44; // [esp-10h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD v46; // [esp-Ch] [ebp-40h]
  DWORD v47; // [esp-Ch] [ebp-40h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  _DWORD *v49; // [esp+18h] [ebp-1Ch] BYREF
  int v50; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Thread_Mutex *v51; // [esp+20h] [ebp-14h]
  int v52; // [esp+24h] [ebp-10h]
  int v53; // [esp+30h] [ebp-4h]

  v2 = a1;
  v51 = (Outpop::Utility::Thread_Mutex *)(a1 + 13);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 13));
  v52 = v3 - 1;
  v53 = 0;
  if ( !v3 )
    return 0;
  sub_1003DA30(a1, &v49, &a2);
  v4 = (int)v49;
  v5 = a1[2];
  if ( !v49 || v49 != a1 + 1 )
    invalid_parameter_noinfo();
  v6 = v50;
  v7 = Outpop::Utility::Logger::instance();
  if ( v6 == v5 )
  {
    if ( (*(_BYTE *)(v7 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v27 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v27);
      LOBYTE(v53) = 3;
      v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v28);
      v30 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v31);
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v32);
      v34 = sub_10007400(
              0xFFFF - v30,
              &log_buffer[v30],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
              134);
      sub_10007400(
        0xFFFF - (v34 + v30),
        &log_buffer[v34 + v30],
        L"ERROR  dgram_channel act packet reliable id not find:%d",
        (unsigned __int16)a2);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v35);
      }
      LOBYTE(v53) = 0;
      Outpop::Utility::Lock::unlock(v27);
    }
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      a2 = v8;
      Outpop::Utility::Lock::lock(v8);
      LOBYTE(v53) = 1;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v10 = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = sub_10007400(0xFFFFu, v10, L"\n%s", L"LOG_DEBUG");
      v46 = GetLastError();
      v43 = GetCurrentThreadId();
      v40 = GetCurrentProcessId();
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_tm(v12);
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::make_dt(v13);
      v15 = sub_10007400(
              0xFFFF - v11,
              &v10[v11],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v14,
              v37,
              v40,
              v43,
              v46,
              L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
              121)
          + v11;
      if ( !v49 )
        invalid_parameter_noinfo();
      if ( v50 == v49[1] )
        invalid_parameter_noinfo();
      sub_10007400(
        0xFFFF - v15,
        &v10[v15],
        L"delete  stream  in reliable_container,stream  reliable id is:%d",
        *(unsigned __int16 *)(v50 + 8));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v10);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v16);
      }
      LOBYTE(v53) = 0;
      Outpop::Utility::Lock::unlock(v8);
      v2 = a1;
      v4 = (int)v49;
      v6 = v50;
    }
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( v6 == *(_DWORD *)(v4 + 4) )
      invalid_parameter_noinfo();
    v17 = *(Outpop::Utility::Ref_Object ***)(v6 + 12);
    if ( v17 )
    {
      sub_10024D90(v17);
      operator delete(v17);
    }
    sub_100353F0(v2, &v49, v4, v50);
    if ( v2[29] < v2[30] )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v18 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        a2 = v18;
        Outpop::Utility::Lock::lock(v18);
        LOBYTE(v53) = 2;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v20 = Outpop::Utility::Logger::get_log_buffer(v19);
        v21 = sub_10007400(0xFFFFu, v20, L"\n%s", L"LOG_DEBUG");
        v47 = GetLastError();
        v44 = GetCurrentThreadId();
        v41 = GetCurrentProcessId();
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v38 = Outpop::Utility::Logger::make_tm(v22);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v24 = Outpop::Utility::Logger::make_dt(v23);
        v25 = sub_10007400(
                0xFFFF - v21,
                &v20[v21],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v24,
                v38,
                v41,
                v44,
                v47,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                128);
        sub_10007400(
          0xFFFF - (v25 + v21),
          &v20[v25 + v21],
          L" Reliable_Container::erase_stream_from_map move_window_size_++  is:%d",
          a1[29]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v20);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v26);
        }
        LOBYTE(v53) = 0;
        Outpop::Utility::Lock::unlock(v18);
        v2 = a1;
      }
      ++v2[29];
    }
  }
  v53 = -1;
  v52 = -1;
  Outpop::Utility::Thread_Mutex::release(v51);
  return 1;
}
