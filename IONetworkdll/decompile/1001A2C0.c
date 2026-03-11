/*
 * func-name: sub_1001A2C0
 * func-address: 0x1001a2c0
 * callers: 0x10017730, 0x1001dec0
 * callees: 0x10007400, 0x10009b30, 0x1004e861
 */

int __usercall sub_1001A2C0@<eax>(int *a1@<ebx>)
{
  Outpop::Utility::Lock *v1; // eax
  Outpop::Utility::Lock *v2; // ebp
  int v3; // eax
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // eax
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Ref_Object *v14; // ecx
  Outpop::Utility::Stream_Base *v15; // ecx
  int readable; // esi
  Outpop::Utility::Lock *v17; // eax
  Outpop::Utility::Ref_Object *v18; // edi
  char *v19; // eax
  int *v20; // eax
  int *v21; // eax
  Outpop::Utility::Stream_Base *v22; // esi
  const char *ptr; // eax
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // ebp
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  int v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *tm; // [esp-4h] [ebp-70h]
  wchar_t *v34; // [esp-4h] [ebp-70h]
  DWORD CurrentProcessId; // [esp+0h] [ebp-6Ch]
  DWORD v36; // [esp+0h] [ebp-6Ch]
  DWORD CurrentThreadId; // [esp+4h] [ebp-68h]
  DWORD v38; // [esp+4h] [ebp-68h]
  DWORD v39; // [esp+8h] [ebp-64h] BYREF
  int v40; // [esp+Ch] [ebp-60h]
  int v41; // [esp+10h] [ebp-5Ch]
  Outpop::Utility::Ref_Object *v42; // [esp+14h] [ebp-58h] BYREF
  int v43; // [esp+18h] [ebp-54h]
  Outpop::Utility::Lock *v44; // [esp+24h] [ebp-48h]
  int v45; // [esp+28h] [ebp-44h] BYREF
  DWORD LastError; // [esp+2Ch] [ebp-40h]
  Outpop::Utility::Ref_Object *v47; // [esp+30h] [ebp-3Ch]
  char v48[28]; // [esp+34h] [ebp-38h] BYREF
  char Buffer; // [esp+50h] [ebp-1Ch] BYREF
  int v50; // [esp+51h] [ebp-1Bh]
  int v51; // [esp+55h] [ebp-17h]
  char v52; // [esp+59h] [ebp-13h]
  int v53; // [esp+68h] [ebp-4h]

  if ( *((_BYTE *)a1 + 76) )
  {
    v1 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v2 = v1;
    v44 = v1;
    v53 = 0;
    if ( v1 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v1, 1024);
      *(_DWORD *)v2 = &Outpop::Utility::Binary_Stream::`vftable';
    }
    else
    {
      v2 = 0;
    }
    v53 = -1;
    v44 = v2;
    if ( v2 )
      Outpop::Utility::Ref_Object::addref(v2);
    v53 = 1;
    v41 = 0;
    v40 = 8;
    v45 = (int)&v39;
    v39 = (DWORD)v2;
    if ( v2 )
      Outpop::Utility::Ref_Object::addref(v2);
    LOBYTE(v53) = 2;
    v3 = *a1;
    LOBYTE(v53) = 1;
    if ( (*(int (__thiscall **)(int *, DWORD, int, int))(v3 + 4))(a1, v39, v40, v41) == -1 )
    {
      LastError = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v45 = Outpop::Utility::Logger::instance() + 144;
        Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v45);
        LOBYTE(v53) = 3;
        v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
        v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v41 = 261;
        v40 = (int)L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h";
        v7 = v6;
        v39 = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v9);
        v11 = sub_10007400(
                0xFFFF - v7,
                &log_buffer[v7],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId);
        sub_10007400(
          0xFFFF - (v11 + v7),
          &log_buffer[v11 + v7],
          L"Simple_Wait_Stream_Channel first_process error: %d",
          LastError);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v41 = (int)log_buffer;
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v12);
        }
        LOBYTE(v53) = 1;
        Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v45);
      }
      (*(void (__thiscall **)(int *))(*a1 + 12))(a1);
      v53 = -1;
      if ( v2 )
        Outpop::Utility::Ref_Object::release(v2);
      return -1;
    }
    v53 = -1;
    if ( v2 )
    {
      v14 = v2;
LABEL_48:
      Outpop::Utility::Ref_Object::release(v14);
      return 0;
    }
    return 0;
  }
  v15 = (Outpop::Utility::Stream_Base *)a1[38];
  readable = 0;
  if ( v15 )
    readable = Outpop::Utility::Stream_Base::get_readable(v15);
  v17 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v18 = v17;
  v44 = v17;
  v53 = 4;
  if ( v17 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v17, readable + 32);
    *(_DWORD *)v18 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v18 = 0;
  }
  v53 = -1;
  v47 = v18;
  if ( v18 )
    Outpop::Utility::Ref_Object::addref(v18);
  v53 = 5;
  v45 = 1001;
  Buffer = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v19 = itoa(1001, &Buffer, 10);
  std::string::string(v48, v19);
  LOBYTE(v53) = 6;
  Outpop::Utility::Stream_Base::write(v18, &Buffer, strlen(&Buffer));
  Outpop::Utility::Stream_Base::move_write_pos(v18, 4);
  v20 = sub_10009B30((int *)v18, (const char *)&v45);
  v21 = sub_10009B30(v20, (const char *)a1 + 144);
  sub_10009B30(v21, (const char *)a1 + 148);
  if ( a1[38] )
  {
    v22 = (Outpop::Utility::Stream_Base *)a1[38];
    Outpop::Utility::Stream_Base::get_readable(v22);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v22);
    Outpop::Utility::Stream_Base::write(v18, ptr, v42);
  }
  v24 = Outpop::Utility::Stream_Base::get_readable(v18) - 8;
  *((_DWORD *)Outpop::Utility::Stream_Base::get_base_ptr(v18) + 1) = v24;
  v43 = Outpop::Utility::Stream_Base::get_readable(v18);
  v47 = (Outpop::Utility::Ref_Object *)&v42;
  v42 = v18;
  if ( v18 )
    Outpop::Utility::Ref_Object::addref(v18);
  if ( (*(int (__thiscall **)(int *, Outpop::Utility::Ref_Object *, int))(*a1 + 8))(a1, v42, v43) != -1 )
  {
    LOBYTE(v53) = 5;
    std::string::~string(v48);
    v53 = -1;
    if ( v18 )
    {
      v14 = v18;
      goto LABEL_48;
    }
    return 0;
  }
  LastError = GetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v44);
    LOBYTE(v53) = 8;
    v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::get_log_buffer(v25);
    v27 = sub_10007400(0xFFFFu, v26, L"\n%s", L"LOG_ERROR");
    v39 = GetLastError();
    v38 = GetCurrentThreadId();
    v36 = GetCurrentProcessId();
    v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v34 = Outpop::Utility::Logger::make_tm(v28);
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v30 = Outpop::Utility::Logger::make_dt(v29);
    v31 = sub_10007400(
            0xFFFF - v27,
            &v26[v27],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v30,
            v34,
            v36,
            v38,
            v39,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
            299);
    sub_10007400(
      0xFFFF - (v31 + v27),
      &v26[v31 + v27],
      L"Simple_Wait_Stream_Channel first_process error: %d",
      LastError);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v26);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v41 = (int)v26;
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v32);
    }
    LOBYTE(v53) = 6;
    Outpop::Utility::Lock::unlock(v44);
  }
  (*(void (__thiscall **)(int *))(*a1 + 12))(a1);
  LOBYTE(v53) = 5;
  std::string::~string(v48);
  v53 = -1;
  if ( v18 )
    Outpop::Utility::Ref_Object::release(v18);
  return -1;
}
