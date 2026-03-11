/*
 * func-name: sub_10019410
 * func-address: 0x10019410
 * callers: none
 * callees: 0x10002e10, 0x10007400, 0x10018f50
 */

void __thiscall sub_10019410(int this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Ref_Object *v12; // ecx
  void **v13[2]; // [esp-20h] [ebp-48h] BYREF
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int v18; // [esp-8h] [ebp-30h]
  Outpop::Utility::Ref_Object *v19; // [esp-4h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object **v20; // [esp+14h] [ebp-14h]
  void ***v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+24h] [ebp-4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v20 = (Outpop::Utility::Ref_Object **)v3;
    Outpop::Utility::Lock::lock(v3);
    v22 = 0;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10007400(
            0xFFFF - v6,
            &log_buffer[v6],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            126);
    sub_10007400(0xFFFF - (v10 + v6), &log_buffer[v10 + v6], L"Wait_Stream_Channel::close!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v19 = (Outpop::Utility::Ref_Object *)log_buffer;
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    v22 = -1;
    Outpop::Utility::Lock::unlock(v3);
  }
  if ( *(_DWORD *)(this + 80) != -1 )
  {
    closesocket(*(_DWORD *)(this + 80));
    *(_DWORD *)(this + 80) = -1;
  }
  if ( *(_DWORD *)(this + 88) )
  {
    v19 = v2;
    v12 = *(Outpop::Utility::Ref_Object **)(this + 8);
    v20 = &v19;
    v19 = v12;
    if ( v12 )
      Outpop::Utility::Ref_Object::addref(v12);
    v22 = 1;
    v21 = v13;
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)v13,
      (const struct Outpop::IONetwork::INET_Addr *)(this + 40));
    v22 = -1;
    Outpop::IONetwork::Stream_Acceptor::bluider_channel_falied(
      *(char **)(this + 88),
      0,
      v13[0],
      (int)v13[1],
      (int)tm,
      CurrentProcessId,
      (struct in_addr)CurrentThreadId,
      LastError,
      v18,
      v19);
  }
}
