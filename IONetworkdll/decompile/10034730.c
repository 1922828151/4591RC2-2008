/*
 * func-name: sub_10034730
 * func-address: 0x10034730
 * callers: 0x10033cf0, 0x10033f30
 * callees: 0x10007400, 0x10034e50, 0x1004a2a0, 0x1004e98e
 */

char __stdcall sub_10034730(int a1, unsigned __int16 a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Thread_Mutex *v3; // esi
  bool v4; // al
  Outpop::Utility::Lock *v5; // edi
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // ecx
  int v14; // edi
  Outpop::Utility::Ref_Object *v15; // ecx
  bool v16; // zf
  int v17; // eax
  wchar_t *tm; // [esp-4h] [ebp-44h] BYREF
  _DWORD v20[2]; // [esp+14h] [ebp-2Ch] BYREF
  Outpop::Utility::Thread_Mutex *v21; // [esp+1Ch] [ebp-24h]
  int v22; // [esp+20h] [ebp-20h]
  _BYTE v23[16]; // [esp+24h] [ebp-1Ch] BYREF
  int v24; // [esp+3Ch] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v21 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  v22 = v4 - 1;
  v24 = 0;
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v24) = 1;
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10007400(
      0xFFFF - v11,
      &log_buffer[v11],
      L"channel   %d     send     packet     relible id is:%d",
      *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112),
      a2);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      tm = log_buffer;
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v12);
    }
    LOBYTE(v24) = 0;
    Outpop::Utility::Lock::unlock(v5);
    v3 = v21;
  }
  v14 = operator new(20);
  LOBYTE(v24) = 2;
  if ( v14 )
  {
    tm = v13;
    v15 = *a3;
    v16 = *a3 == 0;
    v20[0] = &tm;
    tm = (wchar_t *)v15;
    if ( !v16 )
      Outpop::Utility::Ref_Object::addref(v15);
    LOBYTE(v24) = 2;
    v17 = sub_1004A2A0(v14, tm);
  }
  else
  {
    v17 = 0;
  }
  LOBYTE(v24) = 0;
  v20[1] = v17;
  LOWORD(v20[0]) = a2;
  sub_10034E50(a1, v23, v20);
  v24 = -1;
  v22 = -1;
  Outpop::Utility::Thread_Mutex::release(v3);
  return 1;
}
