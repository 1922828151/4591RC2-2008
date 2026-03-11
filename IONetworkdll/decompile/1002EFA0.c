/*
 * func-name: ?send_unite_quence@Dgram_Channel@IONetwork@Outpop@@QAEHAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1002efa0
 * callers: 0x1002d330, 0x1002e210, 0x10031010, 0x10031810
 * callees: 0x10007400, 0x100279d0, 0x10038ad0
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::send_unite_quence(int this, int a2)
{
  int v3; // edi
  Outpop::Utility::Ref_Object **v4; // ebx
  Outpop::Utility::Stream_Base *v5; // eax
  bool v6; // cc
  bool v7; // cf
  int v8; // eax
  Outpop::Utility::Stream_Base *v9; // ecx
  Outpop::Utility::Stream_Base **v10; // ebx
  Outpop::Utility::Stream_Base *totallength; // eax
  Outpop::Utility::Stream_Base *v12; // ecx
  int v13; // eax
  ULONG v14; // ecx
  Outpop::Utility::Ref_Object *v15; // ecx
  bool v16; // zf
  Outpop::Utility::Ref_Object *v17; // ecx
  int v18; // ebx
  Outpop::Utility::Ref_Object **v19; // edi
  Outpop::Utility::Ref_Object *v20; // ecx
  Outpop::Utility::Logger *v21; // eax
  wchar_t *log_buffer; // ebx
  int v23; // eax
  int v24; // edi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *dt; // eax
  int v28; // edi
  u_short v29; // ax
  struct in_addr v30; // ecx
  char *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Stream_Base **v33; // edi
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // ebx
  int v36; // eax
  int v37; // edi
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Logger *v39; // eax
  wchar_t *v40; // eax
  int v41; // edi
  u_short v42; // ax
  char *v43; // eax
  u_short v44; // ax
  char *v45; // eax
  Outpop::Utility::Logger *v46; // eax
  Outpop::Utility::Ref_Object **v47; // edi
  int v48; // ebx
  Outpop::Utility::Ref_Object **v49; // edi
  Outpop::Utility::Ref_Object *v50; // ecx
  Outpop::Utility::Logger *v51; // eax
  wchar_t *v52; // ebx
  int v53; // eax
  int v54; // edi
  Outpop::Utility::Logger *v55; // eax
  Outpop::Utility::Logger *v56; // eax
  wchar_t *v57; // eax
  int v58; // edi
  u_short v59; // ax
  struct in_addr v60; // ecx
  char *v61; // eax
  Outpop::Utility::Logger *v62; // eax
  int v63; // ebx
  Outpop::Utility::Stream_Base **v64; // edi
  Outpop::Utility::Logger *v65; // eax
  wchar_t *v66; // ebx
  int v67; // eax
  int v68; // edi
  Outpop::Utility::Logger *v69; // eax
  Outpop::Utility::Logger *v70; // eax
  wchar_t *v71; // eax
  int v72; // edi
  u_short v73; // ax
  char *v74; // eax
  u_short v75; // ax
  char *v76; // eax
  Outpop::Utility::Logger *v77; // eax
  int v78; // ebx
  Outpop::Utility::Ref_Object **v79; // edi
  wchar_t *tm; // [esp-18h] [ebp-64h]
  wchar_t *v82; // [esp-18h] [ebp-64h]
  wchar_t *v83; // [esp-18h] [ebp-64h]
  wchar_t *v84; // [esp-18h] [ebp-64h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-60h]
  DWORD v86; // [esp-14h] [ebp-60h]
  DWORD v87; // [esp-14h] [ebp-60h]
  DWORD v88; // [esp-14h] [ebp-60h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-5Ch]
  DWORD v90; // [esp-10h] [ebp-5Ch]
  DWORD v91; // [esp-10h] [ebp-5Ch]
  DWORD v92; // [esp-10h] [ebp-5Ch]
  DWORD LastError; // [esp-Ch] [ebp-58h]
  DWORD v94; // [esp-Ch] [ebp-58h]
  int v95; // [esp-Ch] [ebp-58h]
  DWORD v96; // [esp-Ch] [ebp-58h]
  DWORD v97; // [esp-Ch] [ebp-58h]
  int v98; // [esp-Ch] [ebp-58h]
  struct in_addr *v99; // [esp-8h] [ebp-54h]
  struct in_addr *v100; // [esp-8h] [ebp-54h]
  struct in_addr v101[6]; // [esp-4h] [ebp-50h] BYREF
  Outpop::Utility::Stream_Base *v102; // [esp+14h] [ebp-38h]
  Outpop::Utility::Lock *v103; // [esp+18h] [ebp-34h]
  struct in_addr *v104; // [esp+1Ch] [ebp-30h]
  Outpop::Utility::Lock *v105; // [esp+20h] [ebp-2Ch]
  int v106; // [esp+24h] [ebp-28h]
  Outpop::Utility::Ref_Object **v107; // [esp+28h] [ebp-24h]
  int v108; // [esp+2Ch] [ebp-20h]
  Outpop::Utility::Ref_Object **v109; // [esp+30h] [ebp-1Ch]
  Outpop::Utility::Ref_Object **v110; // [esp+38h] [ebp-14h]
  int v111; // [esp+48h] [ebp-4h]

  v3 = a2;
  v4 = *(Outpop::Utility::Ref_Object ***)(a2 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v5 = *(Outpop::Utility::Stream_Base **)(a2 + 4);
  v6 = (unsigned int)v5 <= *(_DWORD *)(a2 + 8);
  v106 = a2;
  v107 = v4;
  v102 = v5;
  if ( !v6 )
  {
    invalid_parameter_noinfo();
    v5 = v102;
  }
  v109 = (Outpop::Utility::Ref_Object **)v5;
  v110 = v4;
  while ( 1 )
  {
    v7 = (unsigned int)v4 < *(_DWORD *)(v3 + 8);
    v108 = v3;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = a2;
    v9 = *(Outpop::Utility::Stream_Base **)(a2 + 8);
    v10 = v4 + 1;
    v6 = *(_DWORD *)(a2 + 4) <= (unsigned int)v9;
    v110 = v10;
    v102 = v9;
    if ( !v6 )
    {
      invalid_parameter_noinfo();
      v8 = a2;
    }
    if ( v3 != v8 )
      invalid_parameter_noinfo();
    if ( v10 == (Outpop::Utility::Stream_Base **)v102 )
      break;
    if ( !v106 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 8) )
      invalid_parameter_noinfo();
    v7 = (unsigned int)v10 < *(_DWORD *)(v3 + 8);
    v102 = *v107;
    if ( !v7 )
      invalid_parameter_noinfo();
    totallength = (Outpop::Utility::Stream_Base *)Outpop::Utility::Stream_Base::get_totallength(*v10);
    v12 = v102;
    v102 = totallength;
    v13 = Outpop::Utility::Stream_Base::get_totallength(v12);
    v14 = (ULONG)v102 + v13;
    if ( (int)v102 + v13 >= 65400 )
    {
      v104 = v101;
      v101[0].S_un.S_addr = 0;
      v111 = 4;
      v18 = v108;
      if ( !v108 )
        invalid_parameter_noinfo();
      v19 = v109;
      if ( (unsigned int)v109 >= *(_DWORD *)(v18 + 8) )
        invalid_parameter_noinfo();
      v20 = *v19;
      v111 = -1;
      Outpop::Utility::Binary_Stream::cont(v20, v101[0].S_un.S_addr);
      if ( *(_DWORD *)(this + 184) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v103 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v103);
          v111 = 5;
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
          v23 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
          v101[0].S_un.S_addr = 502;
          v24 = v23;
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v25);
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v26);
          v28 = sub_10007400(
                  0xFFFF - v24,
                  &log_buffer[v24],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp")
              + v24;
          v29 = ntohs(*(_WORD *)(this + 94));
          v30 = *(struct in_addr *)(this + 96);
          v101[0].S_un.S_addr = v29;
          v31 = inet_ntoa(v30);
          sub_10007400(0xFFFF - v28, &log_buffer[v28], L"acceptor_->asynch_send_to  remoteaddr is %S,port is %d", v31);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v101[0].S_un.S_addr = (ULONG)log_buffer;
            v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v32);
          }
          v111 = -1;
          Outpop::Utility::Lock::unlock(v103);
        }
        v33 = v107;
        v4 = v110;
        if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 8) )
          invalid_parameter_noinfo();
        Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(*(_DWORD **)(this + 184), v33, this + 80, 0);
        v3 = a2;
        v106 = a2;
        v107 = v4;
        v109 = v4;
      }
      else if ( *(_DWORD *)(this + 188) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v105 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v105);
          v111 = 6;
          v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v35 = Outpop::Utility::Logger::get_log_buffer(v34);
          v36 = sub_10007400(0xFFFFu, v35, L"\n%s", L"LOG_DEBUG");
          v101[0].S_un.S_addr = 507;
          v37 = v36;
          v94 = GetLastError();
          v90 = GetCurrentThreadId();
          v86 = GetCurrentProcessId();
          v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v82 = Outpop::Utility::Logger::make_tm(v38);
          v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v40 = Outpop::Utility::Logger::make_dt(v39);
          v41 = sub_10007400(
                  0xFFFF - v37,
                  &v35[v37],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v40,
                  v82,
                  v86,
                  v90,
                  v94,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp")
              + v37;
          v42 = ntohs(*(_WORD *)(this + 66));
          v101[0] = *(struct in_addr *)(this + 68);
          v102 = (Outpop::Utility::Stream_Base *)v42;
          v43 = inet_ntoa(v101[0]);
          v101[0].S_un.S_un_w.s_w1 = *(_WORD *)(this + 94);
          v104 = (struct in_addr *)v43;
          v44 = ntohs(v101[0].S_un.S_un_w.s_w1);
          v101[0].S_un.S_addr = (unsigned __int16)v102;
          v99 = v104;
          v95 = v44;
          v45 = inet_ntoa(*(struct in_addr *)(this + 96));
          sub_10007400(
            0xFFFF - v41,
            &v35[v41],
            L"connector_->asynch_send_to  remoteaddr is %S,port is %d   Loacal addr is %S,port is %d",
            v45,
            v95,
            v99);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v35);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v101[0].S_un.S_addr = (ULONG)v35;
            v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v46);
          }
          v111 = -1;
          Outpop::Utility::Lock::unlock(v105);
        }
        v47 = v107;
        v4 = v110;
        if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 8) )
          invalid_parameter_noinfo();
        Outpop::IONetwork::Dgram_Connector::asynch_send_to(v47, this + 80, 0);
        v3 = a2;
        v106 = a2;
        v107 = v4;
        v109 = v4;
      }
      else
      {
        v4 = v110;
        v3 = a2;
        v106 = a2;
        v107 = v110;
        v109 = v110;
      }
    }
    else
    {
      v4 = v110;
      if ( (unsigned int)v110 >= *(_DWORD *)(v3 + 8) )
        invalid_parameter_noinfo();
      v101[0].S_un.S_addr = v14;
      v15 = *v4;
      v16 = *v4 == 0;
      v104 = v101;
      v101[0].S_un.S_addr = (ULONG)v15;
      if ( !v16 )
        Outpop::Utility::Ref_Object::addref(v15);
      v111 = 3;
      if ( !v108 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v109 >= *(_DWORD *)(v108 + 8) )
        invalid_parameter_noinfo();
      v17 = *v109;
      v111 = -1;
      Outpop::Utility::Binary_Stream::cont(v17, v101[0].S_un.S_addr);
      v109 = v4;
    }
  }
  v105 = (Outpop::Utility::Lock *)v101;
  v101[0].S_un.S_addr = 0;
  v111 = 0;
  v48 = v108;
  if ( !v108 )
    invalid_parameter_noinfo();
  v49 = v109;
  if ( (unsigned int)v109 >= *(_DWORD *)(v48 + 8) )
    invalid_parameter_noinfo();
  v50 = *v49;
  v111 = -1;
  Outpop::Utility::Binary_Stream::cont(v50, v101[0].S_un.S_addr);
  if ( *(_DWORD *)(this + 184) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v105 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v105);
      v111 = 1;
      v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v52 = Outpop::Utility::Logger::get_log_buffer(v51);
      v53 = sub_10007400(0xFFFFu, v52, L"\n%s", L"LOG_DEBUG");
      v101[0].S_un.S_addr = 477;
      v54 = v53;
      v96 = GetLastError();
      v91 = GetCurrentThreadId();
      v87 = GetCurrentProcessId();
      v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v83 = Outpop::Utility::Logger::make_tm(v55);
      v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v57 = Outpop::Utility::Logger::make_dt(v56);
      v58 = sub_10007400(
              0xFFFF - v54,
              &v52[v54],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v57,
              v83,
              v87,
              v91,
              v96,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp")
          + v54;
      v59 = ntohs(*(_WORD *)(this + 94));
      v60 = *(struct in_addr *)(this + 96);
      v101[0].S_un.S_addr = v59;
      v61 = inet_ntoa(v60);
      sub_10007400(0xFFFF - v58, &v52[v58], L"connector_->acceptor_  remoteaddr is %S,port is %d", v61);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v52);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v101[0].S_un.S_addr = (ULONG)v52;
        v62 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v62);
      }
      v111 = -1;
      Outpop::Utility::Lock::unlock(v105);
    }
    v63 = v106;
    if ( !v106 )
      invalid_parameter_noinfo();
    v64 = v107;
    if ( (unsigned int)v107 >= *(_DWORD *)(v63 + 8) )
      invalid_parameter_noinfo();
    Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(*(_DWORD **)(this + 184), v64, this + 80, 0);
  }
  else if ( *(_DWORD *)(this + 188) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v103 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v103);
      v111 = 2;
      v65 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v66 = Outpop::Utility::Logger::get_log_buffer(v65);
      v67 = sub_10007400(0xFFFFu, v66, L"\n%s", L"LOG_DEBUG");
      v101[0].S_un.S_addr = 483;
      v68 = v67;
      v97 = GetLastError();
      v92 = GetCurrentThreadId();
      v88 = GetCurrentProcessId();
      v69 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v84 = Outpop::Utility::Logger::make_tm(v69);
      v70 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v71 = Outpop::Utility::Logger::make_dt(v70);
      v72 = sub_10007400(
              0xFFFF - v68,
              &v66[v68],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v71,
              v84,
              v88,
              v92,
              v97,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp")
          + v68;
      v73 = ntohs(*(_WORD *)(this + 66));
      v101[0] = *(struct in_addr *)(this + 68);
      v105 = (Outpop::Utility::Lock *)v73;
      v74 = inet_ntoa(v101[0]);
      v101[0].S_un.S_un_w.s_w1 = *(_WORD *)(this + 94);
      v104 = (struct in_addr *)v74;
      v75 = ntohs(v101[0].S_un.S_un_w.s_w1);
      v101[0].S_un.S_addr = (unsigned __int16)v105;
      v100 = v104;
      v98 = v75;
      v76 = inet_ntoa(*(struct in_addr *)(this + 96));
      sub_10007400(
        0xFFFF - v72,
        &v66[v72],
        L"connector_->asynch_send_to  remoteaddr is %S,port is %d   Loacal addr is %S,port is %d",
        v76,
        v98,
        v100);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v66);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v101[0].S_un.S_addr = (ULONG)v66;
        v77 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v77);
      }
      v111 = -1;
      Outpop::Utility::Lock::unlock(v103);
    }
    v78 = v106;
    if ( !v106 )
      invalid_parameter_noinfo();
    v79 = v107;
    if ( (unsigned int)v107 >= *(_DWORD *)(v78 + 8) )
      invalid_parameter_noinfo();
    Outpop::IONetwork::Dgram_Connector::asynch_send_to(v79, this + 80, 0);
  }
  return 0;
}
