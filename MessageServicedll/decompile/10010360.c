/*
 * func-name: sub_10010360
 * func-address: 0x10010360
 * callers: none
 * callees: 0x10011530, 0x10023490
 */

void __thiscall sub_10010360(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // ebp
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  Outpop::Utility::Ref_Object *v9; // esi
  Outpop::Utility::Lock *v10; // ebp
  Outpop::Utility::Logger *v11; // eax
  wchar_t *log_buffer; // edi
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // esi
  Outpop::Utility::Logger *v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  Outpop::Utility::Ref_Object *v24; // [esp+1Ch] [ebp-18h]

  v5 = this;
  v6 = (_DWORD *)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (_DWORD *)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    v9 = *(Outpop::Utility::Ref_Object **)Outpop::Message::Channel_Manager::find_channel(*v6);
    v24 = v9;
    if ( v9 )
    {
      Outpop::Utility::Ref_Object::addref(v9);
      (*(void (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v9 + 8))(v9);
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v10 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
      v13 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v14);
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v15);
      v17 = sub_10023490(
              &log_buffer[v13],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
              43)
          + v13;
      if ( (unsigned int)v6 >= this[10] )
        invalid_parameter_noinfo();
      sub_10023490(&log_buffer[v17], L"Post_Start_Channel::complete can't find channel id %d", *v6);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v18);
      }
      Outpop::Utility::Lock::unlock(v10);
      v9 = v24;
      v5 = this;
    }
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    v7 = v5 + 8;
    if ( (unsigned int)v6 >= v5[10] )
      invalid_parameter_noinfo();
    ++v6;
  }
}
