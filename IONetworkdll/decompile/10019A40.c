/*
 * func-name: sub_10019A40
 * func-address: 0x10019a40
 * callers: none
 * callees: 0x100038e0, 0x10007400, 0x10016370, 0x1001ae40
 */

int __thiscall sub_10019A40(
        Outpop::Utility::Ref_Object *this,
        Outpop::Utility::Ref_Object *a2,
        Outpop::IONetwork::INET_Addr *a3,
        int a4)
{
  int v5; // edi
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // eax
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // esi
  u_short v15; // ax
  struct in_addr v16; // ecx
  char *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-80h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-7Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-78h]
  DWORD v23; // [esp-Ch] [ebp-74h]
  const wchar_t *v24; // [esp-8h] [ebp-70h] BYREF
  int v25; // [esp-4h] [ebp-6Ch]
  DWORD LastError; // [esp+14h] [ebp-54h]
  Outpop::IONetwork::INET_Addr *v27; // [esp+18h] [ebp-50h]
  Outpop::Utility::Ref_Object *v28; // [esp+1Ch] [ebp-4Ch]
  Outpop::Utility::Lock *v29; // [esp+20h] [ebp-48h]
  _BYTE v30[28]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v31[28]; // [esp+40h] [ebp-28h] BYREF
  int v32; // [esp+64h] [ebp-4h]

  v5 = 0;
  v32 = 0;
  v28 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v32) = 1;
  v25 = a4;
  a4 = (int)&v24;
  v24 = (const wchar_t *)this;
  if ( this )
    Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v32) = 1;
  if ( sub_1001AE40((char *)this + 80, &a2, a3, v24, v25) == -1 )
  {
    a4 = -1;
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v29 = v6;
      Outpop::Utility::Lock::lock(v6);
      LOBYTE(v32) = 3;
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v25 = 305;
      v24 = L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h";
      v10 = v9;
      v23 = GetLastError();
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
              v23)
          + v10;
      a3 = sub_10016370((int)this, (Outpop::IONetwork::INET_Addr *)v31);
      LOBYTE(v32) = 4;
      v27 = sub_10016370((int)this, (Outpop::IONetwork::INET_Addr *)v30);
      LOBYTE(v32) = 5;
      v15 = ntohs(*((_WORD *)a3 + 7));
      v25 = LastError;
      v16 = (struct in_addr)*((_DWORD *)v27 + 4);
      v24 = (const wchar_t *)v15;
      v17 = inet_ntoa(v16);
      sub_10007400(
        0xFFFF - v14,
        &log_buffer[v14],
        L"asynch_receive  error:remoteaddr ip is %S,port is %d,error  is %d",
        v17);
      LOBYTE(v32) = 4;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v30);
      LOBYTE(v32) = 3;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v31);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v25 = (int)log_buffer;
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v18);
      }
      LOBYTE(v32) = 1;
      Outpop::Utility::Lock::unlock(v6);
    }
    v5 = a4;
  }
  LOBYTE(v32) = 0;
  if ( this )
    Outpop::Utility::Ref_Object::release(this);
  v32 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return v5;
}
