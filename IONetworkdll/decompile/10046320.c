/*
 * func-name: ?process_test_packet@P2P_Channel@IONetwork@Outpop@@QAEXV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10046320
 * callers: 0x10044a00
 * callees: 0x10007400, 0x10009580, 0x10009930, 0x1004bb00
 */

void __thiscall Outpop::IONetwork::P2P_Channel::process_test_packet(int this, Outpop::Utility::Stream_Base *a2)
{
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // ebp
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // esi
  u_short v10; // bx
  char *v11; // eax
  Outpop::Utility::Stream_Base *v12; // edx
  bool v13; // cf
  wchar_t *v14; // ecx
  _DWORD (__thiscall *v15)(Outpop::Utility::Stream_Base *__hidden); // ebx
  int readable; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Stream_Base *v18; // esi
  int v19; // eax
  Outpop::Utility::Stream_Base *v20; // ebp
  const char *ptr; // eax
  char v22[8]; // [esp-24h] [ebp-54h] BYREF
  int v23; // [esp-1Ch] [ebp-4Ch]
  wchar_t *tm; // [esp-18h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  char *v28; // [esp-8h] [ebp-38h]
  wchar_t *v29; // [esp-4h] [ebp-34h]
  char v30; // [esp+17h] [ebp-19h] BYREF
  Outpop::Utility::Stream_Base *v31; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  Outpop::Utility::Stream_Base *v33; // [esp+20h] [ebp-10h] BYREF
  int v34; // [esp+2Ch] [ebp-4h]

  v34 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v33 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v33);
    LOBYTE(v34) = 1;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(
           0xFFFF - v5,
           &log_buffer[v5],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
           807)
       + v5;
    v10 = ntohs(*(_WORD *)(this + 94));
    v11 = inet_ntoa(*(struct in_addr *)(this + 96));
    if ( *(_DWORD *)(this + 688) < 0x10u )
      v12 = (Outpop::Utility::Stream_Base *)(this + 668);
    else
      v12 = *(Outpop::Utility::Stream_Base **)(this + 668);
    v13 = *(_DWORD *)(this + 660) < 0x10u;
    v31 = v12;
    if ( v13 )
      v32 = this + 640;
    else
      v32 = *(_DWORD *)(this + 640);
    v14 = (wchar_t *)v10;
    v15 = Outpop::Utility::Stream_Base::get_readable;
    v29 = v14;
    v28 = v11;
    readable = Outpop::Utility::Stream_Base::get_readable(a2);
    sub_10007400(
      0xFFFF - v9,
      &log_buffer[v9],
      L"P2P_Channel::process_test_packet localname is %S,remotename  is %S  stream len is %d,channel remote ip  is %S, port is %d",
      v32,
      v31,
      readable,
      v28,
      v29);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v29 = log_buffer;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v17);
    }
    LOBYTE(v34) = 0;
    Outpop::Utility::Lock::unlock(v33);
  }
  else
  {
    v15 = Outpop::Utility::Stream_Base::get_readable;
  }
  v18 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v33 = v18;
  LOBYTE(v34) = 2;
  if ( v18 )
  {
    v19 = v15(*(Outpop::Utility::Stream_Base **)(this + 696));
    Outpop::Utility::Binary_Stream::Binary_Stream(v18, v19 + 16);
    *(_DWORD *)v18 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v18 = 0;
  }
  LOBYTE(v34) = 0;
  v31 = v18;
  if ( v18 )
    Outpop::Utility::Ref_Object::addref(v18);
  LOBYTE(v34) = 3;
  v30 = 3;
  sub_10009930((int *)v18, &v30);
  v20 = *(Outpop::Utility::Stream_Base **)(this + 696);
  v15(v20);
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(v20);
  Outpop::Utility::Stream_Base::write(v18, ptr);
  Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&v33, &v31, 3, 0, 0, 0, 0);
  LOBYTE(v34) = 3;
  if ( v33 )
    Outpop::Utility::Ref_Object::release(v33);
  if ( *(_DWORD *)(this + 180) )
  {
    v29 = 0;
    v28 = 0;
    v33 = (Outpop::Utility::Stream_Base *)v22;
    std::string::string(this + 636);
    LOBYTE(v34) = 3;
    Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
      &v31,
      this + 80,
      v22[0],
      v22[4],
      v23,
      tm,
      CurrentProcessId,
      CurrentThreadId,
      LastError,
      (char)v28,
      v29);
  }
  LOBYTE(v34) = 0;
  if ( v31 )
    Outpop::Utility::Ref_Object::release(v31);
  v34 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
