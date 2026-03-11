/*
 * func-name: ?handle_message@Synch_Ack_Handler@Message@Outpop@@UAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10024520
 * callers: none
 * callees: 0x10023490, 0x10026e00
 */

void __stdcall Outpop::Message::Synch_Ack_Handler::handle_message(Outpop::Utility::Ref_Object **a1)
{
  int v1; // ebp
  Outpop::Utility::Ref_Object *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Ref_Object *v11; // ecx
  Outpop::Utility::Ref_Object **v12; // esi
  Outpop::Utility::Ref_Object *v13; // ecx
  bool v14; // zf
  Outpop::Utility::Lock *v15; // ebx
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // edi
  int v18; // esi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // eax
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  wchar_t *v25; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD v27; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD v29; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  DWORD v31; // [esp-Ch] [ebp-34h]
  Outpop::Utility::Ref_Object *v32[2]; // [esp+14h] [ebp-14h] BYREF
  int v33; // [esp+24h] [ebp-4h]

  if ( (*((_BYTE *)*a1 + 97) & 0xF) != 0 )
    v1 = *(_DWORD *)((*((_BYTE *)*a1 + 97) & 0xF) + *((_DWORD *)*a1 + 25));
  else
    v1 = -1;
  Outpop::Message::Request_Ack::get_synch_request_item(v32, v1);
  v33 = 0;
  if ( v32[0] )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v2 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      v32[1] = v2;
      Outpop::Utility::Lock::lock(v2);
      LOBYTE(v33) = 1;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10023490(
             0xFFFF - v5,
             &log_buffer[v5],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             dt,
             tm,
             CurrentProcessId,
             CurrentThreadId,
             LastError,
             L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
             177);
      sub_10023490(0xFFFF - (v9 + v5), &log_buffer[v9 + v5], L"Synch_Ack_Handler ack token is %d", v1);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v10);
      }
      LOBYTE(v33) = 0;
      Outpop::Utility::Lock::unlock(v2);
    }
    v11 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v32[0] + 10);
    v12 = (Outpop::Utility::Ref_Object **)((char *)v32[0] + 40);
    if ( v11 )
      Outpop::Utility::Ref_Object::release(v11);
    v13 = *a1;
    v14 = *a1 == 0;
    *v12 = *a1;
    if ( !v14 )
      Outpop::Utility::Ref_Object::addref(v13);
    Outpop::Utility::Event_Base::signal((Outpop::Utility::Ref_Object *)((char *)v32[0] + 28));
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v15 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v15);
    LOBYTE(v33) = 2;
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v17 = Outpop::Utility::Logger::get_log_buffer(v16);
    v18 = sub_10023490(0xFFFFu, v17, L"\n%s", L"LOG_DEBUG");
    v31 = GetLastError();
    v29 = GetCurrentThreadId();
    v27 = GetCurrentProcessId();
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v25 = Outpop::Utility::Logger::make_tm(v19);
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v21 = Outpop::Utility::Logger::make_dt(v20);
    v22 = sub_10023490(
            0xFFFF - v18,
            &v17[v18],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v21,
            v25,
            v27,
            v29,
            v31,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            183);
    sub_10023490(0xFFFF - (v22 + v18), &v17[v22 + v18], L"Synch_Ack_Handler ack token is %d but not find item", v1);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v17);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v23);
    }
    LOBYTE(v33) = 0;
    Outpop::Utility::Lock::unlock(v15);
  }
  v33 = -1;
  if ( v32[0] )
    Outpop::Utility::Ref_Object::release(v32[0]);
}
