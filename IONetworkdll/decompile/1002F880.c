/*
 * func-name: ?handle_read_stream@Dgram_Channel@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x1002f880
 * callers: 0x10027c50, 0x10038060
 * callees: 0x10005b00, 0x10005b50, 0x10007400, 0x1000ac30, 0x1000b090, 0x1000ce40, 0x10023520, 0x1002b5c0, 0x10030ba0, 0x10031010, 0x10032520, 0x10032740, 0x100328d0, 0x1003ba70, 0x1003c7d0, 0x1003cff0
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::handle_read_stream(
        Outpop::IONetwork::Dgram_Channel *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  bool v11; // al
  Outpop::Utility::Thread_Mutex *v12; // ebx
  bool v13; // al
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // ebx
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  int v22; // eax
  struct Outpop::IONetwork::Asynch_IO_Result *v23; // esi
  Outpop::Utility::Ref_Object **v24; // ebx
  Outpop::Utility::Ref_Object *v25; // ecx
  Outpop::Utility::Ref_Object **v26; // ebx
  Outpop::Utility::Ref_Object *v27; // ecx
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // ebx
  int v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // eax
  Outpop::Utility::Logger *v35; // eax
  int v36; // eax
  bool v37; // al
  unsigned int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // ebx
  int v46; // esi
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // eax
  int v50; // eax
  Outpop::Utility::Logger *v51; // eax
  Outpop::Utility::Thread_Mutex *v52; // esi
  _DWORD *v53; // eax
  Outpop::Utility::Time_Value *v54; // ecx
  _DWORD *v55; // eax
  Outpop::Utility::Lock *v56; // ebx
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // esi
  Outpop::Utility::Logger *v59; // eax
  Outpop::Utility::Logger *v60; // eax
  wchar_t *v61; // eax
  int v62; // eax
  Outpop::Utility::Logger *v63; // eax
  unsigned int v64; // ecx
  Outpop::Utility::Binary_Stream **v65; // esi
  Outpop::Utility::Stream_Base **v66; // eax
  Outpop::Utility::Stream_Base **v67; // esi
  Outpop::Utility::Stream_Base **v68; // ebx
  char v69; // bl
  Outpop::Utility::Logger *v70; // eax
  wchar_t *v71; // ebx
  int v72; // esi
  Outpop::Utility::Logger *v73; // eax
  Outpop::Utility::Logger *v74; // eax
  wchar_t *v75; // eax
  int v76; // eax
  Outpop::Utility::Logger *v77; // eax
  Outpop::Utility::Binary_Stream **v78; // ebx
  unsigned int v79; // eax
  Outpop::Utility::Binary_Stream **v80; // esi
  int *v81; // esi
  Outpop::Utility::Ref_Object *v82; // ebx
  Outpop::Utility::Logger *v83; // eax
  wchar_t *v84; // esi
  Outpop::Utility::Logger *v85; // eax
  Outpop::Utility::Logger *v86; // eax
  wchar_t *v87; // eax
  int v88; // eax
  Outpop::Utility::Logger *v89; // eax
  LONG (__stdcall *v90)(volatile LONG *, LONG); // esi
  Outpop::Utility::Lock *v91; // ebx
  Outpop::Utility::Logger *v92; // eax
  wchar_t *v93; // esi
  Outpop::Utility::Logger *v94; // eax
  Outpop::Utility::Logger *v95; // eax
  wchar_t *v96; // eax
  int v97; // eax
  Outpop::Utility::Logger *v98; // eax
  Outpop::Utility::Logger *v99; // eax
  wchar_t *v100; // ebx
  int v101; // esi
  Outpop::Utility::Logger *v102; // eax
  Outpop::Utility::Logger *v103; // eax
  wchar_t *v104; // eax
  int v105; // eax
  Outpop::Utility::Logger *v106; // eax
  wchar_t *v107; // [esp-8h] [ebp-F4h]
  wchar_t *v108; // [esp-8h] [ebp-F4h]
  wchar_t *v109; // [esp-8h] [ebp-F4h]
  wchar_t *v110; // [esp-8h] [ebp-F4h]
  wchar_t *v111; // [esp-8h] [ebp-F4h]
  DWORD CurrentProcessId; // [esp-4h] [ebp-F0h]
  DWORD v113; // [esp-4h] [ebp-F0h]
  DWORD v114; // [esp-4h] [ebp-F0h]
  DWORD v115; // [esp-4h] [ebp-F0h]
  DWORD v116; // [esp-4h] [ebp-F0h]
  DWORD CurrentThreadId; // [esp+0h] [ebp-ECh]
  DWORD v118; // [esp+0h] [ebp-ECh]
  DWORD v119; // [esp+0h] [ebp-ECh]
  DWORD v120; // [esp+0h] [ebp-ECh]
  DWORD v121; // [esp+0h] [ebp-ECh]
  DWORD LastError; // [esp+4h] [ebp-E8h]
  DWORD v123; // [esp+4h] [ebp-E8h]
  DWORD v124; // [esp+4h] [ebp-E8h]
  DWORD v125; // [esp+4h] [ebp-E8h]
  DWORD v126; // [esp+4h] [ebp-E8h]
  wchar_t *tm; // [esp+Ch] [ebp-E0h]
  wchar_t *v128; // [esp+Ch] [ebp-E0h]
  wchar_t *v129; // [esp+Ch] [ebp-E0h]
  wchar_t *v130; // [esp+Ch] [ebp-E0h]
  Outpop::Utility::Ref_Object *v131; // [esp+24h] [ebp-C8h] BYREF
  int v132; // [esp+28h] [ebp-C4h] BYREF
  Outpop::Utility::Binary_Stream **v133; // [esp+2Ch] [ebp-C0h]
  unsigned int v134; // [esp+30h] [ebp-BCh]
  int v135; // [esp+34h] [ebp-B8h]
  bool v136; // [esp+39h] [ebp-B3h] BYREF
  __int16 v137; // [esp+3Ah] [ebp-B2h] BYREF
  int v138; // [esp+3Ch] [ebp-B0h] BYREF
  Outpop::Utility::Lock *v139; // [esp+40h] [ebp-ACh]
  Outpop::Utility::Lock *v140; // [esp+44h] [ebp-A8h]
  Outpop::Utility::Lock *v141; // [esp+48h] [ebp-A4h]
  int v142; // [esp+4Ch] [ebp-A0h]
  Outpop::Utility::Ref_Object *v143; // [esp+50h] [ebp-9Ch] BYREF
  _DWORD v144[2]; // [esp+54h] [ebp-98h] BYREF
  Outpop::Utility::Ref_Object *v145; // [esp+5Ch] [ebp-90h] BYREF
  char *v146; // [esp+60h] [ebp-8Ch] BYREF
  int v147; // [esp+64h] [ebp-88h]
  char *v148; // [esp+68h] [ebp-84h]
  int v149; // [esp+6Ch] [ebp-80h]
  Outpop::Utility::Thread_Mutex *v150; // [esp+70h] [ebp-7Ch]
  int v151; // [esp+74h] [ebp-78h]
  int v152; // [esp+78h] [ebp-74h] BYREF
  int v153; // [esp+7Ch] [ebp-70h]
  int v154; // [esp+80h] [ebp-6Ch]
  int v155; // [esp+84h] [ebp-68h]
  Outpop::Utility::Lock *v156; // [esp+88h] [ebp-64h]
  Outpop::Utility::Lock *v157; // [esp+8Ch] [ebp-60h]
  Outpop::Utility::Ref_Object *v158[2]; // [esp+90h] [ebp-5Ch] BYREF
  Outpop::Utility::Lock *v159; // [esp+98h] [ebp-54h]
  Outpop::Utility::Lock *v160; // [esp+9Ch] [ebp-50h]
  int v161; // [esp+A0h] [ebp-4Ch] BYREF
  int v162; // [esp+A4h] [ebp-48h]
  int v163; // [esp+A8h] [ebp-44h]
  int v164; // [esp+ACh] [ebp-40h]
  Outpop::Utility::Ref_Object *v165; // [esp+B0h] [ebp-3Ch] BYREF
  Outpop::Utility::Ref_Object *v166; // [esp+B4h] [ebp-38h] BYREF
  int v167; // [esp+B8h] [ebp-34h] BYREF
  int v168; // [esp+BCh] [ebp-30h]
  int v169; // [esp+C0h] [ebp-2Ch]
  int v170; // [esp+C4h] [ebp-28h]
  _BYTE v171[8]; // [esp+C8h] [ebp-24h] BYREF
  Outpop::Utility::Lock *v172; // [esp+D0h] [ebp-1Ch]
  _BYTE v173[12]; // [esp+D4h] [ebp-18h] BYREF
  int v174; // [esp+E8h] [ebp-4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v160 = v3;
    Outpop::Utility::Lock::lock(v3);
    v174 = 0;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10007400(
      0xFFFF - v9,
      &log_buffer[v9],
      L"channel  %d  Dgram_Channel::handle_read_stream",
      *((_DWORD *)this + 28));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    v174 = -1;
    Outpop::Utility::Lock::unlock(v3);
  }
  if ( !*((_BYTE *)this + 640) )
  {
    v148 = (char *)this + 132;
    v11 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
    v149 = v11 - 1;
    v174 = 1;
    if ( !v11 )
    {
      v174 = -1;
      return;
    }
    if ( !*((_BYTE *)this + 640) )
    {
      v174 = -1;
      v149 = -1;
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
      return;
    }
    v174 = -1;
    v149 = -1;
    Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
  }
  v131 = 0;
  v174 = 2;
  if ( !*((_BYTE *)this + 620) )
  {
    v12 = (Outpop::IONetwork::Dgram_Channel *)((char *)this + 132);
    v150 = (Outpop::IONetwork::Dgram_Channel *)((char *)this + 132);
    v13 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
    v151 = v13 - 1;
    LOBYTE(v174) = 3;
    if ( !v13 )
      goto LABEL_183;
    if ( !*((_BYTE *)this + 620) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v159 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v159);
        LOBYTE(v174) = 4;
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v15 = Outpop::Utility::Logger::get_log_buffer(v14);
        v16 = sub_10007400(0xFFFFu, v15, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v107 = Outpop::Utility::Logger::make_tm(v17);
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v19 = Outpop::Utility::Logger::make_dt(v18);
        v20 = sub_10007400(
                0xFFFF - v16,
                &v15[v16],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v19,
                v107,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                539);
        sub_10007400(
          0xFFFF - (v20 + v16),
          &v15[v20 + v16],
          L"channeli  is  connect ,id  is: %d",
          *((_DWORD *)this + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v15);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v21);
        }
        LOBYTE(v174) = 3;
        Outpop::Utility::Lock::unlock(v159);
        v12 = v150;
      }
      v166 = 0;
      LOBYTE(v174) = 5;
      sub_10005B00((Outpop::Utility::Ref_Object **)this + 157, &v166);
      LOBYTE(v174) = 3;
      *((_BYTE *)this + 620) = 1;
    }
    LOBYTE(v174) = 2;
    v151 = -1;
    Outpop::Utility::Thread_Mutex::release(v12);
  }
  v22 = *((_DWORD *)this + 31);
  v142 = 0;
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_44;
    v23 = a2;
    v26 = sub_1002B5C0((int)a2, &v165);
    LOBYTE(v174) = 7;
    if ( v131 )
      Outpop::Utility::Ref_Object::release(v131);
    v27 = *v26;
    v131 = *v26;
    if ( v131 )
      Outpop::Utility::Ref_Object::addref(v27);
    LOBYTE(v174) = 2;
    if ( v165 )
      Outpop::Utility::Ref_Object::release(v165);
  }
  else
  {
    v23 = a2;
    v24 = sub_1002B5C0((int)a2, v158);
    LOBYTE(v174) = 6;
    if ( v131 )
      Outpop::Utility::Ref_Object::release(v131);
    v25 = *v24;
    v131 = *v24;
    if ( v131 )
      Outpop::Utility::Ref_Object::addref(v25);
    LOBYTE(v174) = 2;
    if ( v158[0] )
      Outpop::Utility::Ref_Object::release(v158[0]);
  }
  v142 = *((_DWORD *)v23 + 6) + InterlockedExchangeAdd((volatile LONG *)this + 43, *((_DWORD *)v23 + 6));
LABEL_44:
  v133 = 0;
  v134 = 0;
  v135 = 0;
  LOBYTE(v174) = 8;
  if ( !(unsigned __int8)Outpop::IONetwork::Dgram_Channel::parse_dgram_stream(&v132, &v131) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v139 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v139);
      LOBYTE(v174) = 9;
      v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v29 = Outpop::Utility::Logger::get_log_buffer(v28);
      v30 = sub_10007400(0xFFFFu, v29, L"\n%s", L"LOG_ERROR");
      v123 = GetLastError();
      v118 = GetCurrentThreadId();
      v113 = GetCurrentProcessId();
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v108 = Outpop::Utility::Logger::make_tm(v31);
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::make_dt(v32);
      v34 = sub_10007400(
              0xFFFF - v30,
              &v29[v30],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v33,
              v108,
              v113,
              v118,
              v123,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
              572);
      sub_10007400(
        0xFFFF - (v34 + v30),
        &v29[v34 + v30],
        L"Dgram_Channel::handle_read_stream(Asynch_IO_Result*  io_result)  parse_dgram_stream  Error!");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v29);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v35);
      }
      LOBYTE(v174) = 8;
      Outpop::Utility::Lock::unlock(v139);
    }
    (*(void (__thiscall **)(Outpop::IONetwork::Dgram_Channel *))(*(_DWORD *)this + 24))(this);
    goto LABEL_182;
  }
  v36 = *((_DWORD *)this + 46);
  if ( !v36 )
  {
    v52 = (Outpop::IONetwork::Dgram_Channel *)((char *)this + 132);
    Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
    v55 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v173);
    LOBYTE(v174) = 14;
    *((_DWORD *)this + 41) = *v55;
    *((_DWORD *)this + 42) = v55[1];
    LOBYTE(v174) = 8;
    v54 = (Outpop::Utility::Time_Value *)v173;
    goto LABEL_77;
  }
  if ( !*(_BYTE *)(v36 + 120) )
  {
    v52 = (Outpop::IONetwork::Dgram_Channel *)((char *)this + 132);
    Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
    v53 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v171);
    LOBYTE(v174) = 13;
    *((_DWORD *)this + 41) = *v53;
    *((_DWORD *)this + 42) = v53[1];
    LOBYTE(v174) = 8;
    v54 = (Outpop::Utility::Time_Value *)v171;
LABEL_77:
    Outpop::Utility::Time_Value::~Time_Value(v54);
    Outpop::Utility::Thread_Mutex::release(v52);
LABEL_78:
    v153 = 0;
    v154 = 0;
    v155 = 0;
    LOBYTE(v174) = 15;
    Outpop::IONetwork::Dgram_Channel::separate_ace_packet(&v132, &v152);
    if ( v153 && (v154 - v153) >> 2 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v56 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v140 = v56;
        Outpop::Utility::Lock::lock(v56);
        LOBYTE(v174) = 16;
        v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v58 = Outpop::Utility::Logger::get_log_buffer(v57);
        v59 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v128 = Outpop::Utility::Logger::make_tm(v59);
        v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v61 = Outpop::Utility::Logger::make_dt(v60);
        v62 = sub_10007400(0xFFFFu, v58, L"\nLOGINFO %s:%s Message:", v61, v128);
        sub_10007400(0xFFFF - v62, &v58[v62], L"channel  %d   is  process ack", *((_DWORD *)this + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v58);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v63 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v63);
        }
        LOBYTE(v174) = 15;
        Outpop::Utility::Lock::unlock(v56);
      }
      Outpop::IONetwork::Dgram_Channel::process_system_packet(&v152);
    }
    if ( v133 )
    {
      v64 = v134;
      if ( (int)(v134 - (_DWORD)v133) >> 2 )
      {
        v65 = v133;
        if ( (unsigned int)v133 > v134 )
        {
          invalid_parameter_noinfo();
          v64 = v134;
        }
        if ( (unsigned int)v65 >= v64 )
          invalid_parameter_noinfo();
        if ( Outpop::Utility::Binary_Stream::get_reliable(*v65) )
        {
          sub_100328D0((char *)this + 288, &v143, &v132);
          LOBYTE(v174) = 17;
          Outpop::IONetwork::Dgram_Channel::mack_ack_head(&v143, 5);
          Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 664));
          sub_1000B090((int)this + 644, (int)&v143);
          Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 664));
          LOBYTE(v174) = 15;
          if ( v143 )
            Outpop::Utility::Ref_Object::release(v143);
        }
        v66 = v133;
        if ( v133 && (int)(v134 - (_DWORD)v133) >> 2 )
        {
          Outpop::IONetwork::Comminute_Container::combine_stream(
            (char *)this + 220,
            (Outpop::Utility::Thread_Mutex *)&v132);
          v66 = v133;
        }
        if ( *((_BYTE *)this + 200) )
        {
          v67 = v66;
          if ( (unsigned int)v66 <= v134 )
            goto LABEL_105;
          invalid_parameter_noinfo();
          while ( 1 )
          {
            v66 = v133;
LABEL_105:
            v68 = (Outpop::Utility::Stream_Base **)v134;
            if ( (unsigned int)v66 > v134 )
              invalid_parameter_noinfo();
            if ( v67 == v68 )
              break;
            Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
            if ( (unsigned int)v67 >= v134 )
              invalid_parameter_noinfo();
            v69 = Outpop::IONetwork::Security_Processer::unprocess(
                    v67,
                    *((_DWORD *)this + 45),
                    *((unsigned __int8 *)this + 201));
            Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
            if ( !v69 )
            {
              v141 = (Outpop::Utility::Lock *)GetLastError();
              if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
                 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
                && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
              {
                v156 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
                Outpop::Utility::Lock::lock(v156);
                LOBYTE(v174) = 18;
                v70 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                v71 = Outpop::Utility::Logger::get_log_buffer(v70);
                v72 = sub_10007400(0xFFFFu, v71, L"\n%s", L"LOG_ERROR");
                v125 = GetLastError();
                v120 = GetCurrentThreadId();
                v115 = GetCurrentProcessId();
                v73 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                v110 = Outpop::Utility::Logger::make_tm(v73);
                v74 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                v75 = Outpop::Utility::Logger::make_dt(v74);
                v76 = sub_10007400(
                        0xFFFF - v72,
                        &v71[v72],
                        L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                        v75,
                        v110,
                        v115,
                        v120,
                        v125,
                        L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                        660);
                sub_10007400(
                  0xFFFF - (v76 + v72),
                  &v71[v76 + v72],
                  L"Dgram_Channel::handle_read_stream  unprocess Error:%d",
                  v141);
                if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
                  wprintf(L"%s", v71);
                if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
                {
                  v77 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                  Outpop::Utility::Logger::write_file(v77);
                }
                LOBYTE(v174) = 15;
                Outpop::Utility::Lock::unlock(v156);
              }
              (*(void (__thiscall **)(Outpop::IONetwork::Dgram_Channel *))(*(_DWORD *)this + 24))(this);
              goto LABEL_181;
            }
            if ( (unsigned int)v67 >= v134 )
              invalid_parameter_noinfo();
            ++v67;
          }
        }
        v162 = 0;
        v163 = 0;
        v164 = 0;
        v168 = 0;
        v169 = 0;
        v170 = 0;
        LOBYTE(v174) = 20;
        v78 = v133;
        v79 = v134;
        if ( (unsigned int)v133 > v134 )
        {
          invalid_parameter_noinfo();
          v79 = v134;
        }
        while ( 1 )
        {
          v80 = (Outpop::Utility::Binary_Stream **)v79;
          if ( (unsigned int)v133 > v79 )
          {
            invalid_parameter_noinfo();
            v79 = v134;
          }
          if ( v78 == v80 )
            break;
          if ( (unsigned int)v78 >= v79 )
            invalid_parameter_noinfo();
          if ( Outpop::Utility::Binary_Stream::sequence(*v78) == 2 )
          {
            if ( (unsigned int)v78 >= v134 )
              invalid_parameter_noinfo();
            v81 = &v161;
          }
          else
          {
            if ( (unsigned int)v78 >= v134 )
              invalid_parameter_noinfo();
            v81 = &v167;
          }
          sub_1000AC30((int)v78, v81);
          v79 = v134;
          if ( (unsigned int)v78 >= v134 )
          {
            invalid_parameter_noinfo();
            v79 = v134;
          }
          ++v78;
        }
        if ( v162 && (v163 - v162) >> 2 )
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
          {
            v82 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
            v158[1] = v82;
            Outpop::Utility::Lock::lock(v82);
            LOBYTE(v174) = 21;
            v83 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v84 = Outpop::Utility::Logger::get_log_buffer(v83);
            v85 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v129 = Outpop::Utility::Logger::make_tm(v85);
            v86 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v87 = Outpop::Utility::Logger::make_dt(v86);
            v88 = sub_10007400(0xFFFFu, v84, L"\nLOGINFO %s:%s Message:", v87, v129);
            sub_10007400(0xFFFF - v88, &v84[v88], L"channel  %d   is  handle_read_stream", *((_DWORD *)this + 28));
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v84);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v89 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v89);
            }
            LOBYTE(v174) = 20;
            Outpop::Utility::Lock::unlock(v82);
          }
          if ( *((_DWORD *)this + 29) )
          {
            v138 = (int)this;
            Outpop::Utility::Ref_Object::addref(this);
            LOBYTE(v174) = 22;
            (*(void (__thiscall **)(_DWORD, int *, int *))(**((_DWORD **)this + 29) + 4))(
              *((_DWORD *)this + 29),
              &v161,
              &v138);
            LOBYTE(v174) = 20;
            if ( v138 )
              Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v138);
          }
        }
        if ( v168 && (v169 - v168) >> 2 )
          Outpop::IONetwork::Sequence_Container::push_back_stream(&v167);
        LOBYTE(v174) = 19;
        sub_1003BA70();
        LOBYTE(v174) = 15;
        sub_1003BA70();
      }
    }
    v90 = InterlockedExchange;
    v138 = 0;
    while ( 1 )
    {
      Outpop::IONetwork::Sequence_Container::get_is_have_stream(
        (Outpop::IONetwork::Dgram_Channel *)((char *)this + 444),
        (bool *)&v137,
        (bool *)&v137 + 1,
        &v136);
      if ( !v137 && !v136 )
        break;
      if ( v90((volatile LONG *)this + 175, 0) != 1 )
        break;
      if ( *((_DWORD *)this + 29) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
        {
          v91 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v172 = v91;
          Outpop::Utility::Lock::lock(v91);
          LOBYTE(v174) = 23;
          v92 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v93 = Outpop::Utility::Logger::get_log_buffer(v92);
          v94 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v130 = Outpop::Utility::Logger::make_tm(v94);
          v95 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v96 = Outpop::Utility::Logger::make_dt(v95);
          v97 = sub_10007400(0xFFFFu, v93, L"\nLOGINFO %s:%s Message:", v96, v130);
          sub_10007400(
            0xFFFF - v97,
            &v93[v97],
            L"channel  %d   is  handle_read_seqeuence_stream",
            *((_DWORD *)this + 28));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v93);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v98 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v98);
          }
          LOBYTE(v174) = 15;
          Outpop::Utility::Lock::unlock(v91);
          v90 = InterlockedExchange;
        }
        v145 = this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v174) = 24;
        (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 29) + 8))(
          *((_DWORD *)this + 29),
          &v145);
        LOBYTE(v174) = 15;
        if ( v145 )
          Outpop::Utility::Ref_Object::release(v145);
      }
      v90((volatile LONG *)this + 175, 1);
      if ( ++v138 > 5 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
        {
          v157 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v157);
          LOBYTE(v174) = 25;
          v99 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v100 = Outpop::Utility::Logger::get_log_buffer(v99);
          v101 = sub_10007400(0xFFFFu, v100, L"\n%s", L"LOG_WARNING");
          v126 = GetLastError();
          v121 = GetCurrentThreadId();
          v116 = GetCurrentProcessId();
          v102 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v111 = Outpop::Utility::Logger::make_tm(v102);
          v103 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v104 = Outpop::Utility::Logger::make_dt(v103);
          v105 = sub_10007400(
                   0xFFFF - v101,
                   &v100[v101],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v104,
                   v111,
                   v116,
                   v121,
                   v126,
                   L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                   724);
          sub_10007400(
            0xFFFF - (v105 + v101),
            &v100[v105 + v101],
            L"UDP  handle_read_stream  icount > MAX_RECV_COUNT! id  is %d",
            *((_DWORD *)this + 28));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v100);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v106 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v106);
          }
          LOBYTE(v174) = 15;
          Outpop::Utility::Lock::unlock(v157);
        }
        break;
      }
    }
LABEL_181:
    LOBYTE(v174) = 8;
    sub_1003BA70();
    goto LABEL_182;
  }
  v146 = (char *)this + 132;
  v147 = 0;
  v37 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Channel *)((char *)this + 132));
  v147 = v37 - 1;
  LOBYTE(v174) = 10;
  if ( v37 )
  {
    Outpop::Utility::Time_Value::gettimeofday(v144);
    LOBYTE(v174) = 11;
    v139 = (Outpop::Utility::Lock *)Outpop::Utility::Time_Value::msec((Outpop::IONetwork::Dgram_Channel *)((char *)this + 164));
    v38 = Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v144);
    v39 = v38 - (_DWORD)v139;
    if ( v133 )
      v40 = (int)(v134 - (_DWORD)v133) >> 2;
    else
      v40 = 0;
    *((_DWORD *)this + 44) += v40;
    if ( v39 <= 1000 )
      goto LABEL_64;
    v41 = *((_DWORD *)this + 46);
    if ( v142 <= *(_DWORD *)(v41 + 112) && *((_DWORD *)this + 44) <= *(_DWORD *)(v41 + 116) )
    {
      InterlockedExchangeAdd((volatile LONG *)this + 43, -*((_DWORD *)this + 43));
      v42 = v144[0];
      v43 = v144[1];
      *((_DWORD *)this + 44) = 0;
      *((_DWORD *)this + 41) = v42;
      *((_DWORD *)this + 42) = v43;
LABEL_64:
      LOBYTE(v174) = 10;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v144);
      LOBYTE(v174) = 8;
      sub_10005B50((int)&v146);
      goto LABEL_78;
    }
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v141 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v141);
      LOBYTE(v174) = 12;
      v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v45 = Outpop::Utility::Logger::get_log_buffer(v44);
      v46 = sub_10007400(0xFFFFu, v45, L"\n%s", L"LOG_ERROR");
      v124 = GetLastError();
      v119 = GetCurrentThreadId();
      v114 = GetCurrentProcessId();
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v109 = Outpop::Utility::Logger::make_tm(v47);
      v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v49 = Outpop::Utility::Logger::make_dt(v48);
      v50 = sub_10007400(
              0xFFFF - v46,
              &v45[v46],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v49,
              v109,
              v114,
              v119,
              v124,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
              595);
      sub_10007400(
        0xFFFF - (v50 + v46),
        &v45[v50 + v46],
        L"Dgram_Channel::handle_read_stream  this->last_second_receive_size_ > this->acceptor_->get_config().last_second_r"
         "eceive_size_  channnel  id is %d,last_second_receive_size_ is %d,acceptor_   last_second_receive_size_  is %d",
        *((_DWORD *)this + 28),
        *((_DWORD *)this + 43),
        *(_DWORD *)(*((_DWORD *)this + 46) + 112));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v45);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v51);
      }
      LOBYTE(v174) = 11;
      Outpop::Utility::Lock::unlock(v141);
    }
    (*(void (__thiscall **)(Outpop::IONetwork::Dgram_Channel *))(*(_DWORD *)this + 24))(this);
    LOBYTE(v174) = 10;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v144);
  }
  LOBYTE(v174) = 8;
  sub_10005B50((int)&v146);
LABEL_182:
  LOBYTE(v174) = 2;
  sub_1003BA70();
LABEL_183:
  v174 = -1;
  if ( v131 )
    Outpop::Utility::Ref_Object::release(v131);
}
