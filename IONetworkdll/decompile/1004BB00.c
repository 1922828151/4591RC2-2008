/*
 * func-name: ?asynch_send_to@P2PUdpBuilder@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAVINET_Addr@23@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NPAX@Z
 * func-address: 0x1004bb00
 * callers: 0x10042eb0, 0x100434b0, 0x10044050, 0x10044ef0, 0x100452b0, 0x10045f80, 0x10046320
 * callees: 0x10007400, 0x1004e200, 0x1004e2b0, 0x1004f124
 */

int __thiscall Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
        _DWORD *this,
        Outpop::Utility::Stream_Base **a2,
        int a3,
        char a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11,
        const wchar_t *a12)
{
  Outpop::Utility::Binary_Stream *v13; // eax
  Outpop::Utility::Ref_Object *v14; // edi
  char *ptr; // eax
  char *v16; // eax
  size_t v17; // ecx
  Outpop::Utility::Ref_Object *v18; // ecx
  bool v19; // zf
  Outpop::Utility::Thread_Mutex *v20; // ebp
  bool v21; // al
  int totallength; // eax
  Outpop::Utility::Lock *v23; // ebx
  Outpop::Utility::Logger *v24; // eax
  wchar_t *log_buffer; // ebp
  int v26; // eax
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *dt; // eax
  int v31; // esi
  int Error; // eax
  Outpop::Utility::Logger *v33; // eax
  Outpop::Utility::Thread_Mutex *v35; // edi
  bool v36; // al
  int v37; // eax
  Outpop::Utility::Lock *v38; // ebp
  Outpop::Utility::Logger *v39; // eax
  wchar_t *v40; // edi
  int v41; // eax
  int v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // esi
  int v47; // eax
  Outpop::Utility::Logger *v48; // eax
  int v49; // [esp-18h] [ebp-50h]
  wchar_t *tm; // [esp-18h] [ebp-50h]
  int v51; // [esp-18h] [ebp-50h]
  wchar_t *v52; // [esp-18h] [ebp-50h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-4Ch]
  DWORD v54; // [esp-14h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-48h]
  DWORD v56; // [esp-10h] [ebp-48h]
  DWORD LastError; // [esp-Ch] [ebp-44h] BYREF
  const wchar_t *v58; // [esp-8h] [ebp-40h]
  int v59; // [esp-4h] [ebp-3Ch]
  size_t v60[5]; // [esp+0h] [ebp-38h] BYREF
  Outpop::Utility::Thread_Mutex *v61; // [esp+14h] [ebp-24h]
  int v62; // [esp+18h] [ebp-20h]
  DWORD *p_LastError; // [esp+1Ch] [ebp-1Ch]
  size_t *v64; // [esp+20h] [ebp-18h] BYREF
  const wchar_t *v65; // [esp+24h] [ebp-14h]
  int v66; // [esp+28h] [ebp-10h]
  int v67; // [esp+34h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]

  v66 = a3;
  v65 = a12;
  v67 = 0;
  if ( !a11 )
  {
    v13 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v14 = v13;
    v64 = (size_t *)v13;
    LOBYTE(v67) = 1;
    if ( v13 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v13, 16);
      *(_DWORD *)v14 = &Outpop::Utility::Binary_Stream::`vftable';
    }
    else
    {
      v14 = 0;
    }
    LOBYTE(v67) = 0;
    v64 = (size_t *)v14;
    if ( v14 )
      Outpop::Utility::Ref_Object::addref(v14);
    LOBYTE(v67) = 2;
    v60[0] = Outpop::Utility::Stream_Base::get_size(v14);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v14);
    memset(ptr, 0, v60[0]);
    v16 = Outpop::Utility::Stream_Base::get_write_ptr(v14);
    *v16 &= ~1u;
    Outpop::Utility::Stream_Base::move_write_pos(v14, 1);
    sub_1004E200(v60[1], v60[2]);
    v60[0] = v17;
    v18 = *a2;
    v19 = *a2 == 0;
    v64 = v60;
    v60[0] = (size_t)v18;
    if ( !v19 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(retaddr) = 2;
    Outpop::Utility::Binary_Stream::cont(v14, v60[0]);
    v20 = (Outpop::Utility::Thread_Mutex *)(this + 36);
    v61 = (Outpop::Utility::Thread_Mutex *)(this + 36);
    v62 = 0;
    v21 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 36));
    v62 = v21 - 1;
    LOBYTE(v67) = 4;
    if ( v21 )
    {
      v59 = v66;
      v58 = v65;
      p_LastError = &LastError;
      LastError = (DWORD)this;
      if ( this )
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
      LOBYTE(v67) = 5;
      totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
      v49 = this[48];
      LOBYTE(v67) = 4;
      if ( sub_1004E2B0(v49, &v64, totallength, LastError, v58, v59) == -1 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v23 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          p_LastError = (DWORD *)v23;
          Outpop::Utility::Lock::lock(v23);
          LOBYTE(v67) = 6;
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v24);
          v26 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          v59 = 232;
          v58 = L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp";
          v27 = v26;
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v28);
          v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v29);
          v31 = sub_10007400(
                  0xFFFF - v27,
                  &log_buffer[v27],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId)
              + v27;
          Error = WSAGetLastError();
          sub_10007400(0xFFFF - v31, &log_buffer[v31], L"P2PUdpBuilder::asynch_send_to  error is:%d", Error);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v59 = (int)log_buffer;
            v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v33);
          }
          LOBYTE(v67) = 4;
          Outpop::Utility::Lock::unlock(v23);
          v20 = v61;
        }
        LOBYTE(v67) = 2;
        v62 = -1;
        Outpop::Utility::Thread_Mutex::release(v20);
        LOBYTE(v67) = 0;
        if ( v14 )
          Outpop::Utility::Ref_Object::release(v14);
        v67 = -1;
        std::string::~string(&a4);
        return -1;
      }
      LOBYTE(v67) = 2;
      v62 = -1;
      Outpop::Utility::Thread_Mutex::release(v20);
      LOBYTE(v67) = 0;
      if ( v14 )
      {
        Outpop::Utility::Ref_Object::release(v14);
        v67 = -1;
        std::string::~string(&a4);
        return 0;
      }
LABEL_43:
      v67 = -1;
      std::string::~string(&a4);
      return 0;
    }
    LOBYTE(v67) = 0;
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
LABEL_28:
    v67 = -1;
    std::string::~string(&a4);
    return -1;
  }
  v35 = (Outpop::Utility::Thread_Mutex *)(this + 36);
  v61 = (Outpop::Utility::Thread_Mutex *)(this + 36);
  v36 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 36));
  v62 = v36 - 1;
  LOBYTE(v67) = 7;
  if ( !v36 )
    goto LABEL_28;
  v59 = a3;
  v58 = v65;
  p_LastError = &LastError;
  LastError = (DWORD)this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v67) = 8;
  v37 = Outpop::Utility::Stream_Base::get_totallength(*a2);
  v51 = this[48];
  LOBYTE(v67) = 7;
  if ( sub_1004E2B0(v51, a2, v37, LastError, v58, v59) != -1 )
  {
    LOBYTE(v67) = 0;
    v62 = -1;
    Outpop::Utility::Thread_Mutex::release(v35);
    goto LABEL_43;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v38 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    p_LastError = (DWORD *)v38;
    Outpop::Utility::Lock::lock(v38);
    LOBYTE(v67) = 9;
    v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v40 = Outpop::Utility::Logger::get_log_buffer(v39);
    v41 = sub_10007400(0xFFFFu, v40, L"\n%s", L"LOG_ERROR");
    v59 = 241;
    v58 = L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp";
    v42 = v41;
    LastError = GetLastError();
    v56 = GetCurrentThreadId();
    v54 = GetCurrentProcessId();
    v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v52 = Outpop::Utility::Logger::make_tm(v43);
    v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v45 = Outpop::Utility::Logger::make_dt(v44);
    v46 = sub_10007400(
            0xFFFF - v42,
            &v40[v42],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v45,
            v52,
            v54,
            v56)
        + v42;
    v47 = WSAGetLastError();
    sub_10007400(0xFFFF - v46, &v40[v46], L"P2PUdpBuilder::asynch_send_to  error is:%d", v47);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v40);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v59 = (int)v40;
      v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v48);
    }
    LOBYTE(v67) = 7;
    Outpop::Utility::Lock::unlock(v38);
    v35 = v61;
  }
  LOBYTE(v67) = 0;
  v62 = -1;
  Outpop::Utility::Thread_Mutex::release(v35);
  v67 = -1;
  std::string::~string(&a4);
  return -1;
}
