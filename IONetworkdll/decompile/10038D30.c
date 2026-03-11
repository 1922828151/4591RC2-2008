/*
 * func-name: ?asynch_receive@Dgram_Connector@IONetwork@Outpop@@QAEHPAX@Z
 * func-address: 0x10038d30
 * callers: 0x1002d230, 0x10036c20, 0x10038060, 0x1003aa70, 0x100416b0
 * callees: 0x10007400, 0x1003c0f0
 */

int __thiscall Outpop::IONetwork::Dgram_Connector::asynch_receive(Outpop::IONetwork::Dgram_Connector *this, void *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int result; // eax
  int v5; // ebx
  Outpop::Utility::Thread_Mutex *v6; // ecx
  void (__thiscall *v7)(Outpop::Utility::Thread_Mutex *__hidden); // edi
  bool v8; // al
  Outpop::Utility::Binary_Stream *v9; // eax
  Outpop::Utility::Ref_Object *v10; // ebx
  Outpop::Utility::Lock *v11; // ebp
  Outpop::Utility::Logger *v12; // eax
  wchar_t *log_buffer; // edi
  int v14; // eax
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *dt; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *tm; // [esp-18h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-58h]
  int v23; // [esp-10h] [ebp-54h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-54h]
  DWORD LastError; // [esp-Ch] [ebp-50h]
  const wchar_t *v26; // [esp-8h] [ebp-4Ch] BYREF
  int v27; // [esp-4h] [ebp-48h]
  Outpop::Utility::Ref_Object *v28; // [esp+18h] [ebp-2Ch] BYREF
  volatile LONG *lpAddend; // [esp+1Ch] [ebp-28h]
  const wchar_t **v30; // [esp+20h] [ebp-24h]
  int v31; // [esp+24h] [ebp-20h]
  Outpop::Utility::Lock *v32; // [esp+28h] [ebp-1Ch]
  Outpop::Utility::Thread_Mutex *v33; // [esp+2Ch] [ebp-18h]
  int v34; // [esp+30h] [ebp-14h]
  int v35; // [esp+40h] [ebp-4h]

  v3 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 208);
  v30 = (const wchar_t **)((char *)this + 208);
  v31 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 208)) - 1;
  v35 = 0;
  result = -1;
  if ( v31 != -1 )
  {
    v5 = *((_DWORD *)this + 77);
    v6 = v3;
    v7 = (void (__thiscall *)(Outpop::Utility::Thread_Mutex *__hidden))Outpop::Utility::Thread_Mutex::release;
    v31 = -1;
    Outpop::Utility::Thread_Mutex::release(v6);
    v33 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 184);
    v8 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 184));
    v34 = v8 - 1;
    v35 = 1;
    if ( v8 )
    {
      lpAddend = (volatile LONG *)((char *)this + 380);
      if ( *((_DWORD *)this + 95) <= v5 + 10 )
      {
        v9 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        v10 = v9;
        v30 = (const wchar_t **)v9;
        LOBYTE(v35) = 2;
        if ( v9 )
        {
          Outpop::Utility::Binary_Stream::Binary_Stream(v9, 65500);
          *(_DWORD *)v10 = &Outpop::Utility::Binary_Stream::`vftable';
        }
        else
        {
          v10 = 0;
        }
        LOBYTE(v35) = 1;
        v28 = v10;
        if ( v10 )
          Outpop::Utility::Ref_Object::addref(v10);
        LOBYTE(v35) = 3;
        v27 = 0;
        v30 = &v26;
        v26 = (const wchar_t *)this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v35) = 4;
        v23 = *((_DWORD *)this + 29);
        LOBYTE(v35) = 3;
        if ( sub_1003C0F0(v23, (DWORD)&v28, v26, v27) == -1 )
        {
          lpAddend = (volatile LONG *)WSAGetLastError();
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
          {
            v11 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            v32 = v11;
            Outpop::Utility::Lock::lock(v11);
            LOBYTE(v35) = 5;
            v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            log_buffer = Outpop::Utility::Logger::get_log_buffer(v12);
            v14 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
            v27 = 451;
            v26 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp";
            v15 = v14;
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
                    LastError);
            sub_10007400(
              0xFFFF - (v19 + v15),
              &log_buffer[v19 + v15],
              L"Dgram_Connector::asynch_receive asynch_receive_from Error coid is:%d",
              lpAddend);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", log_buffer);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v27 = (int)log_buffer;
              v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v20);
            }
            LOBYTE(v35) = 3;
            Outpop::Utility::Lock::unlock(v11);
            v7 = (void (__thiscall *)(Outpop::Utility::Thread_Mutex *__hidden))Outpop::Utility::Thread_Mutex::release;
          }
          LOBYTE(v35) = 1;
          if ( v10 )
            Outpop::Utility::Ref_Object::release(v10);
          v35 = -1;
          v34 = -1;
          v7(v33);
          return -1;
        }
        else
        {
          InterlockedIncrement(lpAddend);
          LOBYTE(v35) = 1;
          if ( v10 )
            Outpop::Utility::Ref_Object::release(v10);
          v35 = -1;
          v34 = -1;
          Outpop::Utility::Thread_Mutex::release(v33);
          return 0;
        }
      }
      else
      {
        v35 = -1;
        v34 = -1;
        Outpop::Utility::Thread_Mutex::release(v33);
        return 0;
      }
    }
    else
    {
      return -1;
    }
  }
  return result;
}
