/*
 * func-name: sub_10033800
 * func-address: 0x10033800
 * callers: 0x10031810
 * callees: 0x10007400, 0x1000ac30
 */

char __stdcall sub_10033800(int a1, _DWORD *a2)
{
  bool v2; // al
  int *v3; // edi
  int v4; // ebp
  int v5; // esi
  Outpop::Utility::Lock *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // ebx
  Outpop::Utility::Logger *v13; // eax
  bool v14; // zf
  Outpop::Utility::Ref_Object *v15; // ebp
  _DWORD *v16; // eax
  bool v17; // bl
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // ebx
  int v23; // eax
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v31; // [esp-18h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  int tm; // [esp-4h] [ebp-58h] BYREF
  char v36; // [esp+1Bh] [ebp-39h]
  int v37; // [esp+1Ch] [ebp-38h]
  Outpop::Utility::Ref_Object *v38; // [esp+20h] [ebp-34h] BYREF
  _DWORD v39[3]; // [esp+24h] [ebp-30h] BYREF
  _DWORD v40[2]; // [esp+30h] [ebp-24h] BYREF
  Outpop::Utility::Thread_Mutex *v41; // [esp+38h] [ebp-1Ch]
  int v42; // [esp+3Ch] [ebp-18h]
  _DWORD v43[2]; // [esp+40h] [ebp-14h] BYREF
  int v44; // [esp+50h] [ebp-4h]
  Outpop::Utility::Lock *v45; // [esp+58h] [ebp+4h]

  v41 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v2 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  v42 = v2 - 1;
  v44 = 0;
  if ( !v2 )
    return 0;
  v36 = 1;
  Outpop::Utility::Time_Value::gettimeofday(v40);
  LOBYTE(v44) = 1;
  v3 = **(int ***)(a1 + 8);
  v4 = a1 + 4;
  while ( v3 != *(int **)(v4 + 4) )
  {
    Outpop::Utility::operator-(v43, v40, v3[3] + 8);
    LOBYTE(v44) = 2;
    v5 = *(_DWORD *)(a1 + 144) + 8;
    if ( Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v43) > *(_DWORD *)(v5 + 24) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v39[1] = v6;
        Outpop::Utility::Lock::lock(v6);
        LOBYTE(v44) = 3;
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (int)Outpop::Utility::Logger::make_tm(v9);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v10);
        v12 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt);
        if ( v3 == *(int **)(a1 + 8) )
          invalid_parameter_noinfo();
        if ( v3 == *(int **)(a1 + 8) )
          invalid_parameter_noinfo();
        sub_10007400(
          0xFFFF - v12,
          &log_buffer[v12],
          L"channel %d  get_resend_packet  relible id is:%d, it->resend_count_ is:%d",
          *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
          *((unsigned __int16 *)v3 + 4),
          *(unsigned __int16 *)(v3[3] + 4));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          tm = (int)log_buffer;
          v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v13);
        }
        LOBYTE(v44) = 2;
        Outpop::Utility::Lock::unlock(v6);
      }
      v14 = v3 == *(int **)(a1 + 8);
      v37 = a1 + 4;
      if ( v14 )
        invalid_parameter_noinfo();
      v15 = *(Outpop::Utility::Ref_Object **)v3[3];
      v39[0] = v15;
      if ( v15 )
        Outpop::Utility::Ref_Object::addref(v15);
      LOBYTE(v44) = 4;
      v16 = (_DWORD *)Outpop::Utility::Binary_Stream::cont(v15, &v38);
      LOBYTE(v44) = 5;
      v17 = *v16 != 0;
      LOBYTE(v44) = 4;
      if ( v38 )
        Outpop::Utility::Ref_Object::release(v38);
      if ( v17 )
      {
        v39[2] = &tm;
        LOBYTE(v44) = 4;
        Outpop::Utility::Binary_Stream::cont(v15, 0);
      }
      sub_1000AC30((int)v39, a2);
      v18 = v37;
      if ( v3 == *(int **)(v37 + 4) )
        invalid_parameter_noinfo();
      ++*(_WORD *)(v3[3] + 4);
      if ( v3 == *(int **)(v18 + 4) )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 144) + 32) * *(unsigned __int16 *)(v3[3] + 4) > *(_DWORD *)(*(_DWORD *)(a1 + 144)
                                                                                                  + 40) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v45);
          LOBYTE(v44) = 7;
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v22 = Outpop::Utility::Logger::get_log_buffer(v21);
          v23 = sub_10007400(0xFFFFu, v22, L"\n%s", L"LOG_ERROR");
          tm = 283;
          v24 = v23;
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v31 = Outpop::Utility::Logger::make_tm(v25);
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v27 = Outpop::Utility::Logger::make_dt(v26);
          v28 = sub_10007400(
                  0xFFFF - v24,
                  &v22[v24],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v27,
                  v31,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"d:\\r3\\outpopgameproject\\ionetwork\\Reliable_Container.h")
              + v24;
          if ( v3 == *(int **)(v37 + 4) )
            invalid_parameter_noinfo();
          sub_10007400(
            0xFFFF - v28,
            &v22[v28],
            L"Reliable_Container  get_resend_packet  resend_count is   >  keep_alive_time_   relible id is:%d",
            *((unsigned __int16 *)v3 + 4));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v22);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            tm = (int)v22;
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v29);
          }
          LOBYTE(v44) = 4;
          Outpop::Utility::Lock::unlock(v45);
        }
        v36 = 0;
        LOBYTE(v44) = 2;
        if ( v15 )
          Outpop::Utility::Ref_Object::release(v15);
        LOBYTE(v44) = 1;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v43);
        break;
      }
      if ( v3 == *(int **)(v18 + 4) )
        invalid_parameter_noinfo();
      v19 = v3[3];
      *(_DWORD *)(v19 + 8) = v40[0];
      *(_DWORD *)(v19 + 12) = v40[1];
      v20 = *(_DWORD *)(a1 + 116);
      if ( v20 > 3 )
        *(_DWORD *)(a1 + 116) = v20 / 2;
      LOBYTE(v44) = 2;
      if ( v15 )
        Outpop::Utility::Ref_Object::release(v15);
      v4 = v37;
    }
    LOBYTE(v44) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v43);
    if ( v3 == *(int **)(v4 + 4) )
      invalid_parameter_noinfo();
    v3 = (int *)*v3;
  }
  LOBYTE(v44) = 0;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v40);
  v44 = -1;
  v42 = -1;
  Outpop::Utility::Thread_Mutex::release(v41);
  return v36;
}
