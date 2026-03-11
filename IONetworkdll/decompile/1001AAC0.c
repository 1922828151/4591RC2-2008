/*
 * func-name: sub_1001AAC0
 * func-address: 0x1001aac0
 * callers: 0x10017670
 * callees: 0x10007400, 0x1001b3d0, 0x1004e856, 0x1004e98e
 */

int __fastcall sub_1001AAC0(
        unsigned int a1,
        int a2,
        SOCKET *a3,
        PVOID lpOutputBuffer,
        int a5,
        LPDWORD lpdwBytesReceived,
        struct _OVERLAPPED *a7)
{
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Ref_Object *v16; // ecx
  int v17; // esi
  int v18; // esi
  SOCKET v19; // eax
  LPOVERLAPPED v21[7]; // [esp-4h] [ebp-28h] BYREF
  int v22; // [esp+20h] [ebp-4h]

  v22 = 0;
  if ( a1 < a5 + 64 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v8);
      LOBYTE(v22) = 1;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v21[0] = (LPOVERLAPPED)Outpop::Utility::Logger::make_tm(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v12);
      v14 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, v21[0]);
      sub_10007400(0xFFFF - v14, &log_buffer[v14], L"Error asynch_acceptor  func accept space too small");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v21[0] = (LPOVERLAPPED)log_buffer;
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      LOBYTE(v22) = 0;
      Outpop::Utility::Lock::unlock(v8);
    }
    v22 = -1;
    v16 = (Outpop::Utility::Ref_Object *)a7;
    if ( !a7 )
      return -1;
    goto LABEL_24;
  }
  v17 = operator new(64);
  LOBYTE(v22) = 2;
  if ( v17 )
  {
    v21[6] = (LPOVERLAPPED)v21;
    v21[0] = a7;
    if ( a7 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a7);
    LOBYTE(v22) = 2;
    v18 = sub_1001B3D0(v17, v21[0]);
  }
  else
  {
    v18 = 0;
  }
  LOBYTE(v22) = 0;
  v19 = *(_DWORD *)(v18 + 60);
  *(_DWORD *)(v18 + 40) = a5;
  v21[0] = (LPOVERLAPPED)(v18 + 4);
  *(_DWORD *)(v18 + 44) = a1;
  *(_DWORD *)(v18 + 36) = lpOutputBuffer;
  if ( !AcceptEx(*a3, v19, lpOutputBuffer, a1 - 64, 0x20u, 0x20u, lpdwBytesReceived, v21[0]) && WSAGetLastError() != 997 )
  {
    (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    v22 = -1;
    if ( !a7 )
      return -1;
    v16 = (Outpop::Utility::Ref_Object *)a7;
LABEL_24:
    Outpop::Utility::Ref_Object::release(v16);
    return -1;
  }
  v22 = -1;
  if ( a7 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a7);
  return 0;
}
