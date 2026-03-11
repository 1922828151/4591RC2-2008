/*
 * func-name: ?handle_read_stream@Dgram_Accept_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003ffb0
 * callers: none
 * callees: 0x10005ae0, 0x10005b00, 0x10007400, 0x10009b30, 0x1000d110, 0x1000d2f0, 0x100279d0, 0x1002a120, 0x10035dd0, 0x100407c0, 0x10040db0, 0x1004e861, 0x1004e98e, 0x1004f124
 */

void __thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::handle_read_stream(
        int this,
        Outpop::Utility::Stream_Base **a2)
{
  int v3; // eax
  int v4; // esi
  Outpop::Utility::Ref_Object *v5; // ebx
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Ref_Object *v13; // eax
  Outpop::IONetwork::Security *v14; // eax
  Outpop::Utility::Ref_Object *v15; // esi
  int readable; // eax
  Outpop::Utility::Stream_Base *v17; // esi
  const char *ptr; // eax
  Outpop::Utility::Stream_Base *v19; // esi
  char *base_ptr; // eax
  Outpop::Utility::Ref_Object *v21; // ecx
  void (__thiscall ***v22)(_DWORD, int); // ecx
  char *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // eax
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Ref_Object *v31; // [esp-40h] [ebp-78h] BYREF
  int v32; // [esp-3Ch] [ebp-74h]
  char v33; // [esp-38h] [ebp-70h] BYREF
  wchar_t *v34; // [esp-34h] [ebp-6Ch]
  wchar_t *v35; // [esp-30h] [ebp-68h]
  DWORD v36; // [esp-2Ch] [ebp-64h]
  DWORD v37; // [esp-28h] [ebp-60h]
  const wchar_t *v38; // [esp-24h] [ebp-5Ch]
  int v39; // [esp-20h] [ebp-58h]
  wchar_t *tm; // [esp-1Ch] [ebp-54h]
  DWORD CurrentProcessId; // [esp-18h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-14h] [ebp-4Ch]
  DWORD LastError; // [esp-10h] [ebp-48h]
  wchar_t *v44; // [esp-8h] [ebp-40h]
  _DWORD v45[6]; // [esp+0h] [ebp-38h] BYREF
  size_t v46; // [esp+18h] [ebp-20h] BYREF
  int v47; // [esp+1Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v48; // [esp+20h] [ebp-18h]
  Outpop::Utility::Ref_Object *v49[2]; // [esp+24h] [ebp-14h] BYREF
  int v50; // [esp+34h] [ebp-4h]
  char v51[200]; // [esp+38h] [ebp+0h] BYREF

  v49[1] = (Outpop::Utility::Ref_Object *)v45;
  v45[5] = this;
  v50 = 0;
  v47 = 0;
  Outpop::Utility::Stream_Base::move_read_pos(*a2, 1);
  v3 = sub_10035DD0((int)*a2, (char *)&v47);
  v4 = sub_10035DD0(v3, (char *)(this + 36));
  sub_10035DD0(v4, (char *)(this + 40));
  if ( v47 != 1 )
  {
    Outpop::IONetwork::Dgram_Accept_Bluider_Process::close((Outpop::IONetwork::Dgram_Accept_Bluider_Process *)this);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return;
    }
    v5 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v49[0] = v5;
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v50) = 7;
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
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
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
            476);
    sub_10007400(
      0xFFFF - (v12 + v8),
      &log_buffer[v12 + v8],
      L"Error,Accept_Bluider_Process::handle_read_stream(Stream_Type_Ref stream) step Exception,value is %d",
      v47);
LABEL_26:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v44 = log_buffer;
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v30);
    }
    LOBYTE(v50) = 0;
    Outpop::Utility::Lock::unlock(v5);
    return;
  }
  v46 = 0;
  sub_10035DD0((int)*a2, (char *)&v46);
  Outpop::Utility::Stream_Base::read(*a2, v51, v46);
  v13 = (Outpop::Utility::Ref_Object *)operator new(48);
  v49[0] = v13;
  LOBYTE(v50) = 1;
  if ( v13 )
    v14 = Outpop::IONetwork::Security::Security(v13);
  else
    v14 = 0;
  LOBYTE(v50) = 0;
  *(_DWORD *)(this + 44) = v14;
  Outpop::IONetwork::Security::first_set_rsapubkey(v14, v51, v46);
  if ( Outpop::Utility::Stream_Base::get_readable(*a2) )
  {
    v15 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v49[0] = v15;
    LOBYTE(v50) = 2;
    if ( v15 )
    {
      readable = Outpop::Utility::Stream_Base::get_readable(*a2);
      Outpop::Utility::Binary_Stream::Binary_Stream(v15, readable);
      *(_DWORD *)v15 = &Outpop::Utility::Binary_Stream::`vftable';
      v48 = v15;
    }
    else
    {
      v48 = 0;
      v15 = 0;
    }
    LOBYTE(v50) = 0;
    v49[0] = v15;
    if ( v15 )
      Outpop::Utility::Ref_Object::addref(v15);
    LOBYTE(v50) = 3;
    v17 = *a2;
    CurrentThreadId = Outpop::Utility::Stream_Base::get_readable(*a2);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v17);
    Outpop::Utility::Stream_Base::write(v48, ptr);
    sub_10005B00((Outpop::Utility::Ref_Object **)(this + 64), v49);
    LOBYTE(v50) = 0;
    if ( v48 )
      Outpop::Utility::Ref_Object::release(v48);
  }
  Outpop::Utility::Stream_Base::reset_all(*a2);
  v19 = *a2;
  tm = (wchar_t *)Outpop::Utility::Stream_Base::get_size(*a2);
  base_ptr = Outpop::Utility::Stream_Base::get_base_ptr(v19);
  memset(base_ptr, 0, (size_t)tm);
  Outpop::Utility::Stream_Base::move_write_pos(*a2, 1);
  sub_10009B30((int *)*a2, (const char *)&v47);
  v49[0] = (Outpop::Utility::Ref_Object *)&v33;
  std::string::string(&v33, v51);
  LOBYTE(v50) = 4;
  v32 = *(_DWORD *)(this + 44);
  v31 = v21;
  v48 = (Outpop::Utility::Ref_Object *)&v31;
  sub_10005AE0(a2, &v31);
  LOBYTE(v50) = 0;
  if ( (unsigned __int8)Outpop::IONetwork::Dgram_Accept_Bluider_Process::make_respond_packet(
                          v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36,
                          v37,
                          v38,
                          v39) )
  {
    v23 = Outpop::Utility::Stream_Base::get_read_ptr(*a2);
    *v23 |= 0x80u;
    if ( Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(*(_DWORD **)(this + 48), a2, this + 8, 0) != -1 )
      return;
    v49[0] = (Outpop::Utility::Ref_Object *)GetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1 )
    {
      return;
    }
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
      return;
    v5 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v48 = v5;
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v50) = 6;
    v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v24);
    v25 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    v39 = 468;
    v38 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp";
    v37 = GetLastError();
    v36 = GetCurrentThreadId();
    v35 = (wchar_t *)GetCurrentProcessId();
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v34 = Outpop::Utility::Logger::make_tm(v26);
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v28 = Outpop::Utility::Logger::make_dt(v27);
    v29 = sub_10007400(
            0xFFFF - v25,
            &log_buffer[v25],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v28);
    sub_10007400(0xFFFF - (v29 + v25), &log_buffer[v29 + v25], v35, v36);
    goto LABEL_26;
  }
  v22 = *(void (__thiscall ****)(_DWORD, int))(this + 44);
  if ( v22 )
    (**v22)(v22, 1);
  *(_DWORD *)(this + 44) = 0;
  Outpop::IONetwork::Dgram_Accept_Bluider_Process::close((Outpop::IONetwork::Dgram_Accept_Bluider_Process *)this);
}
