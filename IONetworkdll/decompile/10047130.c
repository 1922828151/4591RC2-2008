/*
 * func-name: sub_10047130
 * func-address: 0x10047130
 * callers: 0x10044a00
 * callees: 0x10007400, 0x10035ba0, 0x10035c80, 0x1003da30, 0x10048b90, 0x1004e870
 */

char __stdcall sub_10047130(int a1, int *a2)
{
  unsigned __int16 *v2; // ebx
  unsigned __int16 *v3; // eax
  void (__cdecl *v4)(); // edi
  unsigned __int16 *v5; // esi
  Outpop::Utility::Lock *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  int *v15; // esi
  Outpop::Utility::Lock *v16; // ebx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  int v24; // ebp
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Thread_Mutex *v26; // esi
  bool v27; // al
  int v28; // esi
  int v29; // edi
  int v30; // ebx
  Outpop::Utility::Lock *v31; // ebx
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // edi
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  Outpop::Utility::Logger *v39; // eax
  wchar_t *tm; // [esp-18h] [ebp-5Ch]
  wchar_t *v42; // [esp-18h] [ebp-5Ch]
  wchar_t *v43; // [esp-18h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-58h]
  DWORD v45; // [esp-14h] [ebp-58h]
  DWORD v46; // [esp-14h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-54h]
  DWORD v48; // [esp-10h] [ebp-54h]
  DWORD v49; // [esp-10h] [ebp-54h]
  DWORD LastError; // [esp-Ch] [ebp-50h]
  DWORD v51; // [esp-Ch] [ebp-50h]
  DWORD v52; // [esp-Ch] [ebp-50h]
  int v53; // [esp+20h] [ebp-24h] BYREF
  int v54; // [esp+24h] [ebp-20h]
  int v55; // [esp+28h] [ebp-1Ch] BYREF
  unsigned __int16 *v56; // [esp+2Ch] [ebp-18h]
  unsigned int v57; // [esp+30h] [ebp-14h]
  int v58; // [esp+34h] [ebp-10h]
  int v59; // [esp+40h] [ebp-4h]

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  sub_10035BA0(&v55, *a2);
  v2 = v56;
  v3 = (unsigned __int16 *)v57;
  v4 = invalid_parameter_noinfo;
  if ( (unsigned int)v56 > v57 )
  {
    invalid_parameter_noinfo();
    v3 = (unsigned __int16 *)v57;
  }
  while ( 1 )
  {
    v5 = v3;
    if ( v56 > v3 )
      v4();
    if ( v2 == v5 )
      break;
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v6);
      LOBYTE(v59) = 1;
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v11);
      v13 = sub_10007400(
              0xFFFF - v9,
              &log_buffer[v9],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
              220)
          + v9;
      if ( (unsigned int)v2 >= v57 )
        invalid_parameter_noinfo();
      sub_10007400(
        0xFFFF - v13,
        &log_buffer[v13],
        L"channel   %d   recv  act  reliable     id  is   %d",
        *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
        *v2);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      LOBYTE(v59) = 0;
      Outpop::Utility::Lock::unlock(v6);
      v4 = invalid_parameter_noinfo;
    }
    if ( (unsigned int)v2 >= v57 )
      v4();
    sub_10048B90(a1, *v2);
    v3 = (unsigned __int16 *)v57;
    if ( (unsigned int)v2 >= v57 )
    {
      v4();
      v3 = (unsigned __int16 *)v57;
    }
    ++v2;
  }
  v15 = a2;
  if ( (int)Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)*a2) <= 0 )
    goto LABEL_54;
  sub_10035C80(*v15, (char *)&a2);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v16 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v16);
    LOBYTE(v59) = 2;
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::get_log_buffer(v17);
    v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_DEBUG");
    v51 = GetLastError();
    v48 = GetCurrentThreadId();
    v45 = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v42 = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v22 = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_10007400(
            0xFFFF - v19,
            &v18[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v22,
            v42,
            v45,
            v48,
            v51,
            L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
            228);
    v24 = a1;
    sub_10007400(
      0xFFFF - (v23 + v19),
      &v18[v23 + v19],
      L"Reliable_Container::process_act_stream   channel %d  is quickly  resend,id is %d",
      *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
      (unsigned __int16)a2);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v18);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v25);
    }
    LOBYTE(v59) = 0;
    Outpop::Utility::Lock::unlock(v16);
  }
  else
  {
    v24 = a1;
  }
  v26 = (Outpop::Utility::Thread_Mutex *)(v24 + 52);
  v27 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v24 + 52));
  LOBYTE(v59) = 3;
  if ( v27 )
  {
    if ( (_WORD)a2 == *(_WORD *)(v24 + 152) )
    {
      if ( ++*(_WORD *)(v24 + 154) >= 2u )
      {
        sub_1003DA30((_DWORD *)v24, &v53, (_WORD *)(v24 + 152));
        v28 = v53;
        v29 = *(_DWORD *)(v24 + 8);
        if ( !v53 || v53 != v24 + 4 )
          invalid_parameter_noinfo();
        v30 = v54;
        if ( v54 == v29 )
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
          {
            v31 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v31);
            LOBYTE(v59) = 4;
            v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v33 = Outpop::Utility::Logger::get_log_buffer(v32);
            v34 = sub_10007400(0xFFFFu, v33, L"\n%s", L"LOG_ERROR");
            v52 = GetLastError();
            v49 = GetCurrentThreadId();
            v46 = GetCurrentProcessId();
            v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v43 = Outpop::Utility::Logger::make_tm(v35);
            v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v37 = Outpop::Utility::Logger::make_dt(v36);
            v38 = sub_10007400(
                    0xFFFF - v34,
                    &v33[v34],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    v37,
                    v43,
                    v46,
                    v49,
                    v52,
                    L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                    243);
            sub_10007400(
              0xFFFF - (v38 + v34),
              &v33[v38 + v34],
              L"error   Reliable_Container::process_act_stream  want quickly send not font packet,id is %d",
              *(unsigned __int16 *)(v24 + 152));
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v33);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v39);
            }
            LOBYTE(v59) = 3;
            Outpop::Utility::Lock::unlock(v31);
          }
        }
        else
        {
          if ( !v28 )
            invalid_parameter_noinfo();
          if ( v30 == *(_DWORD *)(v28 + 4) )
            invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v24 + 144) + 56))(
            *(_DWORD *)(v24 + 144),
            *(_DWORD *)(v30 + 12));
        }
        v26 = (Outpop::Utility::Thread_Mutex *)(v24 + 52);
        *(_WORD *)(v24 + 152) = 0;
        *(_WORD *)(v24 + 154) = 0;
      }
    }
    else
    {
      *(_WORD *)(v24 + 152) = (_WORD)a2;
      *(_WORD *)(v24 + 154) = 0;
    }
    LOBYTE(v59) = 0;
    Outpop::Utility::Thread_Mutex::release(v26);
LABEL_54:
    v59 = -1;
    if ( v56 )
      operator delete(v56);
    v56 = 0;
    v57 = 0;
    v58 = 0;
    return 1;
  }
  v59 = -1;
  if ( v56 )
    operator delete(v56);
  return 0;
}
