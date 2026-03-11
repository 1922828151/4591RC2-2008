/*
 * func-name: sub_10033240
 * func-address: 0x10033240
 * callers: 0x10031010
 * callees: 0x10007400, 0x10034930, 0x10035ba0, 0x10035c80, 0x1003da30, 0x1004e870
 */

char __stdcall sub_10033240(int a1, Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  int v10; // ebx
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Thread_Mutex *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // ebp
  Outpop::Utility::Lock *v16; // ebp
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *tm; // [esp-18h] [ebp-5Ch]
  wchar_t *v27; // [esp-18h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-58h]
  DWORD v29; // [esp-14h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-54h]
  DWORD v31; // [esp-10h] [ebp-54h]
  DWORD LastError; // [esp-Ch] [ebp-50h]
  DWORD v33; // [esp-Ch] [ebp-50h]
  int v34; // [esp+20h] [ebp-24h] BYREF
  int v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+2Ch] [ebp-18h]
  int v37; // [esp+30h] [ebp-14h]
  int v38; // [esp+34h] [ebp-10h]
  int v39; // [esp+40h] [ebp-4h]

  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  sub_10035BA0(*a2);
  if ( (int)Outpop::Utility::Stream_Base::get_readable(*a2) > 0 )
  {
    sub_10035C80(&a2);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v2);
      LOBYTE(v39) = 2;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10007400(
             0xFFFF - v5,
             &log_buffer[v5],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             dt,
             tm,
             CurrentProcessId,
             CurrentThreadId,
             LastError,
             L"d:\\r3\\outpopgameproject\\ionetwork\\Reliable_Container.h",
             229);
      v10 = a1;
      sub_10007400(
        0xFFFF - (v9 + v5),
        &log_buffer[v9 + v5],
        L"Reliable_Container::process_act_stream   channel %d  is quickly  resend,id is %d",
        *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
        (unsigned __int16)a2);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      LOBYTE(v39) = 0;
      Outpop::Utility::Lock::unlock(v2);
    }
    else
    {
      v10 = a1;
    }
    v12 = (Outpop::Utility::Thread_Mutex *)(v10 + 52);
    LOBYTE(v39) = 3;
    if ( !Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v10 + 52)) )
      return 0;
    if ( (_WORD)a2 == *(_WORD *)(v10 + 152) )
    {
      if ( ++*(_WORD *)(v10 + 154) >= 2u )
      {
        sub_1003DA30(&v34, v10 + 152);
        v13 = v34;
        v14 = *(_DWORD *)(v10 + 8);
        if ( !v34 || v34 != v10 + 4 )
          invalid_parameter_noinfo();
        v15 = v35;
        if ( v35 == v14 )
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
          {
            v16 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v16);
            LOBYTE(v39) = 4;
            v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v18 = Outpop::Utility::Logger::get_log_buffer(v17);
            v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
            v33 = GetLastError();
            v31 = GetCurrentThreadId();
            v29 = GetCurrentProcessId();
            v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v27 = Outpop::Utility::Logger::make_tm(v20);
            v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v22 = Outpop::Utility::Logger::make_dt(v21);
            v23 = sub_10007400(
                    0xFFFF - v19,
                    &v18[v19],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    v22,
                    v27,
                    v29,
                    v31,
                    v33,
                    L"d:\\r3\\outpopgameproject\\ionetwork\\Reliable_Container.h",
                    244);
            sub_10007400(
              0xFFFF - (v23 + v19),
              &v18[v23 + v19],
              L"error   Reliable_Container::process_act_stream  want quickly send not font packet,id is %d",
              *(unsigned __int16 *)(v10 + 152));
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v18);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v24);
            }
            LOBYTE(v39) = 3;
            Outpop::Utility::Lock::unlock(v16);
          }
        }
        else
        {
          if ( !v13 )
            invalid_parameter_noinfo();
          if ( v15 == *(_DWORD *)(v13 + 4) )
            invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v10 + 144) + 56))(
            *(_DWORD *)(v10 + 144),
            *(_DWORD *)(v15 + 12));
        }
        v12 = (Outpop::Utility::Thread_Mutex *)(v10 + 52);
        *(_WORD *)(v10 + 152) = 0;
        *(_WORD *)(v10 + 154) = 0;
      }
    }
    else
    {
      *(_WORD *)(v10 + 152) = (_WORD)a2;
      *(_WORD *)(v10 + 154) = 0;
    }
    LOBYTE(v39) = 0;
    Outpop::Utility::Thread_Mutex::release(v12);
  }
  v39 = -1;
  if ( v36 )
    operator delete(v36);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  return 1;
}
