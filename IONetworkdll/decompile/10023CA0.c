/*
 * func-name: ?check_stream_conminute@Comminute_Container@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x10023ca0
 * callers: 0x10031810, 0x100455d0
 * callees: 0x10007400, 0x100245c0
 */

void __thiscall Outpop::IONetwork::Comminute_Container::check_stream_conminute(
        Outpop::IONetwork::Comminute_Container *this)
{
  Outpop::IONetwork::Comminute_Container *v1; // edi
  bool v2; // al
  _DWORD *v3; // ebx
  _DWORD **v4; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  Outpop::Utility::Lock *v9; // edi
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // ebp
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  int v22; // [esp+18h] [ebp-3Ch]
  Outpop::Utility::Thread_Mutex *v24; // [esp+24h] [ebp-30h]
  _BYTE v25[8]; // [esp+2Ch] [ebp-28h] BYREF
  _DWORD **v26; // [esp+34h] [ebp-20h]
  char v27[12]; // [esp+3Ch] [ebp-18h] BYREF
  int v28; // [esp+50h] [ebp-4h]

  v1 = this;
  Outpop::Utility::Time_Value::gettimeofday(v25);
  v28 = 0;
  v24 = (Outpop::IONetwork::Comminute_Container *)((char *)v1 + 44);
  v2 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Comminute_Container *)((char *)v1 + 44));
  LOBYTE(v28) = 1;
  if ( v2 )
  {
    v3 = (_DWORD *)**((_DWORD **)v1 + 2);
    v4 = (_DWORD **)((char *)v1 + 4);
    while ( 1 )
    {
      v5 = (_DWORD *)*((_DWORD *)v1 + 2);
      if ( !v4 || v4 != (_DWORD **)((char *)v1 + 4) )
        invalid_parameter_noinfo();
      if ( v3 == v5 )
        break;
      if ( !v4 )
        invalid_parameter_noinfo();
      if ( v3 == v4[1] )
        invalid_parameter_noinfo();
      v6 = (_DWORD *)v3[4];
      v7 = (_DWORD *)*v6;
      if ( (_DWORD *)*v6 == v6 )
        invalid_parameter_noinfo();
      v22 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v7 + 5));
      if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v25) - v22 <= 100 )
      {
        if ( v3 == v4[1] )
          invalid_parameter_noinfo();
        v3 = (_DWORD *)*v3;
      }
      else
      {
        v8 = (_DWORD *)sub_100245C0(v27, v4, v3);
        v3 = (_DWORD *)v8[1];
        v26 = (_DWORD **)*v8;
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
        {
          v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v9);
          LOBYTE(v28) = 2;
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
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Comminute_Container.cpp",
                  175);
          sub_10007400(0xFFFF - (v16 + v12), &log_buffer[v16 + v12], aComminuteConta);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v17);
          }
          LOBYTE(v28) = 1;
          Outpop::Utility::Lock::unlock(v9);
          v1 = this;
        }
        v4 = v26;
      }
    }
    LOBYTE(v28) = 0;
    Outpop::Utility::Thread_Mutex::release(v24);
    v28 = -1;
  }
  else
  {
    v28 = -1;
  }
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v25);
}
