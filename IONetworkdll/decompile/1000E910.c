/*
 * func-name: ?start_read@Stream_Channel@IONetwork@Outpop@@UAEXXZ
 * func-address: 0x1000e910
 * callers: none
 * callees: 0x10007400, 0x10011620, 0x100155b0
 */

char __thiscall Outpop::IONetwork::Stream_Channel::start_read(Outpop::IONetwork::Stream_Channel *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  Outpop::Utility::Thread_Mutex *v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  Outpop::Utility::Ref_Object *v9; // ebx
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // ebp
  int v12; // edi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Binary_Stream *v18; // eax
  Outpop::Utility::Ref_Object *v19; // edi
  Outpop::Utility::Lock *v20; // ebx
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // ebp
  int v23; // eax
  int v24; // edi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  Outpop::Utility::Logger *v29; // eax
  SOCKET v31; // [esp-18h] [ebp-70h]
  wchar_t *tm; // [esp-Ch] [ebp-64h]
  wchar_t *v33; // [esp-Ch] [ebp-64h]
  DWORD CurrentProcessId; // [esp-8h] [ebp-60h]
  DWORD v35; // [esp-8h] [ebp-60h]
  DWORD CurrentThreadId; // [esp-4h] [ebp-5Ch]
  DWORD v37; // [esp-4h] [ebp-5Ch]
  DWORD LastError; // [esp+0h] [ebp-58h]
  DWORD v39; // [esp+0h] [ebp-58h]
  const wchar_t *v40; // [esp+4h] [ebp-54h] BYREF
  int v41; // [esp+8h] [ebp-50h]
  Outpop::Utility::Ref_Object *v42; // [esp+20h] [ebp-38h] BYREF
  Outpop::Utility::Ref_Object *Error; // [esp+24h] [ebp-34h] BYREF
  DWORD v44; // [esp+28h] [ebp-30h] BYREF
  DWORD cbBytesReturned[2]; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD vInBuffer[3]; // [esp+34h] [ebp-24h] BYREF
  Outpop::Utility::Thread_Mutex *v47; // [esp+40h] [ebp-18h] BYREF
  int v48; // [esp+44h] [ebp-14h]
  int v49; // [esp+54h] [ebp-4h]

  v2 = *((_DWORD *)this + 45);
  if ( v2 && *(_BYTE *)(v2 + 121) )
  {
    Error = 0;
    v49 = 0;
    v3 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v47, 10, 0);
    LOBYTE(v49) = 1;
    v42 = this;
    Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v49) = 2;
    v4 = Outpop::Utility::Timer_Queue::instance(&v42, v3, &Error, 0, 0);
    *((_DWORD *)this + 57) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v4);
    LOBYTE(v49) = 1;
    if ( v42 )
      Outpop::Utility::Ref_Object::release(v42);
    LOBYTE(v49) = 0;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v47);
    v49 = -1;
    if ( Error )
      Outpop::Utility::Ref_Object::release(Error);
  }
  v5 = (Outpop::IONetwork::Stream_Channel *)((char *)this + 132);
  v47 = (Outpop::IONetwork::Stream_Channel *)((char *)this + 132);
  v48 = 0;
  v6 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Channel *)((char *)this + 132)) - 1;
  v48 = v6;
  v49 = 3;
  if ( v6 != -1 )
  {
    v7 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(vInBuffer);
    LOBYTE(v49) = 4;
    *((_DWORD *)this + 41) = *v7;
    *((_DWORD *)this + 42) = v7[1];
    LOBYTE(v49) = 3;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)vInBuffer);
    v8 = *((_DWORD *)this + 10);
    if ( v8
      && (v41 = 0,
          v40 = 0,
          vInBuffer[1] = v8,
          vInBuffer[2] = v8,
          v31 = *((_DWORD *)this + 49),
          vInBuffer[0] = 1,
          WSAIoctl(v31, 0x98000004, vInBuffer, 0xCu, vInBuffer, 0xCu, cbBytesReturned, 0, 0) == -1) )
    {
      Error = (Outpop::Utility::Ref_Object *)WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
      {
        v9 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
        v42 = v9;
        Outpop::Utility::Lock::lock(v9);
        LOBYTE(v49) = 5;
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
        v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_WARNING");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v13);
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v14);
        v16 = sub_10007400(
                0xFFFF - v12,
                &log_buffer[v12],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                74);
        sub_10007400(
          0xFFFF - (v16 + v12),
          &log_buffer[v16 + v12],
          L"Channel can't init keep alive error %d keep alive time %d handle %d!",
          Error,
          *((_DWORD *)this + 10),
          *((_DWORD *)this + 49));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v41 = (int)log_buffer;
          v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v17);
        }
        LOBYTE(v49) = 3;
        Outpop::Utility::Lock::unlock(v9);
        v5 = v47;
      }
      Outpop::IONetwork::Stream_Channel::interiorclose(this);
      v49 = -1;
      v48 = -1;
      LOBYTE(v6) = Outpop::Utility::Thread_Mutex::release(v5);
    }
    else
    {
      v18 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v19 = v18;
      cbBytesReturned[0] = (DWORD)v18;
      LOBYTE(v49) = 6;
      if ( v18 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v18, 10240);
        *(_DWORD *)v19 = &Outpop::Utility::Binary_Stream::`vftable';
        v42 = v19;
      }
      else
      {
        v42 = 0;
        v19 = 0;
      }
      LOBYTE(v49) = 3;
      Error = v19;
      if ( v19 )
        Outpop::Utility::Ref_Object::addref(v19);
      LOBYTE(v49) = 7;
      v44 = 0;
      cbBytesReturned[1] = (DWORD)this;
      Outpop::Utility::Ref_Object::addref(this);
      LOBYTE(v49) = 8;
      v41 = 0;
      cbBytesReturned[0] = (DWORD)&v40;
      v40 = (const wchar_t *)this;
      Outpop::Utility::Ref_Object::addref(this);
      LOBYTE(v49) = 8;
      if ( sub_100155B0((char *)this + 196, &Error, 0x2800u, &v44, v40, v41) == -1 )
      {
        cbBytesReturned[0] = WSAGetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v20 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          vInBuffer[0] = v20;
          Outpop::Utility::Lock::lock(v20);
          LOBYTE(v49) = 10;
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v22 = Outpop::Utility::Logger::get_log_buffer(v21);
          v23 = sub_10007400(0xFFFFu, v22, L"\n%s", L"LOG_ERROR");
          v41 = 86;
          v40 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp";
          v24 = v23;
          v39 = GetLastError();
          v37 = GetCurrentThreadId();
          v35 = GetCurrentProcessId();
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v33 = Outpop::Utility::Logger::make_tm(v25);
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v27 = Outpop::Utility::Logger::make_dt(v26);
          v28 = sub_10007400(
                  0xFFFF - v24,
                  &v22[v24],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v27,
                  v33,
                  v35,
                  v37,
                  v39);
          sub_10007400(0xFFFF - (v28 + v24), &v22[v28 + v24], L"Stream_Channel::start_read : %d", cbBytesReturned[0]);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v22);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v41 = (int)v22;
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v29);
          }
          LOBYTE(v49) = 8;
          Outpop::Utility::Lock::unlock(v20);
          v19 = v42;
        }
        Outpop::IONetwork::Stream_Channel::interiorclose(this);
      }
      LOBYTE(v49) = 7;
      Outpop::Utility::Ref_Object::release(this);
      LOBYTE(v49) = 3;
      if ( v19 )
        Outpop::Utility::Ref_Object::release(v19);
      v49 = -1;
      v48 = -1;
      LOBYTE(v6) = Outpop::Utility::Thread_Mutex::release(v47);
    }
  }
  return v6;
}
