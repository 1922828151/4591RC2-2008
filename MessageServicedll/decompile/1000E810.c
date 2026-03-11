/*
 * func-name: ?build_acceptor@Acceptor_Manager@Message@Outpop@@IAEHAAUAcceptor_Config@IONetwork@3@@Z
 * func-address: 0x1000e810
 * callers: 0x1000ed90
 * callees: 0x1000f300, 0x1000ffd0, 0x10023490, 0x100295c0
 */

int __thiscall Outpop::Message::Acceptor_Manager::build_acceptor(
        Outpop::Message::Acceptor_Manager *this,
        struct Outpop::IONetwork::Acceptor_Config *a2)
{
  Outpop::Message::Acceptor_Manager *v2; // edi
  Outpop::IONetwork::Stream_Acceptor *v3; // ebx
  int v4; // eax
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Lock *v13; // edi
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Lock *v21; // edi
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // eax
  int v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *tm; // [esp-14h] [ebp-64h]
  DWORD CurrentProcessId; // [esp-10h] [ebp-60h]
  DWORD CurrentThreadId; // [esp-Ch] [ebp-5Ch]
  DWORD LastError; // [esp-8h] [ebp-58h]
  wchar_t *v34; // [esp+0h] [ebp-50h]
  wchar_t *v35; // [esp+0h] [ebp-50h]
  Outpop::Utility::Lock *v37; // [esp+20h] [ebp-30h]
  _DWORD v38[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v39; // [esp+2Ch] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v40; // [esp+30h] [ebp-20h]
  _BYTE v41[16]; // [esp+34h] [ebp-1Ch] BYREF
  int v42; // [esp+4Ch] [ebp-4h]

  v2 = this;
  v3 = 0;
  v42 = 0;
  v4 = *((_DWORD *)a2 + 22);
  if ( !v4 )
  {
    v3 = (Outpop::IONetwork::Stream_Acceptor *)operator new(0xE8u);
    LOBYTE(v42) = 1;
    if ( v3 )
    {
      Outpop::IONetwork::Stream_Acceptor::Stream_Acceptor(
        v3,
        v2,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)v2 + 12) + 64) + 76));
      *(_DWORD *)v3 = &Outpop::IONetwork::Stream_Acceptor::`vftable';
    }
    else
    {
      v3 = 0;
    }
    LOBYTE(v42) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v42) = 2;
LABEL_15:
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v42) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    goto LABEL_27;
  }
  if ( v4 == 1 )
  {
    v3 = (Outpop::IONetwork::Stream_Acceptor *)operator new(0x170u);
    LOBYTE(v42) = 3;
    if ( v3 )
    {
      Outpop::IONetwork::Dgram_Acceptor::Dgram_Acceptor(
        v3,
        v2,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)v2 + 12) + 64) + 76));
      *(_DWORD *)v3 = &Outpop::IONetwork::Dgram_Acceptor::`vftable';
    }
    else
    {
      v3 = 0;
    }
    LOBYTE(v42) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v42) = 4;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v37 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v37);
    LOBYTE(v42) = 5;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = sub_10023490(log_buffer, L"\n%s", L"LOG_WARNING");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10023490(
            &log_buffer[v7],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Acceptor_Manager.cpp",
            126);
    sub_10023490(&log_buffer[v11 + v7], L"Acceptor_Manager not supper acceptor type %d", *((_DWORD *)a2 + 22));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v12);
    }
    LOBYTE(v42) = 0;
    Outpop::Utility::Lock::unlock(v37);
    v2 = this;
  }
LABEL_27:
  (*(void (__thiscall **)(Outpop::Message::Acceptor_Manager *, struct Outpop::IONetwork::Acceptor_Config *, Outpop::IONetwork::Stream_Acceptor *))(*(_DWORD *)v2 + 20))(
    v2,
    a2,
    v3);
  Outpop::Utility::Lock::lock((Outpop::Message::Acceptor_Manager *)((char *)v2 + 52));
  LOBYTE(v42) = 6;
  LOWORD(v38[0]) = *((_WORD *)a2 + 36);
  v38[1] = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  LOBYTE(v42) = 8;
  sub_1000FFD0(&v39, v38);
  LOBYTE(v42) = 9;
  sub_1000F300((char *)v2 + 4, v41, &v39);
  LOBYTE(v42) = 8;
  if ( v40 )
    Outpop::Utility::Ref_Object::release(v40);
  LOBYTE(v42) = 6;
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  LOBYTE(v42) = 0;
  Outpop::Utility::Lock::unlock((Outpop::Message::Acceptor_Manager *)((char *)v2 + 52));
  (*(void (__thiscall **)(Outpop::IONetwork::Stream_Acceptor *, struct Outpop::IONetwork::Acceptor_Config *))(*(_DWORD *)v3 + 16))(
    v3,
    a2);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v13 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v13);
    LOBYTE(v42) = 12;
    v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v15 = Outpop::Utility::Logger::get_log_buffer(v14);
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v34 = Outpop::Utility::Logger::make_tm(v16);
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::make_dt(v17);
    v19 = sub_10023490(v15, L"\nLOGINFO %s:%s Message:", v18, v34);
    sub_10023490(&v15[v19], L"\trun acceptor listen port %d", *((unsigned __int16 *)a2 + 36));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v15);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    LOBYTE(v42) = 0;
    Outpop::Utility::Lock::unlock(v13);
    v2 = this;
  }
  (*(void (__thiscall **)(Outpop::IONetwork::Stream_Acceptor *))(*(_DWORD *)v3 + 8))(v3);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v21);
    LOBYTE(v42) = 13;
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v23 = Outpop::Utility::Logger::get_log_buffer(v22);
    v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v35 = Outpop::Utility::Logger::make_tm(v24);
    v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::make_dt(v25);
    v27 = sub_10023490(v23, L"\nLOGINFO %s:%s Message:", v26, v35);
    sub_10023490(&v23[v27], L"\trun acceptor listen port %d succeed", *((unsigned __int16 *)a2 + 36));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v23);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v28);
    }
    LOBYTE(v42) = 0;
    Outpop::Utility::Lock::unlock(v21);
    v2 = this;
  }
  (*(void (__thiscall **)(Outpop::Message::Acceptor_Manager *, struct Outpop::IONetwork::Acceptor_Config *, Outpop::IONetwork::Stream_Acceptor *))(*(_DWORD *)v2 + 24))(
    v2,
    a2,
    v3);
  v42 = -1;
  Outpop::Utility::Ref_Object::release(v3);
  return 0;
}
