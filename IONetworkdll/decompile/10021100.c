/*
 * func-name: sub_10021100
 * func-address: 0x10021100
 * callers: 0x10020d90
 * callees: 0x10007400, 0x100227d0
 */

void __thiscall sub_10021100(_DWORD *this, _DWORD **a2)
{
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *v5; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Lock *v12; // ecx
  Outpop::Utility::Logger *v13; // eax
  wchar_t *log_buffer; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *dt; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // [esp-18h] [ebp-48h]
  wchar_t *tm; // [esp-18h] [ebp-48h]
  DWORD v23; // [esp-14h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD v25; // [esp-10h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD v27; // [esp-Ch] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  _DWORD v29[6]; // [esp+0h] [ebp-30h] BYREF
  Outpop::Utility::Lock *v30; // [esp+18h] [ebp-18h]
  Outpop::Utility::Ref_Object *v31[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v32; // [esp+2Ch] [ebp-4h]

  v31[1] = (Outpop::Utility::Ref_Object *)v29;
  v32 = 0;
  sub_100227D0(this, v31);
  LOBYTE(v32) = 1;
  if ( this[11] || !this[9] )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) != 1 )
    {
      goto LABEL_13;
    }
    v30 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v30);
    LOBYTE(v32) = 2;
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v13);
    v15 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v16);
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v17);
    v19 = sub_10007400(
            0xFFFF - v15,
            &log_buffer[v15],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            244);
    sub_10007400(
      0xFFFF - (v19 + v15),
      &log_buffer[v19 + v15],
      L"Wait_Stream_Channel  handle_write_stream,error is %d",
      this[11]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    LOBYTE(v32) = 1;
    v12 = v30;
    goto LABEL_12;
  }
  if ( !this[6] )
  {
    v30 = (Outpop::Utility::Lock *)GetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) != 1 )
    {
      goto LABEL_13;
    }
    v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v29[5] = v3;
    Outpop::Utility::Lock::lock(v3);
    LOBYTE(v32) = 3;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v5 = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = sub_10007400(0xFFFFu, v5, L"\n%s", L"LOG_DEBUG");
    v27 = GetLastError();
    v25 = GetCurrentThreadId();
    v23 = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v21 = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v9 = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10007400(
            0xFFFF - v6,
            &v5[v6],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v9,
            v21,
            v23,
            v25,
            v27,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            252);
    sub_10007400(0xFFFF - (v10 + v6), &v5[v10 + v6], L"Wait_Stream_Channel  handle_write_stream,error is %d", v30);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v5);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    LOBYTE(v32) = 1;
    v12 = v3;
LABEL_12:
    Outpop::Utility::Lock::unlock(v12);
LABEL_13:
    ((void (__thiscall *)(_DWORD **))(*a2)[3])(a2);
    LOBYTE(v32) = 0;
    if ( v31[0] )
      Outpop::Utility::Ref_Object::release(v31[0]);
    return;
  }
  (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object **))(*a2[21] + 8))(a2[21], v31);
  LOBYTE(v32) = 0;
  if ( v31[0] )
    Outpop::Utility::Ref_Object::release(v31[0]);
  v32 = -1;
}
