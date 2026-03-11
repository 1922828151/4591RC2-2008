/*
 * func-name: ?handle_time_out@Stream_Channel@IONetwork@Outpop@@UAEXABVTime_Value@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@J@Z
 * func-address: 0x10014270
 * callers: none
 * callees: 0x10003bf0, 0x10007400, 0x10014c60, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Stream_Channel::handle_time_out(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // eax
  Outpop::Utility::Lock *v21; // ebx
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // edi
  int v24; // eax
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *tm; // [esp-18h] [ebp-48h]
  wchar_t *v32; // [esp-18h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD v34; // [esp-14h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD v36; // [esp-10h] [ebp-40h]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  DWORD v38; // [esp-Ch] [ebp-3Ch]
  int v39; // [esp-4h] [ebp-34h] BYREF
  Outpop::Utility::Lock *v40; // [esp+14h] [ebp-1Ch]
  int *v41; // [esp+18h] [ebp-18h]
  _DWORD v42[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v43; // [esp+2Ch] [ebp-4h]

  v6 = this[45];
  if ( v6 && *(_BYTE *)(v6 + 121) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v40 = v7;
      Outpop::Utility::Lock::lock(v7);
      v43 = 0;
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
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              814);
      sub_10007400(
        0xFFFF - (v14 + v10),
        &log_buffer[v14 + v10],
        L" Stream_Channel::handle_time_out  channel id  is %d",
        this[28]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v39 = (int)log_buffer;
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      v43 = -1;
      Outpop::Utility::Lock::unlock(v7);
    }
    Outpop::Utility::Time_Value::gettimeofday(v42);
    v43 = 1;
    Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 33));
    v16 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(this + 41));
    v17 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v42) - v16;
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 33));
    if ( v17 >= *(unsigned __int16 *)(this[45] + 122) )
    {
      v18 = operator new(56);
      v40 = (Outpop::Utility::Lock *)v18;
      LOBYTE(v43) = 2;
      if ( v18 )
      {
        v41 = &v39;
        v39 = (int)this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v43) = 2;
        v19 = sub_10014C60(v18, v39);
      }
      else
      {
        v19 = 0;
      }
      LOBYTE(v43) = 1;
      *(_DWORD *)(v19 + 24) = 1;
      *(_DWORD *)(v19 + 52) = a5;
      v20 = this[45];
      if ( v20 )
      {
        if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
               *(HANDLE **)(v20 + 124),
               (struct Outpop::IONetwork::Asynch_Result *)v19,
               0) == -1 )
          (**(void (__thiscall ***)(int, int))v19)(v19, 1);
      }
      else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
              || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
             && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v21);
        LOBYTE(v43) = 4;
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v23 = Outpop::Utility::Logger::get_log_buffer(v22);
        v24 = sub_10007400(0xFFFFu, v23, L"\n%s", L"LOG_ERROR");
        v39 = 837;
        v25 = v24;
        v38 = GetLastError();
        v36 = GetCurrentThreadId();
        v34 = GetCurrentProcessId();
        v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v32 = Outpop::Utility::Logger::make_tm(v26);
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v28 = Outpop::Utility::Logger::make_dt(v27);
        v29 = sub_10007400(
                0xFFFF - v25,
                &v23[v25],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v28,
                v32,
                v34,
                v36,
                v38,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp");
        sub_10007400(
          0xFFFF - (v29 + v25),
          &v23[v29 + v25],
          L"Stream_Channel::handle_time_out  channel id   Error  acceptor is NULL,channel id is  %d",
          this[28]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v23);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v39 = (int)v23;
          v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v30);
        }
        LOBYTE(v43) = 1;
        Outpop::Utility::Lock::unlock(v21);
      }
    }
    v43 = -1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v42);
  }
}
