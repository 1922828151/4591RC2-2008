/*
 * func-name: ?handle_write_stream@Connect_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003f4c0
 * callers: none
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::Connect_Bluider_Process::handle_write_stream(int this, int a2)
{
  Outpop::Utility::Thread_Mutex *v3; // ebp
  int v4; // eax
  Outpop::Utility::Binary_Stream *v5; // eax
  Outpop::Utility::Ref_Object *v6; // ebx
  int *v7; // ecx
  int v8; // eax
  Outpop::Utility::Lock *v9; // ebp
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // edi
  int v12; // eax
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD v23; // [esp-Ch] [ebp-40h] BYREF
  int v24; // [esp-8h] [ebp-3Ch]
  unsigned int v25; // [esp-4h] [ebp-38h]
  DWORD *LastError; // [esp+14h] [ebp-20h]
  Outpop::Utility::Ref_Object *v27; // [esp+18h] [ebp-1Ch]
  Outpop::Utility::Lock *v28; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Thread_Mutex *v29; // [esp+20h] [ebp-14h]
  int v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+30h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(this + 20);
  v29 = (Outpop::Utility::Thread_Mutex *)(this + 20);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 20)) - 1;
  v30 = v4;
  v31 = 0;
  if ( v4 != -1 )
  {
    if ( !*(_BYTE *)(this + 44) )
    {
      v25 = 72;
      *(_BYTE *)(this + 44) = 1;
      v5 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(v25);
      v6 = v5;
      LastError = (DWORD *)v5;
      LOBYTE(v31) = 1;
      if ( v5 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v5, 1024);
        *(_DWORD *)v6 = &Outpop::Utility::Binary_Stream::`vftable';
      }
      else
      {
        v6 = 0;
      }
      LOBYTE(v31) = 0;
      v27 = v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v31) = 2;
      v25 = 0;
      v24 = 8;
      LastError = &v23;
      v23 = (DWORD)v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v31) = 3;
      v7 = *(int **)(this + 4);
      v8 = *v7;
      LOBYTE(v31) = 2;
      if ( (*(int (__thiscall **)(int *, DWORD, int, unsigned int))(v8 + 4))(v7, v23, v24, v25) == -1 )
      {
        LastError = (DWORD *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v28 = v9;
          Outpop::Utility::Lock::lock(v9);
          LOBYTE(v31) = 4;
          v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
          v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          v25 = 288;
          v24 = (int)L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp";
          v13 = v12;
          v23 = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v14);
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v15);
          v17 = sub_10007400(
                  0xFFFF - v13,
                  &log_buffer[v13],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId);
          sub_10007400(
            0xFFFF - (v17 + v13),
            &log_buffer[v17 + v13],
            L"Connect_Bluider_Process::handle_write_stream asynch_recv_stream Error,Errorcode is %d",
            LastError);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v25 = (unsigned int)log_buffer;
            v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v18);
          }
          LOBYTE(v31) = 2;
          Outpop::Utility::Lock::unlock(v9);
          v3 = v29;
        }
      }
      LOBYTE(v31) = 0;
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
    }
    v31 = -1;
    v30 = -1;
    LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release(v3);
  }
  return v4;
}
