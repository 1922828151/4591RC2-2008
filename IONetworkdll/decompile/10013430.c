/*
 * func-name: ?handle_write_stream@Stream_Channel@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x10013430
 * callers: 0x10014c30
 * callees: 0x10007400, 0x1000acb0, 0x1000b200, 0x10010440, 0x10011620, 0x10015920, 0x10035660, 0x10035680, 0x1003ba70
 */

void __thiscall Outpop::IONetwork::Stream_Channel::handle_write_stream(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  unsigned int v3; // eax
  Outpop::Utility::Lock *v4; // ebx
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // eax
  int v11; // esi
  Outpop::Utility::Lock *v12; // ebx
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // edi
  int v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // eax
  int v27; // eax
  Outpop::Utility::Logger *v28; // eax
  _DWORD *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  int v31; // esi
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *dt; // eax
  int v35; // esi
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // [esp-18h] [ebp-6Ch]
  wchar_t *v38; // [esp-18h] [ebp-6Ch]
  wchar_t *v39; // [esp-18h] [ebp-6Ch]
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  DWORD v41; // [esp-14h] [ebp-68h]
  DWORD v42; // [esp-14h] [ebp-68h]
  DWORD v43; // [esp-14h] [ebp-68h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD v45; // [esp-10h] [ebp-64h]
  DWORD v46; // [esp-10h] [ebp-64h]
  DWORD v47; // [esp-10h] [ebp-64h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD v49; // [esp-Ch] [ebp-60h]
  DWORD v50; // [esp-Ch] [ebp-60h]
  DWORD v51; // [esp-Ch] [ebp-60h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  wchar_t *v53; // [esp-4h] [ebp-58h]
  _DWORD v54[4]; // [esp+0h] [ebp-54h] BYREF
  _BYTE v55[4]; // [esp+10h] [ebp-44h] BYREF
  int v56; // [esp+14h] [ebp-40h]
  int v57; // [esp+18h] [ebp-3Ch]
  int v58; // [esp+1Ch] [ebp-38h]
  Outpop::Utility::Lock *v59; // [esp+3Ch] [ebp-18h]
  Outpop::IONetwork::Stream_Channel *v60; // [esp+40h] [ebp-14h]
  _DWORD *v61; // [esp+44h] [ebp-10h]
  int v62; // [esp+50h] [ebp-4h]
  int Error; // [esp+5Ch] [ebp+8h]
  Outpop::Utility::Lock *v64; // [esp+5Ch] [ebp+8h]
  _DWORD *v65; // [esp+5Ch] [ebp+8h]

  v61 = v54;
  v60 = this;
  v62 = 0;
  if ( *((_DWORD *)a2 + 11) || !*((_DWORD *)a2 + 9) )
  {
    Outpop::IONetwork::Stream_Channel::interiorclose(this);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return;
    }
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v59 = v4;
    Outpop::Utility::Lock::lock(v4);
    LOBYTE(v62) = 1;
    v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v30);
    v31 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v32);
    v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v33);
    v35 = sub_10007400(
            0xFFFF - v31,
            &log_buffer[v31],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            670)
        + v31;
    sub_10007400(
      0xFFFF - v35,
      &log_buffer[v35],
      L"Stream_Channel::handle_write_stream  result->error():%d",
      *((_DWORD *)a2 + 11));
    goto LABEL_35;
  }
  v3 = *((_DWORD *)a2 + 10);
  if ( !v3 )
  {
    Outpop::IONetwork::Stream_Channel::interiorclose(this);
    Error = WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return;
    }
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v59 = v4;
    Outpop::Utility::Lock::lock(v4);
    LOBYTE(v62) = 2;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    v49 = GetLastError();
    v45 = GetCurrentThreadId();
    v41 = GetCurrentProcessId();
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v37 = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v10 = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10007400(
            0xFFFF - v7,
            &log_buffer[v7],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v10,
            v37,
            v41,
            v45,
            v49,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            677)
        + v7;
    sub_10007400(
      0xFFFF - v11,
      &log_buffer[v11],
      L"Stream_Channel::handle_write_stream  result->bytes_to_write() == 0:%d",
      Error);
LABEL_35:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v36);
    }
    LOBYTE(v62) = 0;
    Outpop::Utility::Lock::unlock(v4);
    return;
  }
  if ( *((_DWORD *)a2 + 6) >= v3 )
  {
    Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Channel *)((char *)this + 132));
    v56 = 0;
    v57 = 0;
    v58 = 0;
    LOBYTE(v62) = 4;
    if ( sub_1000B200((int)this + 212) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v64 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v64);
        LOBYTE(v62) = 5;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::get_log_buffer(v21);
        v23 = sub_10007400(0xFFFFu, v22, L"\n%s", L"LOG_DEBUG");
        v51 = GetLastError();
        v47 = GetCurrentThreadId();
        v43 = GetCurrentProcessId();
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v39 = Outpop::Utility::Logger::make_tm(v24);
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v26 = Outpop::Utility::Logger::make_dt(v25);
        v27 = sub_10007400(
                0xFFFF - v23,
                &v22[v23],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v26,
                v39,
                v43,
                v47,
                v51,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                694);
        sub_10007400(
          0xFFFF - (v27 + v23),
          &v22[v27 + v23],
          L"Stream_Channel::handle_write_stream  catch_send  id  is  %d ",
          *((_DWORD *)this + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v22);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v53 = v22;
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v28);
        }
        LOBYTE(v62) = 4;
        Outpop::Utility::Lock::unlock(v64);
      }
      v65 = (_DWORD *)sub_10035680();
      v59 = (Outpop::Utility::Lock *)sub_10035660(v53, v54[0]);
      v29 = (_DWORD *)sub_10035680();
      sub_10015920(v55, *v29, v29[1], *(_DWORD *)v59, *((_DWORD *)v59 + 1), *v65, v65[1]);
      sub_1000ACB0((int)this + 212);
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Channel *)((char *)this + 132));
      Outpop::IONetwork::Stream_Channel::catch_send((int)this, (int)v55);
    }
    else
    {
      *((_BYTE *)this + 209) = 1;
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Channel *)((char *)this + 132));
    }
    LOBYTE(v62) = 0;
    sub_1003BA70(v53, v54[0], v54[1], v54[2]);
  }
  else
  {
    Outpop::IONetwork::Stream_Channel::interiorclose(this);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v12);
      LOBYTE(v62) = 3;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = sub_10007400(0xFFFFu, v14, L"\n%s", L"LOG_ERROR");
      v50 = GetLastError();
      v46 = GetCurrentThreadId();
      v42 = GetCurrentProcessId();
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v38 = Outpop::Utility::Logger::make_tm(v16);
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::make_dt(v17);
      v19 = sub_10007400(
              0xFFFF - v15,
              &v14[v15],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v18,
              v38,
              v42,
              v46,
              v50,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              685);
      sub_10007400(
        0xFFFF - (v19 + v15),
        &v14[v19 + v15],
        L" Stream_Channel::handle_write_stream  bytes_to_transmit  < bytes_to_write");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v14);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v20);
      }
      LOBYTE(v62) = 0;
      Outpop::Utility::Lock::unlock(v12);
    }
  }
  v62 = -1;
}
