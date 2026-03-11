/*
 * func-name: ?handler_close@Stream_Channel@IONetwork@Outpop@@QAEXH@Z
 * func-address: 0x100110e0
 * callers: 0x100114a0, 0x10011620
 * callees: 0x10007400
 */

void __thiscall Outpop::IONetwork::Stream_Channel::handler_close(
        Outpop::IONetwork::Stream_Channel *this,
        Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  bool v4; // al
  Outpop::Utility::Timer_Queue *v5; // eax
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // ebp
  int v9; // edi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  DWORD v15; // eax
  bool v16; // zf
  Outpop::Utility::Lock *v17; // ebx
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // ebp
  int v20; // edi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  wchar_t *v27; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v29; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v31; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  DWORD v33; // [esp-Ch] [ebp-38h]
  int v34; // [esp+0h] [ebp-2Ch]
  int v35; // [esp+0h] [ebp-2Ch]
  int v36; // [esp+4h] [ebp-28h]
  int v37; // [esp+8h] [ebp-24h]
  int v38; // [esp+Ch] [ebp-20h]
  Outpop::Utility::Thread_Mutex *v39; // [esp+18h] [ebp-14h]
  int v40; // [esp+1Ch] [ebp-10h]

  v3 = (Outpop::IONetwork::Stream_Channel *)((char *)this + 132);
  v39 = (Outpop::IONetwork::Stream_Channel *)((char *)this + 132);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Channel *)((char *)this + 132));
  v40 = v4 - 1;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 45) && *((_DWORD *)this + 57) != -1 )
    {
      v5 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(
                                             *((_DWORD *)this + 57),
                                             v34,
                                             v36,
                                             v37,
                                             v38);
      Outpop::Utility::Timer_Queue::cancel(v5, v35);
    }
    if ( *((_DWORD *)this + 49) != -1 )
    {
      closesocket(*((_DWORD *)this + 49));
      *((_DWORD *)this + 49) = -1;
    }
    if ( *((_BYTE *)this + 201) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v6);
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
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                415);
        sub_10007400(
          0xFFFF - (v13 + v9),
          &log_buffer[v13 + v9],
          L"Stream_Channel::handler_close  channel id is %d",
          *((_DWORD *)this + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v14);
        }
        Outpop::Utility::Lock::unlock(v6);
        v3 = v39;
      }
      v15 = (DWORD)a2;
      if ( !a2 )
        v15 = GetLastError();
      v16 = *((_DWORD *)this + 30) == 0;
      *((_DWORD *)this + 27) = v15;
      *((_BYTE *)this + 201) = 0;
      if ( !v16 )
      {
        v40 = -1;
        Outpop::Utility::Thread_Mutex::release(v3);
        a2 = this;
        Outpop::Utility::Ref_Object::addref(this);
        (*(void (__thiscall **)(_DWORD, _DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 30) + 4))(
          *((_DWORD *)this + 30),
          0,
          &a2);
        if ( a2 )
          Outpop::Utility::Ref_Object::release(a2);
      }
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      a2 = v17;
      Outpop::Utility::Lock::lock(v17);
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v19 = Outpop::Utility::Logger::get_log_buffer(v18);
      v20 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_DEBUG");
      v33 = GetLastError();
      v31 = GetCurrentThreadId();
      v29 = GetCurrentProcessId();
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v27 = Outpop::Utility::Logger::make_tm(v21);
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::make_dt(v22);
      v24 = sub_10007400(
              0xFFFF - v20,
              &v19[v20],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v23,
              v27,
              v29,
              v31,
              v33,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              434);
      sub_10007400(
        0xFFFF - (v24 + v20),
        &v19[v24 + v20],
        L"Stream_Channel::handler_close  failed   channel id is %d",
        *((_DWORD *)this + 28));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v19);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v25);
      }
      Outpop::Utility::Lock::unlock(v17);
      v3 = v39;
    }
    if ( v40 != -1 )
      Outpop::Utility::Thread_Mutex::release(v3);
  }
}
