/*
 * func-name: sub_10047730
 * func-address: 0x10047730
 * callers: 0x100455d0
 * callees: 0x10007400, 0x1000ac30
 */

char __stdcall sub_10047730(int a1, _DWORD *a2)
{
  int *v2; // ebx
  bool v3; // al
  int *v4; // ebp
  int *v5; // edi
  int v6; // esi
  Outpop::Utility::Ref_Object *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // esi
  int v10; // eax
  int v11; // edi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // edi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Ref_Object *v17; // edi
  _DWORD *v18; // eax
  bool v19; // bl
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  Outpop::Utility::Lock *v23; // edi
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // ebx
  int v26; // eax
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  int v31; // esi
  Outpop::Utility::Logger *v32; // eax
  wchar_t *tm; // [esp-18h] [ebp-64h]
  wchar_t *v35; // [esp-18h] [ebp-64h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-60h]
  DWORD v37; // [esp-14h] [ebp-60h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-5Ch]
  DWORD v39; // [esp-10h] [ebp-5Ch]
  DWORD LastError; // [esp-Ch] [ebp-58h]
  DWORD v41; // [esp-Ch] [ebp-58h]
  int v42; // [esp-4h] [ebp-50h] BYREF
  char v43; // [esp+17h] [ebp-35h]
  int *v44; // [esp+18h] [ebp-34h]
  Outpop::Utility::Ref_Object *v45; // [esp+1Ch] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object *v46[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v47[2]; // [esp+28h] [ebp-24h] BYREF
  Outpop::Utility::Thread_Mutex *v48; // [esp+30h] [ebp-1Ch]
  int v49; // [esp+34h] [ebp-18h]
  _DWORD v50[2]; // [esp+38h] [ebp-14h] BYREF
  int v51; // [esp+48h] [ebp-4h]

  v2 = (int *)a1;
  v48 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  v49 = v3 - 1;
  v51 = 0;
  if ( !v3 )
    return 0;
  v43 = 1;
  Outpop::Utility::Time_Value::gettimeofday(v47);
  LOBYTE(v51) = 1;
  v4 = **(int ***)(a1 + 8);
  v5 = (int *)(a1 + 4);
  v44 = (int *)(a1 + 4);
  while ( v4 != (int *)v5[1] )
  {
    Outpop::Utility::operator-(v50, v47, v4[3] + 8);
    LOBYTE(v51) = 2;
    v6 = v2[36] + 8;
    if ( Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v50) > *(_DWORD *)(v6 + 24) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v7 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
        v46[1] = v7;
        Outpop::Utility::Lock::lock(v7);
        LOBYTE(v51) = 3;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        v42 = 272;
        v11 = v10;
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v12);
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v13);
        v15 = sub_10007400(
                0xFFFF - v11,
                &log_buffer[v11],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h")
            + v11;
        if ( v4 == (int *)v44[1] )
          invalid_parameter_noinfo();
        if ( v4 == (int *)v44[1] )
          invalid_parameter_noinfo();
        sub_10007400(
          0xFFFF - v15,
          &log_buffer[v15],
          L"channel %d  get_resend_packet  relible id is:%d, it->resend_count_ is:%d",
          *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
          *((unsigned __int16 *)v4 + 4),
          *(unsigned __int16 *)(v4[3] + 4));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v42 = (int)log_buffer;
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v16);
        }
        LOBYTE(v51) = 2;
        Outpop::Utility::Lock::unlock(v7);
        v5 = v44;
      }
      if ( v4 == (int *)v5[1] )
        invalid_parameter_noinfo();
      v17 = *(Outpop::Utility::Ref_Object **)v4[3];
      v45 = v17;
      if ( v17 )
        Outpop::Utility::Ref_Object::addref(v17);
      LOBYTE(v51) = 4;
      v18 = (_DWORD *)Outpop::Utility::Binary_Stream::cont(v17, v46);
      LOBYTE(v51) = 5;
      v19 = *v18 != 0;
      LOBYTE(v51) = 4;
      if ( v46[0] )
        Outpop::Utility::Ref_Object::release(v46[0]);
      if ( v19 )
      {
        v44 = &v42;
        LOBYTE(v51) = 4;
        Outpop::Utility::Binary_Stream::cont(v17, 0);
      }
      sub_1000AC30((int)&v45, a2);
      v20 = v4 == *(int **)(a1 + 8);
      v44 = (int *)(a1 + 4);
      if ( v20 )
        invalid_parameter_noinfo();
      ++*(_WORD *)(v4[3] + 4);
      if ( v4 == *(int **)(a1 + 8) )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 144) + 32) * *(unsigned __int16 *)(v4[3] + 4) > *(_DWORD *)(*(_DWORD *)(a1 + 144)
                                                                                                  + 40) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v23 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v23);
          LOBYTE(v51) = 7;
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v25 = Outpop::Utility::Logger::get_log_buffer(v24);
          v26 = sub_10007400(0xFFFFu, v25, L"\n%s", L"LOG_ERROR");
          v42 = 282;
          v27 = v26;
          v41 = GetLastError();
          v39 = GetCurrentThreadId();
          v37 = GetCurrentProcessId();
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v35 = Outpop::Utility::Logger::make_tm(v28);
          v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v30 = Outpop::Utility::Logger::make_dt(v29);
          v31 = sub_10007400(
                  0xFFFF - v27,
                  &v25[v27],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v30,
                  v35,
                  v37,
                  v39,
                  v41,
                  L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h")
              + v27;
          if ( v4 == (int *)v44[1] )
            invalid_parameter_noinfo();
          sub_10007400(
            0xFFFF - v31,
            &v25[v31],
            L"Reliable_Container  get_resend_packet  resend_count is   >  keep_alive_time_   relible id is:%d",
            *((unsigned __int16 *)v4 + 4));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v25);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v42 = (int)v25;
            v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v32);
          }
          LOBYTE(v51) = 4;
          Outpop::Utility::Lock::unlock(v23);
          v17 = v45;
        }
        v43 = 0;
        LOBYTE(v51) = 2;
        if ( v17 )
          Outpop::Utility::Ref_Object::release(v17);
        LOBYTE(v51) = 1;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v50);
        break;
      }
      if ( v4 == *(int **)(a1 + 8) )
        invalid_parameter_noinfo();
      v21 = v4[3];
      *(_DWORD *)(v21 + 8) = v47[0];
      *(_DWORD *)(v21 + 12) = v47[1];
      v22 = *(_DWORD *)(a1 + 116);
      if ( v22 > 3 )
        *(_DWORD *)(a1 + 116) = v22 / 2;
      LOBYTE(v51) = 2;
      if ( v17 )
        Outpop::Utility::Ref_Object::release(v17);
      v2 = (int *)a1;
    }
    LOBYTE(v51) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v50);
    v20 = v4 == (int *)v2[2];
    v44 = v2 + 1;
    if ( v20 )
      invalid_parameter_noinfo();
    v4 = (int *)*v4;
    v5 = v44;
  }
  LOBYTE(v51) = 0;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v47);
  v51 = -1;
  v49 = -1;
  Outpop::Utility::Thread_Mutex::release(v48);
  return v43;
}
