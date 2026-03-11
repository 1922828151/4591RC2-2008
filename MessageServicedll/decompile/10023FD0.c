/*
 * func-name: ?handle_message@Asynch_Ack_Handler@Message@Outpop@@UAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10023fd0
 * callers: none
 * callees: 0x10023490, 0x10023d90, 0x10026cd0, 0x100295c0
 */

void __thiscall Outpop::Message::Asynch_Ack_Handler::handle_message(_DWORD *this, Outpop::Utility::Ref_Object *a2)
{
  _DWORD *v2; // esi
  Outpop::Utility::Ref_Object **v3; // edi
  int v4; // ebp
  Outpop::Utility::Lock *v5; // ebx
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Thread_Message *v14; // eax
  Outpop::Utility::Ref_Object *v15; // eax
  Outpop::Utility::Lock *v16; // ebx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  wchar_t *v26; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v28; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v30; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  DWORD v32; // [esp-Ch] [ebp-38h]
  Outpop::Utility::Ref_Object **v33; // [esp+14h] [ebp-18h] BYREF
  _DWORD *v34; // [esp+18h] [ebp-14h]
  Outpop::Utility::Lock *v35; // [esp+1Ch] [ebp-10h]
  int v36; // [esp+28h] [ebp-4h]

  v2 = this;
  v34 = this;
  v3 = (Outpop::Utility::Ref_Object **)a2;
  if ( (*(_BYTE *)(*(_DWORD *)a2 + 97) & 0xF) != 0 )
    v4 = *(_DWORD *)((*(_BYTE *)(*(_DWORD *)a2 + 97) & 0xF) + *(_DWORD *)(*(_DWORD *)a2 + 100));
  else
    v4 = -1;
  Outpop::Message::Request_Ack::get_asynch_request_item(&v33, v4);
  v36 = 0;
  if ( v33 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v35 = v5;
      Outpop::Utility::Lock::lock(v5);
      LOBYTE(v36) = 1;
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
      v8 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v9);
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v10);
      v12 = sub_10023490(
              0xFFFF - v8,
              &log_buffer[v8],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
              132);
      sub_10023490(0xFFFF - (v12 + v8), &log_buffer[v12 + v8], L"Asynch_Ack_Handler dispatch ack token is %d", v4);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v13);
      }
      LOBYTE(v36) = 0;
      Outpop::Utility::Lock::unlock(v5);
      v3 = (Outpop::Utility::Ref_Object **)a2;
      v2 = v34;
    }
    if ( v2[3] )
    {
      v14 = (Outpop::Utility::Thread_Message *)operator new(0x18u);
      v35 = v14;
      LOBYTE(v36) = 2;
      if ( v14 )
        v15 = sub_10023D90(v14, v2[2], v33 + 2, v3, v33 + 7);
      else
        v15 = 0;
      LOBYTE(v36) = 0;
      a2 = v15;
      if ( v15 )
        Outpop::Utility::Ref_Object::addref(v15);
      LOBYTE(v36) = 3;
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(*(_DWORD *)v2[4] + 8))(v2[4], &a2);
      LOBYTE(v36) = 0;
      if ( a2 )
        Outpop::Utility::Ref_Object::release(a2);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, char *, Outpop::Utility::Ref_Object **, char *))(*(_DWORD *)v2[2] + 4))(
        v2[2],
        (char *)v33 + 8,
        v3,
        (char *)v33 + 28);
    }
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v16 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    a2 = v16;
    Outpop::Utility::Lock::lock(v16);
    LOBYTE(v36) = 4;
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::get_log_buffer(v17);
    v19 = sub_10023490(0xFFFFu, v18, L"\n%s", L"LOG_DEBUG");
    v32 = GetLastError();
    v30 = GetCurrentThreadId();
    v28 = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v22 = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_10023490(
            0xFFFF - v19,
            &v18[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v22,
            v26,
            v28,
            v30,
            v32,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            140);
    sub_10023490(
      0xFFFF - (v23 + v19),
      &v18[v23 + v19],
      L"Asynch_Ack_Handler dispatch ack token is %d but not find item",
      v4);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v18);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v24);
    }
    LOBYTE(v36) = 0;
    Outpop::Utility::Lock::unlock(v16);
  }
  v36 = -1;
  if ( v33 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v33);
}
