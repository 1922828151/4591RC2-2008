/*
 * func-name: sub_10019FE0
 * func-address: 0x10019fe0
 * callers: none
 * callees: 0x100038e0, 0x10007400, 0x1001aa50, 0x1001b060
 */

int __thiscall sub_10019FE0(wchar_t *this, Outpop::Utility::Ref_Object *a2, DWORD a3, const wchar_t **a4)
{
  int v5; // esi
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // eax
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // esi
  int v15; // eax
  u_short v16; // ax
  struct in_addr v17; // ecx
  char *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *tm; // [esp-18h] [ebp-58h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-54h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-50h]
  DWORD LastError; // [esp-Ch] [ebp-4Ch]
  const wchar_t *v25; // [esp-8h] [ebp-48h] BYREF
  int v26; // [esp-4h] [ebp-44h]
  DWORD v27; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v28[28]; // [esp+18h] [ebp-28h] BYREF
  int v29; // [esp+3Ch] [ebp-4h]

  v5 = 0;
  v29 = 0;
  v26 = (int)a4;
  v27 = 0;
  a4 = &v25;
  v25 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v29) = 0;
  if ( sub_1001B060(this + 68, &a2, a3, &v27, v25, v26) == -1 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      a4 = (const wchar_t **)v6;
      Outpop::Utility::Lock::lock(v6);
      LOBYTE(v29) = 2;
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v26 = 227;
      v25 = L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h";
      v10 = v9;
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v12);
      v14 = sub_10007400(
              0xFFFF - v10,
              &log_buffer[v10],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError)
          + v10;
      v15 = sub_1001AA50(this, v28);
      LOBYTE(v29) = 3;
      v16 = ntohs(*(_WORD *)(v15 + 14));
      v17 = (struct in_addr)*((_DWORD *)this + 31);
      v26 = v16;
      v18 = inet_ntoa(v17);
      sub_10007400(0xFFFF - v14, &log_buffer[v14], L"asynch_receive  sucess:remoteaddr ip is %S,port is %d", v18);
      LOBYTE(v29) = 2;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v28);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v26 = (int)log_buffer;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v19);
      }
      LOBYTE(v29) = 0;
      Outpop::Utility::Lock::unlock(v6);
    }
    v5 = -1;
  }
  v29 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return v5;
}
