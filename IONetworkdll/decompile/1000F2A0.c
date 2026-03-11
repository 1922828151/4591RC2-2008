/*
 * func-name: ?send@Stream_Channel@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1000f2a0
 * callers: none
 * callees: 0x10007400, 0x100091d0, 0x1000ac30, 0x1000cc60, 0x10015700
 */

void __thiscall Outpop::IONetwork::Stream_Channel::send(int this, Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Thread_Mutex *v3; // ebx
  bool v4; // al
  Outpop::Utility::Stream_Base *v5; // ebx
  int v6; // eax
  Outpop::Utility::Stream_Base *v7; // esi
  const char *v8; // eax
  Outpop::Utility::Stream_Base **v9; // ebx
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // ebx
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Stream_Base *v18; // ebx
  int totallength; // eax
  Outpop::Utility::Ref_Object *v20; // esi
  const char *ptr; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // ebx
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  Outpop::Utility::Logger *v29; // eax
  SOCKET *v30; // esi
  int v31; // eax
  int v32; // eax
  Outpop::Utility::Thread_Mutex *v33; // ecx
  LONG v34; // eax
  wchar_t *tm; // [esp-10h] [ebp-5Ch]
  wchar_t *v36; // [esp-10h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-58h]
  DWORD v38; // [esp-Ch] [ebp-58h]
  DWORD CurrentThreadId; // [esp-8h] [ebp-54h]
  DWORD v40; // [esp-8h] [ebp-54h]
  DWORD LastError; // [esp-4h] [ebp-50h]
  DWORD v42; // [esp-4h] [ebp-50h]
  int v43; // [esp+0h] [ebp-4Ch] BYREF
  wchar_t *v44; // [esp+4h] [ebp-48h]
  int v45; // [esp+8h] [ebp-44h]
  int v46; // [esp+1Ch] [ebp-30h]
  Outpop::Utility::Ref_Object *v47; // [esp+20h] [ebp-2Ch]
  Outpop::Utility::Stream_Base *v48; // [esp+24h] [ebp-28h] BYREF
  Outpop::Utility::Ref_Object *v49; // [esp+28h] [ebp-24h] BYREF
  Outpop::Utility::Lock *v50; // [esp+2Ch] [ebp-20h] BYREF
  Outpop::Utility::Stream_Base *v51; // [esp+30h] [ebp-1Ch] BYREF
  Outpop::Utility::Thread_Mutex *v52; // [esp+34h] [ebp-18h]
  int v53; // [esp+38h] [ebp-14h]
  int v54; // [esp+48h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v52 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132));
  v53 = v4 - 1;
  v54 = 0;
  if ( v4 )
  {
    if ( *(_BYTE *)(this + 209) )
    {
      *(_BYTE *)(this + 209) = 0;
      v54 = -1;
      v53 = -1;
      Outpop::Utility::Thread_Mutex::release(v3);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v50 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v50);
        v54 = 5;
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
        v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v13);
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v14);
        v16 = sub_10007400(
                0xFFFF - v12,
                &log_buffer[v12],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                164);
        sub_10007400(
          0xFFFF - (v16 + v12),
          &log_buffer[v16 + v12],
          L" Stream_Channel::send(Smart_Ptr<Binary_Stream>& pstream) id  is %d",
          *(_DWORD *)(this + 112));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v44 = log_buffer;
          v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v17);
        }
        v54 = -1;
        Outpop::Utility::Lock::unlock(v50);
      }
      v18 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v51 = v18;
      v54 = 6;
      if ( v18 )
      {
        totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
        Outpop::Utility::Binary_Stream::Binary_Stream(v18, totallength + 30);
        *(_DWORD *)v18 = &Outpop::Utility::Binary_Stream::`vftable';
        v47 = v18;
      }
      else
      {
        v47 = 0;
        v18 = 0;
      }
      v54 = -1;
      v48 = v18;
      if ( v18 )
        Outpop::Utility::Ref_Object::addref(v18);
      v54 = 7;
      Outpop::Utility::Binary_Stream::set_all_protepoty(v18, a2);
      Outpop::Utility::Stream_Base::move_write_pos(v18, 10);
      Outpop::Utility::Stream_Base::move_read_pos(v18, 10);
      v20 = *a2;
      v49 = v20;
      if ( v20 )
        Outpop::Utility::Ref_Object::addref(v20);
      LOBYTE(v54) = 8;
      while ( v20 )
      {
        Outpop::Utility::Stream_Base::get_readable(v20);
        ptr = Outpop::Utility::Stream_Base::get_read_ptr(v20);
        Outpop::Utility::Stream_Base::write(v18, ptr, v45);
        v50 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::cont(v20, &v51);
        LOBYTE(v54) = 9;
        Outpop::Utility::Ref_Object::release(v20);
        v20 = *(Outpop::Utility::Ref_Object **)v50;
        v49 = *(Outpop::Utility::Ref_Object **)v50;
        if ( v49 )
          Outpop::Utility::Ref_Object::addref(v20);
        LOBYTE(v54) = 8;
        if ( v51 )
          Outpop::Utility::Ref_Object::release(v51);
      }
      LOBYTE(v54) = 7;
      if ( !*(_BYTE *)(this + 192)
        || (Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132)),
            HIBYTE(v46) = Outpop::IONetwork::Security_Processer::process(
                            &v48,
                            *(_DWORD *)(this + 204),
                            *(unsigned __int8 *)(this + 193)),
            Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 132)),
            HIBYTE(v46)) )
      {
        Outpop::IONetwork::Stream_Protocol_Head_Process::make_head(
          &v51,
          &v48,
          0,
          *(unsigned __int8 *)(this + 193),
          *(_BYTE *)(this + 192),
          *(_DWORD *)(this + 160));
        LOBYTE(v54) = 7;
        if ( v51 )
          Outpop::Utility::Ref_Object::release(v51);
        Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132));
        v44 = 0;
        v51 = (Outpop::Utility::Stream_Base *)&v43;
        v43 = this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v54) = 12;
        v30 = (SOCKET *)(this + 196);
        v31 = Outpop::Utility::Stream_Base::get_totallength(v18);
        LOBYTE(v54) = 7;
        v32 = sub_10015700(this + 196, &v48, v31, v43, v44);
        v33 = (Outpop::Utility::Thread_Mutex *)(this + 132);
        if ( v32 == -1 )
        {
          Outpop::Utility::Thread_Mutex::release(v33);
          *(_DWORD *)(this + 108) = GetLastError();
          if ( *v30 != -1 )
          {
            closesocket(*v30);
            *v30 = -1;
          }
        }
        else
        {
          Outpop::Utility::Thread_Mutex::release(v33);
          v34 = Outpop::Utility::Stream_Base::get_totallength(v18);
          InterlockedExchangeAdd((volatile LONG *)(this + 188), v34);
        }
        v54 = -1;
      }
      else
      {
        v51 = (Outpop::Utility::Stream_Base *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v50 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v50);
          LOBYTE(v54) = 10;
          v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v23 = Outpop::Utility::Logger::get_log_buffer(v22);
          v24 = sub_10007400(0xFFFFu, v23, L"\n%s", L"LOG_ERROR");
          v42 = GetLastError();
          v40 = GetCurrentThreadId();
          v38 = GetCurrentProcessId();
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v36 = Outpop::Utility::Logger::make_tm(v25);
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v27 = Outpop::Utility::Logger::make_dt(v26);
          v28 = sub_10007400(
                  0xFFFF - v24,
                  &v23[v24],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v27,
                  v36,
                  v38,
                  v40,
                  v42,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                  183);
          sub_10007400(
            0xFFFF - (v28 + v24),
            &v23[v28 + v24],
            L"Stream_Channel::send(Smart_Ptr<Binary_Stream>& pstream)  process  Error:%d",
            v51);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v23);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v44 = v23;
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v29);
          }
          LOBYTE(v54) = 7;
          Outpop::Utility::Lock::unlock(v50);
          v18 = v47;
        }
        if ( *(_DWORD *)(this + 196) != -1 )
        {
          closesocket(*(_DWORD *)(this + 196));
          *(_DWORD *)(this + 196) = -1;
        }
        v54 = -1;
      }
      if ( v18 )
        Outpop::Utility::Ref_Object::release(v18);
    }
    else
    {
      v5 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v51 = v5;
      LOBYTE(v54) = 1;
      if ( v5 )
      {
        v6 = Outpop::Utility::Stream_Base::get_totallength(*a2);
        Outpop::Utility::Binary_Stream::Binary_Stream(v5, v6 + 30);
        *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
        v47 = v5;
      }
      else
      {
        v47 = 0;
        v5 = 0;
      }
      LOBYTE(v54) = 0;
      v50 = v5;
      if ( v5 )
        Outpop::Utility::Ref_Object::addref(v5);
      LOBYTE(v54) = 2;
      Outpop::Utility::Stream_Base::move_write_pos(v5, 10);
      Outpop::Utility::Stream_Base::move_read_pos(v5, 10);
      v7 = *a2;
      v48 = v7;
      if ( v7 )
        Outpop::Utility::Ref_Object::addref(v7);
      LOBYTE(v54) = 3;
      if ( v7 )
      {
        while ( 1 )
        {
          Outpop::Utility::Stream_Base::get_readable(v7);
          v8 = Outpop::Utility::Stream_Base::get_read_ptr(v7);
          Outpop::Utility::Stream_Base::write(v5, v8, v45);
          v9 = (Outpop::Utility::Stream_Base **)Outpop::Utility::Binary_Stream::cont(v7, &v49);
          LOBYTE(v54) = 4;
          Outpop::Utility::Ref_Object::release(v7);
          v7 = *v9;
          v48 = *v9;
          if ( v48 )
            Outpop::Utility::Ref_Object::addref(v7);
          LOBYTE(v54) = 3;
          if ( v49 )
            Outpop::Utility::Ref_Object::release(v49);
          if ( !v7 )
            break;
          v5 = v47;
        }
      }
      LOBYTE(v54) = 2;
      sub_1000AC30((int)&v50, (_DWORD *)(this + 212));
      LOBYTE(v54) = 0;
      if ( v47 )
        Outpop::Utility::Ref_Object::release(v47);
      v54 = -1;
      v53 = -1;
      Outpop::Utility::Thread_Mutex::release(v52);
    }
  }
}
