/*
 * func-name: ?direct_send@Stream_Channel@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1000f010
 * callers: 0x1000ef90
 * callees: 0x10007400, 0x10015700
 */

int __thiscall Outpop::IONetwork::Stream_Channel::direct_send(int this, Outpop::Utility::Stream_Base **a2)
{
  bool v3; // al
  int totallength; // eax
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // ebx
  int v7; // eax
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  LONG v14; // eax
  wchar_t *tm; // [esp-18h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  const wchar_t *v20; // [esp-8h] [ebp-44h] BYREF
  int v21; // [esp-4h] [ebp-40h]
  int v22; // [esp+14h] [ebp-28h]
  int Error; // [esp+18h] [ebp-24h]
  const wchar_t **v24; // [esp+1Ch] [ebp-20h]
  int v25; // [esp+20h] [ebp-1Ch]
  Outpop::Utility::Thread_Mutex *v26; // [esp+24h] [ebp-18h]
  int v27; // [esp+28h] [ebp-14h]
  int v28; // [esp+38h] [ebp-4h]

  v26 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132));
  v27 = v3 - 1;
  v28 = 0;
  if ( !v3 )
    return -1;
  v22 = 0;
  v25 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v28) = 1;
  v21 = 0;
  v24 = &v20;
  v20 = (const wchar_t *)this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v28) = 2;
  totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
  LOBYTE(v28) = 1;
  if ( sub_10015700(this + 196, a2, totallength, v20, v21) == -1 )
  {
    v22 = -1;
    Error = WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v24 = (const wchar_t **)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v24);
      LOBYTE(v28) = 3;
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v21 = 130;
      v20 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp";
      v8 = v7;
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v9);
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v10);
      v12 = sub_10007400(
              0xFFFF - v8,
              &log_buffer[v8],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError);
      sub_10007400(0xFFFF - (v12 + v8), &log_buffer[v12 + v8], L"Stream_Channel::direct_send %d", Error);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v21 = (int)log_buffer;
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v13);
      }
      LOBYTE(v28) = 1;
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v24);
    }
    if ( *(_DWORD *)(this + 196) != -1 )
    {
      closesocket(*(_DWORD *)(this + 196));
      *(_DWORD *)(this + 196) = -1;
    }
  }
  else
  {
    v14 = Outpop::Utility::Stream_Base::get_totallength(*a2);
    InterlockedExchangeAdd((volatile LONG *)(this + 188), v14);
  }
  LOBYTE(v28) = 0;
  if ( this )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
  v28 = -1;
  v27 = -1;
  Outpop::Utility::Thread_Mutex::release(v26);
  return v22;
}
