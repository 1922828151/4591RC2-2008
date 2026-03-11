/*
 * func-name: ?bluider_channel_falied@Stream_Connector@IONetwork@Outpop@@QAEXHVINET_Addr@23@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1001eb90
 * callers: 0x1001f440, 0x100216e0, 0x10022310
 * callees: 0x10007400
 */

void __thiscall Outpop::IONetwork::Stream_Connector::bluider_channel_falied(
        Outpop::Utility::Ref_Object *this,
        int a2,
        void **a3,
        int a4,
        int a5,
        int a6,
        struct in_addr a7,
        int a8,
        int a9,
        Outpop::Utility::Ref_Object *a10)
{
  Outpop::Utility::Ref_Object *v11; // ebx
  Outpop::Utility::Logger *v12; // eax
  wchar_t *log_buffer; // edi
  int v14; // esi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *dt; // eax
  int v18; // esi
  char *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  int v25; // [esp-4h] [ebp-28h]
  Outpop::Utility::Ref_Object *v26; // [esp+14h] [ebp-10h] BYREF
  int v27; // [esp+20h] [ebp-4h]

  v27 = 1;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v11 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v26 = v11;
    Outpop::Utility::Lock::lock(v11);
    LOBYTE(v27) = 2;
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v12);
    v14 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v15);
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v16);
    v18 = sub_10007400(
            0xFFFF - v14,
            &log_buffer[v14],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Connector.cpp",
            202)
        + v14;
    v25 = ntohs(HIWORD(a6));
    v19 = inet_ntoa(a7);
    sub_10007400(
      0xFFFF - v18,
      &log_buffer[v18],
      L"Stream_Connector::bluider_channel_falied ip is %S,port is %d",
      v19,
      v25);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    LOBYTE(v27) = 1;
    Outpop::Utility::Lock::unlock(v11);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v26 = this;
    Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v27) = 3;
    (*(void (__thiscall **)(_DWORD *, int, void ***, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 29) + 8))(
      *((_DWORD **)this + 29),
      a2,
      &a3,
      &a10,
      &v26);
    LOBYTE(v27) = 1;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
  }
  a3 = &Outpop::IONetwork::Addr::`vftable';
  v27 = -1;
  if ( a10 )
    Outpop::Utility::Ref_Object::release(a10);
}
