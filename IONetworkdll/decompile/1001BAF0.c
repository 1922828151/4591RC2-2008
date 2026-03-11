/*
 * func-name: sub_1001BAF0
 * func-address: 0x1001baf0
 * callers: 0x1001b580
 * callees: 0x100037d0, 0x10007400, 0x10022840, 0x10035dd0
 */

// bad sp value at call has been detected, the output may be wrong!
void __thiscall sub_1001BAF0(_DWORD *this, struct in_addr *a2)
{
  struct in_addr *v3; // edi
  Outpop::Utility::Logger *v4; // eax
  int v5; // edi
  DWORD (__stdcall *v6)(); // ebx
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // edi
  u_short v11; // ax
  char *host_addr; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  int v15; // edi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // ebx
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  int v23; // edi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // eax
  int v27; // edi
  u_short v28; // ax
  char *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  int (__thiscall **v31)(struct in_addr *, DWORD, DWORD, Outpop::Utility::Lock *, DWORD); // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // edi
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  Outpop::Utility::Logger *v39; // eax
  Outpop::Utility::Lock *v40; // ecx
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // edi
  int v43; // esi
  Outpop::Utility::Logger *v44; // eax
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // eax
  int v47; // eax
  Outpop::Utility::Logger *v48; // eax
  int space; // eax
  wchar_t *v50; // edx
  int (__thiscall **v51)(struct in_addr *, wchar_t *, wchar_t *, DWORD); // eax
  Outpop::Utility::Logger *v52; // eax
  Outpop::Utility::Logger *v53; // eax
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v55; // eax
  Outpop::Utility::Logger *v56; // eax
  wchar_t *v57; // edi
  int v58; // esi
  Outpop::Utility::Logger *v59; // eax
  Outpop::Utility::Logger *v60; // eax
  wchar_t *v61; // eax
  int v62; // esi
  char *v63; // eax
  Outpop::Utility::Logger *v64; // eax
  Outpop::Utility::Logger *v65; // eax
  int v66; // edi
  Outpop::Utility::Logger *v67; // eax
  Outpop::Utility::Logger *v68; // eax
  wchar_t *v69; // eax
  wchar_t *v70; // ebx
  int v71; // eax
  Outpop::Utility::Logger *v72; // eax
  Outpop::Utility::Lock *v73; // [esp-40h] [ebp-7Ch]
  wchar_t *v74; // [esp-38h] [ebp-74h]
  DWORD v75; // [esp-34h] [ebp-70h]
  wchar_t *v76; // [esp-30h] [ebp-6Ch]
  DWORD v77; // [esp-30h] [ebp-6Ch]
  DWORD v78; // [esp-2Ch] [ebp-68h]
  DWORD v79; // [esp-2Ch] [ebp-68h]
  DWORD v80; // [esp-28h] [ebp-64h]
  DWORD v81; // [esp-24h] [ebp-60h]
  wchar_t *v82; // [esp-20h] [ebp-5Ch] BYREF
  wchar_t *v83; // [esp-1Ch] [ebp-58h]
  DWORD tm; // [esp-18h] [ebp-54h] BYREF
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  Outpop::Utility::Lock *CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  Outpop::Utility::Lock *v88; // [esp-8h] [ebp-44h]
  Outpop::Utility::Lock *v89; // [esp-4h] [ebp-40h]
  int v90; // [esp+0h] [ebp-3Ch] BYREF
  Outpop::Utility::Lock *p_tm; // [esp+14h] [ebp-28h]
  Outpop::Utility::Lock *v92; // [esp+18h] [ebp-24h]
  Outpop::Utility::Lock *v93; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Lock *v94; // [esp+20h] [ebp-1Ch]
  wchar_t *log_buffer; // [esp+24h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v96[2]; // [esp+28h] [ebp-14h] BYREF
  int v97; // [esp+38h] [ebp-4h]

  v96[1] = (Outpop::Utility::Ref_Object *)&v90;
  v3 = a2;
  v97 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v92 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v92);
    LOBYTE(v97) = 1;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    v6 = GetLastError;
    LastError = GetLastError();
    CurrentThreadId = (Outpop::Utility::Lock *)GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = (DWORD)Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10007400(
            0xFFFF - v5,
            &log_buffer[v5],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            151)
        + v5;
    v94 = (Outpop::Utility::Lock *)this[9];
    v93 = (Outpop::Utility::Lock *)this[6];
    v11 = ntohs(a2[13].S_un.S_un_w.s_w2);
    v89 = v94;
    v88 = v93;
    LastError = v11;
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(a2 + 10);
    sub_10007400(
      0xFFFF - v10,
      &log_buffer[v10],
      L"Wait_Stream_Channel handle_read_stream ip is %S, port is  %d,len is  %d,result->bytes_to_read() is  %d",
      host_addr,
      LastError,
      v88,
      v89);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v89 = (Outpop::Utility::Lock *)log_buffer;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    LOBYTE(v97) = 0;
    Outpop::Utility::Lock::unlock(v92);
    v3 = a2;
  }
  else
  {
    v6 = GetLastError;
  }
  sub_10022840(this, v96);
  LOBYTE(v97) = 2;
  if ( this[11] || !this[10] )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      goto LABEL_83;
    }
    p_tm = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(p_tm);
    LOBYTE(v97) = 3;
    v65 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v65);
    v66 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    CurrentThreadId = (Outpop::Utility::Lock *)v6();
    CurrentProcessId = GetCurrentThreadId();
    tm = GetCurrentProcessId();
    v67 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v83 = Outpop::Utility::Logger::make_tm(v67);
    v68 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v69 = Outpop::Utility::Logger::make_dt(v68);
    v70 = log_buffer;
    v71 = sub_10007400(
            0xFFFF - v66,
            &log_buffer[v66],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v69,
            v83,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            158);
    sub_10007400(
      0xFFFF - (v71 + v66),
      &v70[v71 + v66],
      L"handle_read_stream  Error is %d,sucesss is %d",
      this[11],
      this[10]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v70);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v88 = (Outpop::Utility::Lock *)log_buffer;
      v72 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v72);
    }
    LOBYTE(v97) = 2;
    v40 = p_tm;
    goto LABEL_82;
  }
  if ( !this[6] )
  {
    v92 = (Outpop::Utility::Lock *)v6();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v93 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v93);
      LOBYTE(v97) = 4;
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v14);
      v15 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      CurrentThreadId = (Outpop::Utility::Lock *)v6();
      CurrentProcessId = GetCurrentThreadId();
      tm = GetCurrentProcessId();
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v83 = Outpop::Utility::Logger::make_tm(v16);
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::make_dt(v17);
      v19 = log_buffer;
      v20 = sub_10007400(
              0xFFFF - v15,
              &log_buffer[v15],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v18,
              v83,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
              167);
      sub_10007400(
        0xFFFF - (v20 + v15),
        &v19[v20 + v15],
        L"handle_read_stream  bytes_to_transmit is %d,error is %d",
        this[6],
        v92);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v19);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v88 = (Outpop::Utility::Lock *)log_buffer;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v21);
      }
      LOBYTE(v97) = 2;
      Outpop::Utility::Lock::unlock(v93);
      v3 = a2;
    }
    (*(void (__thiscall **)(struct in_addr *, Outpop::Utility::Lock *, Outpop::Utility::Lock *))(v3->S_un.S_addr + 12))(
      v3,
      v88,
      v89);
    goto LABEL_84;
  }
  Outpop::Utility::Stream_Base::move_write_pos(v96[0], this[6]);
  if ( this[6] >= this[9] )
  {
    if ( this[8] )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        p_tm = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(p_tm);
        LOBYTE(v97) = 11;
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v57 = Outpop::Utility::Logger::get_log_buffer(v56);
        v58 = sub_10007400(0xFFFFu, v57, L"\n%s", L"LOG_DEBUG");
        CurrentProcessId = v6();
        tm = GetCurrentThreadId();
        v83 = (wchar_t *)GetCurrentProcessId();
        v59 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v82 = Outpop::Utility::Logger::make_tm(v59);
        v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v61 = Outpop::Utility::Logger::make_dt(v60);
        v62 = sub_10007400(
                0xFFFF - v58,
                &v57[v58],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v61,
                v82,
                v83,
                tm,
                CurrentProcessId,
                L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
                213)
            + v58;
        LastError = ntohs(a2[13].S_un.S_un_w.s_w2);
        v63 = Outpop::IONetwork::INET_Addr::get_host_addr(a2 + 10);
        sub_10007400(
          0xFFFF - v62,
          &v57[v62],
          L"Wait_Stream_Channel handle_read_stream  handle_read_stream   ip is %S, port is  %d",
          v63,
          LastError);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v57);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          LastError = (DWORD)v57;
          v64 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v64);
        }
        LOBYTE(v97) = 2;
        Outpop::Utility::Lock::unlock(p_tm);
        v3 = a2;
      }
      (*(void (__thiscall **)(ULONG, Outpop::Utility::Ref_Object **, DWORD))(*(_DWORD *)v3[21].S_un.S_addr + 4))(
        v3[21].S_un.S_addr,
        v96,
        LastError);
    }
    else
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        p_tm = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(p_tm);
        LOBYTE(v97) = 8;
        v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v42 = Outpop::Utility::Logger::get_log_buffer(v41);
        v43 = sub_10007400(0xFFFFu, v42, L"\n%s", L"LOG_DEBUG");
        CurrentProcessId = v6();
        tm = GetCurrentThreadId();
        v83 = (wchar_t *)GetCurrentProcessId();
        v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v82 = Outpop::Utility::Logger::make_tm(v44);
        v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v46 = Outpop::Utility::Logger::make_dt(v45);
        v47 = sub_10007400(
                0xFFFF - v43,
                &v42[v43],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v46,
                v82,
                v83,
                tm,
                CurrentProcessId,
                L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
                194);
        sub_10007400(
          0xFFFF - (v47 + v43),
          &v42[v47 + v43],
          L"Wait_Stream_Channel handle_read_stream  asynch_recv_stream Error datetype == Head");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v42);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          LastError = (DWORD)v42;
          v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v48);
        }
        LOBYTE(v97) = 2;
        Outpop::Utility::Lock::unlock(p_tm);
        v3 = a2;
      }
      Outpop::Utility::Stream_Base::move_read_pos(v96[0], 4);
      sub_10035DD0(&log_buffer);
      space = Outpop::Utility::Stream_Base::get_space(v96[0]);
      v50 = log_buffer;
      if ( space < (int)log_buffer )
      {
        (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, wchar_t *))(*(_DWORD *)v96[0] + 16))(
          v96[0],
          log_buffer + 5);
        v50 = log_buffer;
      }
      tm = 1;
      v83 = v50;
      p_tm = (Outpop::Utility::Lock *)&v82;
      v82 = (wchar_t *)v96[0];
      if ( v96[0] )
        Outpop::Utility::Ref_Object::addref(v96[0]);
      LOBYTE(v97) = 9;
      v51 = (int (__thiscall **)(struct in_addr *, wchar_t *, wchar_t *, DWORD))(v3->S_un.S_addr + 4);
      LOBYTE(v97) = 2;
      if ( (*v51)(v3, v82, v83, tm) == -1 )
      {
        p_tm = (Outpop::Utility::Lock *)v6();
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_83;
        }
        v92 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v92);
        LOBYTE(v97) = 10;
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v33 = Outpop::Utility::Logger::get_log_buffer(v52);
        v34 = sub_10007400(0xFFFFu, v33, L"\n%s", L"LOG_ERROR");
        v79 = v6();
        v77 = GetCurrentThreadId();
        v75 = GetCurrentProcessId();
        v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v74 = Outpop::Utility::Logger::make_tm(v53);
        v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v55 = Outpop::Utility::Logger::make_dt(v54);
        v38 = sub_10007400(
                0xFFFF - v34,
                &v33[v34],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v55,
                v74,
                v75,
                v77,
                v79,
                L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
                205);
LABEL_38:
        sub_10007400(
          0xFFFF - (v38 + v34),
          &v33[v38 + v34],
          L"Wait_Stream_Channel handle_read_stream  asynch_recv_stream Error is %d",
          v73);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v33);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v83 = v33;
          v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v39);
        }
        LOBYTE(v97) = 2;
        v40 = v92;
LABEL_82:
        Outpop::Utility::Lock::unlock(v40);
        v3 = a2;
LABEL_83:
        (*(void (__thiscall **)(struct in_addr *, wchar_t *, DWORD, DWORD, Outpop::Utility::Lock *, DWORD))(v3->S_un.S_addr + 12))(
          v3,
          v83,
          tm,
          CurrentProcessId,
          CurrentThreadId,
          LastError);
LABEL_84:
        LOBYTE(v97) = 0;
        if ( v96[0] )
          Outpop::Utility::Ref_Object::release(v96[0]);
        return;
      }
    }
  }
  else
  {
    p_tm = (Outpop::Utility::Lock *)this[8];
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v94 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v94);
      LOBYTE(v97) = 5;
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v22);
      v23 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      CurrentProcessId = v6();
      tm = GetCurrentThreadId();
      v83 = (wchar_t *)GetCurrentProcessId();
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v82 = Outpop::Utility::Logger::make_tm(v24);
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v26 = Outpop::Utility::Logger::make_dt(v25);
      v27 = sub_10007400(
              0xFFFF - v23,
              &log_buffer[v23],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v26,
              v82,
              v83,
              tm,
              CurrentProcessId,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
              179)
          + v23;
      v92 = (Outpop::Utility::Lock *)this[9];
      v93 = (Outpop::Utility::Lock *)this[6];
      v28 = ntohs(a2[13].S_un.S_un_w.s_w2);
      LastError = (DWORD)v92;
      CurrentThreadId = v93;
      CurrentProcessId = v28;
      v29 = Outpop::IONetwork::INET_Addr::get_host_addr(a2 + 10);
      sub_10007400(
        0xFFFF - v27,
        &log_buffer[v27],
        L"Wait_Stream_Channel handle_read_stream ip is %S, port is  %d,bytes_to_transmit is  %d,bytes_to_read is %d",
        v29,
        CurrentProcessId,
        CurrentThreadId,
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        LastError = (DWORD)log_buffer;
        v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v30);
      }
      LOBYTE(v97) = 2;
      Outpop::Utility::Lock::unlock(v94);
      v3 = a2;
    }
    CurrentThreadId = p_tm;
    CurrentProcessId = this[9] - this[6];
    p_tm = (Outpop::Utility::Lock *)&tm;
    tm = (DWORD)v96[0];
    if ( v96[0] )
      Outpop::Utility::Ref_Object::addref(v96[0]);
    LOBYTE(v97) = 6;
    v31 = (int (__thiscall **)(struct in_addr *, DWORD, DWORD, Outpop::Utility::Lock *, DWORD))(v3->S_un.S_addr + 4);
    LOBYTE(v97) = 2;
    if ( (*v31)(v3, tm, CurrentProcessId, CurrentThreadId, LastError) == -1 )
    {
      p_tm = (Outpop::Utility::Lock *)v6();
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
        || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
      {
        goto LABEL_83;
      }
      v92 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v92);
      LOBYTE(v97) = 7;
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::get_log_buffer(v32);
      v34 = sub_10007400(0xFFFFu, v33, L"\n%s", L"LOG_ERROR");
      v81 = v6();
      v80 = GetCurrentThreadId();
      v78 = GetCurrentProcessId();
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v76 = Outpop::Utility::Logger::make_tm(v35);
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_dt(v36);
      v38 = sub_10007400(
              0xFFFF - v34,
              &v33[v34],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v37,
              v76,
              v78,
              v80,
              v81,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
              184);
      v73 = p_tm;
      goto LABEL_38;
    }
  }
  LOBYTE(v97) = 0;
  if ( v96[0] )
    Outpop::Utility::Ref_Object::release(v96[0]);
  v97 = -1;
}
