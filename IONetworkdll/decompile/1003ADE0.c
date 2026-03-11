/*
 * func-name: sub_1003ADE0
 * func-address: 0x1003ade0
 * callers: 0x10036c20
 * callees: 0x10007400, 0x10009b30, 0x10038ad0, 0x1004f124
 */

int __thiscall sub_1003ADE0(int this)
{
  Outpop::Utility::Stream_Base *v2; // eax
  Outpop::Utility::Stream_Base *v3; // ebp
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int *v7; // eax
  Outpop::Utility::Stream_Base *v8; // esi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object *v10; // ecx
  Outpop::Utility::Logger *v11; // eax
  wchar_t *log_buffer; // edi
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Lock *v19; // ebx
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // edi
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // eax
  Outpop::Utility::Logger *v27; // eax
  _DWORD *v29; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  wchar_t *v31; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD v33; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD v35; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  DWORD v37; // [esp-Ch] [ebp-40h]
  size_t space; // [esp-4h] [ebp-38h]
  Outpop::Utility::Lock *v39; // [esp+18h] [ebp-1Ch]
  DWORD v40; // [esp+18h] [ebp-1Ch]
  Outpop::Utility::Stream_Base *v41; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD v42[2]; // [esp+20h] [ebp-14h] BYREF
  int v43; // [esp+30h] [ebp-4h]

  v2 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v3 = v2;
  v41 = v2;
  v43 = 0;
  if ( v2 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v2, 512);
    *(_DWORD *)v3 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v43 = -1;
  v41 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v43 = 1;
  space = Outpop::Utility::Stream_Base::get_space(v3);
  v4 = Outpop::Utility::Stream_Base::get_write_ptr(v3);
  memset(v4, 0, space);
  v5 = Outpop::Utility::Stream_Base::get_write_ptr(v3);
  *v5 |= 0x80u;
  v6 = Outpop::Utility::Stream_Base::get_write_ptr(v3);
  *v6 &= ~2u;
  Outpop::Utility::Stream_Base::set_write_pos(v3, 1);
  v7 = sub_10009B30((int *)v3, (const char *)(this + 80));
  sub_10009B30(v7, (const char *)(this + 84));
  v8 = *(Outpop::Utility::Stream_Base **)(this + 104);
  if ( v8 )
  {
    Outpop::Utility::Stream_Base::get_readable(*(Outpop::Utility::Stream_Base **)(this + 104));
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v8);
    Outpop::Utility::Stream_Base::write(v3, ptr);
  }
  v10 = *(Outpop::Utility::Ref_Object **)(this + 88);
  if ( v10 )
    Outpop::Utility::Ref_Object::release(v10);
  *(_DWORD *)(this + 88) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v39 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v39);
    LOBYTE(v43) = 2;
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
    v13 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v14);
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v15);
    v17 = sub_10007400(
            0xFFFF - v13,
            &log_buffer[v13],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
            530);
    sub_10007400(0xFFFF - (v17 + v13), &log_buffer[v17 + v13], L"Simpl");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v18);
    }
    LOBYTE(v43) = 1;
    Outpop::Utility::Lock::unlock(v39);
  }
  if ( Outpop::IONetwork::Dgram_Connector::asynch_send_to(*(_DWORD **)(this + 72), &v41, this + 40, 0) == -1 )
  {
    v40 = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v19 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v42[0] = v19;
      Outpop::Utility::Lock::lock(v19);
      LOBYTE(v43) = 3;
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v21 = Outpop::Utility::Logger::get_log_buffer(v20);
      v22 = sub_10007400(0xFFFFu, v21, L"\n%s", L"LOG_ERROR");
      v37 = GetLastError();
      v35 = GetCurrentThreadId();
      v33 = GetCurrentProcessId();
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v31 = Outpop::Utility::Logger::make_tm(v23);
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v25 = Outpop::Utility::Logger::make_dt(v24);
      v26 = sub_10007400(
              0xFFFF - v22,
              &v21[v22],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v25,
              v31,
              v33,
              v35,
              v37,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
              534);
      sub_10007400(0xFFFF - (v26 + v22), &v21[v26 + v22], L"Simple_Wait_Stream_Channel first_process error: %d", v40);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v21);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v27);
      }
      LOBYTE(v43) = 1;
      Outpop::Utility::Lock::unlock(v19);
    }
    v43 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    return -1;
  }
  else
  {
    ntohs(*(_WORD *)(this + 54));
    v29 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v42);
    LOBYTE(v43) = 4;
    *(_DWORD *)(this + 96) = *v29;
    *(_DWORD *)(this + 100) = v29[1];
    LOBYTE(v43) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v42);
    v43 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    return 0;
  }
}
