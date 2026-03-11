/*
 * func-name: sub_1001C940
 * func-address: 0x1001c940
 * callers: 0x1001b850
 * callees: 0x10002e10, 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x10005b00, 0x10007400, 0x1000c9e0, 0x1000d770, 0x10018f50, 0x10022840, 0x10035dd0, 0x1004e861, 0x1004f112
 */

char *__fastcall sub_1001C940(Outpop::Utility::Ref_Object **a1, _DWORD *a2)
{
  unsigned int v4; // ecx
  Outpop::Utility::Logger *v5; // eax
  int v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Ref_Object *v12; // ecx
  Outpop::Utility::Ref_Object *v13; // ecx
  bool v14; // zf
  unsigned int v16; // eax
  int (__thiscall **v17)(Outpop::Utility::Ref_Object **); // eax
  Outpop::Utility::Ref_Object *v18; // ecx
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // ebx
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // eax
  Outpop::Utility::Logger *v26; // eax
  unsigned int size; // eax
  wchar_t *v28; // edx
  int (__thiscall **v29)(Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object *, DWORD, DWORD); // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // ebx
  int v32; // esi
  Outpop::Utility::Logger *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // eax
  int v36; // eax
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Ref_Object *v38; // esi
  Outpop::Utility::Ref_Object *v39; // ebx
  int readable; // eax
  Outpop::Utility::Stream_Base *v41; // esi
  const char *ptr; // eax
  SOCKET v43; // eax
  Outpop::Utility::Ref_Object *v44; // edi
  void (__thiscall **v45)(Outpop::Utility::Ref_Object *, SOCKET *, wchar_t *, Outpop::Utility::Ref_Object *, DWORD); // eax
  Outpop::Utility::Logger *v46; // eax
  int v47; // ebx
  Outpop::Utility::Logger *v48; // eax
  Outpop::Utility::Logger *v49; // eax
  wchar_t *dt; // eax
  int v51; // eax
  Outpop::Utility::Logger *v52; // eax
  Outpop::Utility::Ref_Object *v53; // ecx
  int v54; // [esp-30h] [ebp-98h] BYREF
  wchar_t *v55; // [esp-2Ch] [ebp-94h]
  DWORD v56; // [esp-28h] [ebp-90h]
  void **v57; // [esp-24h] [ebp-8Ch] BYREF
  DWORD v58; // [esp-20h] [ebp-88h]
  DWORD v59; // [esp-1Ch] [ebp-84h]
  wchar_t *tm; // [esp-18h] [ebp-80h]
  Outpop::Utility::Ref_Object *CurrentProcessId; // [esp-14h] [ebp-7Ch] BYREF
  DWORD CurrentThreadId; // [esp-10h] [ebp-78h] BYREF
  DWORD LastError; // [esp-Ch] [ebp-74h] BYREF
  Outpop::Utility::Ref_Object *v64; // [esp-8h] [ebp-70h] BYREF
  wchar_t *v65; // [esp-4h] [ebp-6Ch]
  int v66; // [esp+4h] [ebp-64h] BYREF
  _BYTE pExceptionObject[40]; // [esp+14h] [ebp-54h] BYREF
  _BYTE v68[28]; // [esp+3Ch] [ebp-2Ch] BYREF
  int *v69; // [esp+58h] [ebp-10h]
  int v70; // [esp+64h] [ebp-4h]
  Outpop::Utility::Ref_Object **v71; // [esp+70h] [ebp+8h]
  Outpop::Utility::Lock *v72; // [esp+74h] [ebp+Ch] BYREF
  Outpop::Utility::Ref_Object *Error; // [esp+78h] [ebp+10h] BYREF
  DWORD *p_CurrentThreadId; // [esp+7Ch] [ebp+14h] BYREF
  Outpop::Utility::Ref_Object **p_CurrentProcessId; // [esp+80h] [ebp+18h]
  wchar_t *log_buffer; // [esp+84h] [ebp+1Ch] BYREF
  Outpop::Utility::Ref_Object *v77; // [esp+88h] [ebp+20h] BYREF
  SOCKET s[2]; // [esp+8Ch] [ebp+24h] BYREF
  char v79[28]; // [esp+94h] [ebp+2Ch] BYREF
  _BYTE v80[40]; // [esp+B0h] [ebp+48h] BYREF

  v69 = &v66;
  v71 = a1;
  Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)s);
  v70 = 1;
  sub_10022840(a2, &v77);
  LOBYTE(v70) = 2;
  Outpop::Utility::Stream_Base::move_write_pos(v77, a2[6]);
  if ( a2[11] || !a2[10] )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      p_CurrentProcessId = (Outpop::Utility::Ref_Object **)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)p_CurrentProcessId);
      LOBYTE(v70) = 3;
      v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v46);
      v47 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = (Outpop::Utility::Ref_Object *)GetCurrentProcessId();
      v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v48);
      v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v49);
      v51 = sub_10007400(
              0xFFFF - v47,
              &log_buffer[v47],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
              54);
      sub_10007400(
        0xFFFF - (v51 + v47),
        &log_buffer[v51 + v47],
        L"handle_read_stream  Error is %d,sucesss is %d",
        a2[11],
        a2[10]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v65 = log_buffer;
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v52);
      }
      LOBYTE(v70) = 2;
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)p_CurrentProcessId);
    }
    (*((void (__thiscall **)(Outpop::Utility::Ref_Object **, wchar_t *))*a1 + 3))(a1, v65);
    v64 = v53;
    p_CurrentProcessId = &v64;
    sub_10005AE0(a1 + 38, &v64);
    LOBYTE(v70) = 4;
    p_CurrentThreadId = (DWORD *)&v57;
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)&v57,
      (const struct Outpop::IONetwork::INET_Addr *)(a1 + 27));
    LOBYTE(v70) = 5;
    goto LABEL_13;
  }
  v4 = a2[6];
  if ( !v4 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      Error = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(Error);
      LOBYTE(v70) = 6;
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = (Outpop::Utility::Ref_Object *)GetCurrentProcessId();
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v9 = Outpop::Utility::Logger::make_dt(v8);
      v10 = sub_10007400(
              0xFFFF - v6,
              &log_buffer[v6],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v9,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
              62);
      sub_10007400(0xFFFF - (v10 + v6), &log_buffer[v10 + v6], L"handle_read_stream  bytes_to_transmit is %d", a2[6]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v65 = log_buffer;
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      LOBYTE(v70) = 2;
      Outpop::Utility::Lock::unlock(Error);
    }
    (*((void (__thiscall **)(Outpop::Utility::Ref_Object **, wchar_t *))*a1 + 3))(a1, v65);
    v64 = v12;
    p_CurrentProcessId = &v64;
    sub_10005AE0(a1 + 38, &v64);
    LOBYTE(v70) = 7;
    p_CurrentThreadId = (DWORD *)&v57;
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)&v57,
      (const struct Outpop::IONetwork::INET_Addr *)(a1 + 27));
    LOBYTE(v70) = 8;
LABEL_13:
    LOBYTE(v70) = 2;
    Outpop::IONetwork::Stream_Acceptor::bluider_channel_falied(
      (char *)a1[35],
      0,
      v57,
      v58,
      v59,
      (int)tm,
      (struct in_addr)CurrentProcessId,
      CurrentThreadId,
      LastError,
      v64);
LABEL_14:
    LOBYTE(v70) = 1;
    v13 = v77;
    v14 = v77 == 0;
    goto LABEL_15;
  }
  v16 = a2[9];
  if ( v4 >= v16 )
  {
    if ( a2[8] )
    {
      v72 = 0;
      log_buffer = (wchar_t *)(a1 + 37);
      p_CurrentProcessId = a1 + 36;
      sub_10035DD0(&v72);
      sub_10035DD0(a1 + 36);
      sub_10035DD0(a1 + 37);
      if ( v72 != (Outpop::Utility::Lock *)1001 )
      {
        Outpop::IONetwork::TSocket::close((SOCKET *)a1 + 34);
        LOBYTE(v70) = 1;
        v13 = v77;
        v14 = v77 == 0;
LABEL_15:
        if ( !v14 )
          Outpop::Utility::Ref_Object::release(v13);
        goto LABEL_17;
      }
      v38 = 0;
      Error = 0;
      LOBYTE(v70) = 16;
      if ( Outpop::Utility::Stream_Base::get_readable(v77) )
      {
        v39 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        p_CurrentThreadId = (DWORD *)v39;
        LOBYTE(v70) = 17;
        if ( v39 )
        {
          readable = Outpop::Utility::Stream_Base::get_readable(v77);
          Outpop::Utility::Binary_Stream::Binary_Stream(v39, readable + 2);
          *(_DWORD *)v39 = &Outpop::Utility::Binary_Stream::`vftable';
        }
        else
        {
          v39 = 0;
        }
        LOBYTE(v70) = 16;
        p_CurrentThreadId = (DWORD *)v39;
        if ( v39 )
          Outpop::Utility::Ref_Object::addref(v39);
        LOBYTE(v70) = 18;
        sub_10005B00(&Error, (Outpop::Utility::Ref_Object **)&p_CurrentThreadId);
        v41 = v77;
        v64 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Stream_Base::get_readable(v77);
        ptr = Outpop::Utility::Stream_Base::get_read_ptr(v41);
        v38 = Error;
        Outpop::Utility::Stream_Base::write(Error, ptr, v64);
        LOBYTE(v70) = 16;
        if ( v39 )
          Outpop::Utility::Ref_Object::release(v39);
      }
      Outpop::IONetwork::INET_Addr::operator=(v80, (int)(a1 + 27));
      Outpop::IONetwork::INET_Addr::operator=(v79, (int)(a1 + 20));
      v43 = (SOCKET)a1[34];
      a1[34] = (Outpop::Utility::Ref_Object *)-1;
      s[0] = v43;
      v80[36] = 0;
      p_CurrentThreadId = &CurrentThreadId;
      CurrentThreadId = (DWORD)v38;
      if ( v38 )
        Outpop::Utility::Ref_Object::addref(v38);
      LOBYTE(v70) = 19;
      v44 = a1[35];
      v45 = (void (__thiscall **)(Outpop::Utility::Ref_Object *, SOCKET *, wchar_t *, Outpop::Utility::Ref_Object *, DWORD))(*(_DWORD *)v44 + 20);
      CurrentProcessId = *(Outpop::Utility::Ref_Object **)log_buffer;
      tm = (wchar_t *)*p_CurrentProcessId;
      LOBYTE(v70) = 16;
      (*v45)(v44, s, tm, CurrentProcessId, CurrentThreadId);
      LOBYTE(v70) = 2;
      if ( v38 )
        Outpop::Utility::Ref_Object::release(v38);
    }
    else
    {
      log_buffer = 0;
      Outpop::Utility::Stream_Base::move_read_pos(v77, 4);
      sub_10035DD0(&log_buffer);
      if ( (unsigned int)log_buffer > 0x2800 )
      {
        std::string::string(v68, "Error  datalen  Simple_Wait_Stream_Channel");
        LOBYTE(v70) = 13;
        sub_1000C9E0((std::exception *)pExceptionObject, (int)v68);
        CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVlogic_error_std__);
      }
      Outpop::Utility::Stream_Base::reset_all(v77);
      size = Outpop::Utility::Stream_Base::get_size(v77);
      v28 = log_buffer;
      if ( size < (unsigned int)log_buffer )
      {
        (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, wchar_t *))(*(_DWORD *)v77 + 16))(v77, log_buffer + 2);
        v28 = log_buffer;
      }
      LastError = 1;
      CurrentThreadId = (DWORD)v28;
      p_CurrentProcessId = &CurrentProcessId;
      CurrentProcessId = v77;
      if ( v77 )
        Outpop::Utility::Ref_Object::addref(v77);
      LOBYTE(v70) = 14;
      v29 = (int (__thiscall **)(Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object *, DWORD, DWORD))((char *)*a1 + 4);
      LOBYTE(v70) = 2;
      if ( (*v29)(a1, CurrentProcessId, CurrentThreadId, LastError) == -1 )
      {
        Error = (Outpop::Utility::Ref_Object *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v72 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v72);
          LOBYTE(v70) = 15;
          v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v31 = Outpop::Utility::Logger::get_log_buffer(v30);
          v32 = sub_10007400(0xFFFFu, v31, L"\n%s", L"LOG_ERROR");
          v58 = GetLastError();
          v57 = (void **)GetCurrentThreadId();
          v56 = GetCurrentProcessId();
          v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v55 = Outpop::Utility::Logger::make_tm(v33);
          v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v35 = Outpop::Utility::Logger::make_dt(v34);
          v36 = sub_10007400(
                  0xFFFF - v32,
                  &v31[v32],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v35,
                  v55,
                  v56,
                  v57,
                  v58,
                  L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
                  104);
          sub_10007400(
            0xFFFF - (v36 + v32),
            &v31[v36 + v32],
            L"Simple_Wait_Stream_Channel first_process error: %d",
            Error);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v31);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            tm = v31;
            v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v37);
          }
          LOBYTE(v70) = 2;
          Outpop::Utility::Lock::unlock(v72);
        }
        (*((void (__thiscall **)(Outpop::Utility::Ref_Object **, wchar_t *))*a1 + 3))(a1, tm);
        goto LABEL_14;
      }
    }
  }
  else
  {
    v65 = 0;
    v64 = (Outpop::Utility::Ref_Object *)(v16 - v4);
    p_CurrentProcessId = (Outpop::Utility::Ref_Object **)&LastError;
    LastError = (DWORD)v77;
    if ( v77 )
      Outpop::Utility::Ref_Object::addref(v77);
    LOBYTE(v70) = 9;
    v17 = (int (__thiscall **)(Outpop::Utility::Ref_Object **))((char *)*a1 + 4);
    LOBYTE(v70) = 2;
    if ( (*v17)(a1) == -1 )
    {
      Error = (Outpop::Utility::Ref_Object *)WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v72 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v72);
        LOBYTE(v70) = 10;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v20 = Outpop::Utility::Logger::get_log_buffer(v19);
        v21 = sub_10007400(0xFFFFu, v20, L"\n%s", L"LOG_ERROR");
        tm = (wchar_t *)GetLastError();
        v59 = GetCurrentThreadId();
        v58 = GetCurrentProcessId();
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v57 = (void **)Outpop::Utility::Logger::make_tm(v22);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v24 = Outpop::Utility::Logger::make_dt(v23);
        v25 = sub_10007400(
                0xFFFF - v21,
                &v20[v21],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v24,
                v57,
                v58,
                v59,
                tm,
                L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
                74,
                LastError,
                v64,
                v65);
        sub_10007400(0xFFFF - (v25 + v21), &v20[v25 + v21], L"handle_read_stream  asynch_recv_stream is %d", Error);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v20);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          CurrentThreadId = (DWORD)v20;
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v26);
        }
        LOBYTE(v70) = 2;
        Outpop::Utility::Lock::unlock(v72);
      }
      CurrentProcessId = v18;
      p_CurrentProcessId = &CurrentProcessId;
      sub_10005AE0(a1 + 38, &CurrentProcessId);
      LOBYTE(v70) = 11;
      p_CurrentThreadId = (DWORD *)&v54;
      Outpop::IONetwork::INET_Addr::INET_Addr(
        (Outpop::IONetwork::INET_Addr *)&v54,
        (const struct Outpop::IONetwork::INET_Addr *)(a1 + 27));
      LOBYTE(v70) = 12;
      goto LABEL_13;
    }
  }
  LOBYTE(v70) = 1;
  if ( v77 )
    Outpop::Utility::Ref_Object::release(v77);
  v70 = 0;
LABEL_17:
  v70 = -1;
  return Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)s);
}
