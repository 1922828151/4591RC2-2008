/*
 * func-name: sub_1000B380
 * func-address: 0x1000b380
 * callers: none
 * callees: 0x100096f0, 0x1000a570, 0x1000d530, 0x1000d5a0, 0x1000e660, 0x1000e760, 0x1000e860
 */

void __thiscall sub_1000B380(int this, int a2, int a3, Outpop::Utility::Ref_Object **a4, int a5)
{
  Outpop::Utility::Lock *v6; // edi
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Binary_Stream *v14; // eax
  Outpop::Utility::Ref_Object *v15; // esi
  Outpop::Utility::Ref_Object *v16; // ecx
  Outpop::Utility::Stream_Base *v17; // edi
  DWORD LastError; // eax
  DWORD v19; // eax
  Outpop::Utility::Ref_Object *v20; // ecx
  Outpop::Utility::Lock *v21; // edi
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // eax
  int v27; // eax
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Binary_Stream *v29; // eax
  Outpop::Utility::Ref_Object *v30; // esi
  Outpop::Utility::Ref_Object *v31; // ecx
  Outpop::Utility::Stream_Base *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // edi
  int v35; // esi
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // eax
  int v39; // esi
  int v40; // eax
  Outpop::Utility::Logger *v41; // eax
  DWORD v42; // eax
  DWORD v43; // eax
  Outpop::Utility::Lock *v44; // edi
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // esi
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // eax
  int v50; // eax
  Outpop::Utility::Logger *v51; // eax
  int v52; // eax
  Outpop::Utility::Lock *v53; // edi
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  int v59; // eax
  Outpop::Utility::Logger *v60; // eax
  Outpop::Utility::Binary_Stream *v61; // eax
  Outpop::Utility::Ref_Object *v62; // esi
  Outpop::Utility::Ref_Object *v63; // ecx
  Outpop::Utility::Stream_Base *v64; // eax
  DWORD v65; // eax
  int v66; // eax
  int v67; // esi
  DWORD v68; // eax
  Outpop::Utility::Ref_Object *v69; // esi
  int v70; // eax
  Outpop::Utility::Logger *v71; // eax
  wchar_t *v72; // edi
  Outpop::Utility::Logger *v73; // eax
  Outpop::Utility::Logger *v74; // eax
  wchar_t *v75; // eax
  int v76; // eax
  char *v77; // ecx
  Outpop::Utility::Logger *v78; // eax
  Outpop::Utility::Binary_Stream *v79; // eax
  Outpop::Utility::Ref_Object *v80; // esi
  Outpop::Utility::Ref_Object *v81; // ecx
  Outpop::Utility::Stream_Base *v82; // eax
  Outpop::Utility::Stream_Base *v83; // edi
  DWORD v84; // eax
  int v85; // edi
  DWORD v86; // eax
  int v87; // [esp-4h] [ebp-60h] BYREF
  int v88; // [esp+0h] [ebp-5Ch]
  int v89; // [esp+4h] [ebp-58h]
  wchar_t *v90; // [esp+8h] [ebp-54h]
  DWORD CurrentProcessId; // [esp+Ch] [ebp-50h]
  DWORD CurrentThreadId; // [esp+10h] [ebp-4Ch]
  DWORD v93; // [esp+14h] [ebp-48h]
  int v94; // [esp+18h] [ebp-44h]
  unsigned int tm; // [esp+1Ch] [ebp-40h]
  int v96; // [esp+34h] [ebp-28h] BYREF
  Outpop::Utility::Ref_Object *v97; // [esp+38h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v98; // [esp+3Ch] [ebp-20h] BYREF
  Outpop::Utility::Lock *v99; // [esp+40h] [ebp-1Ch] BYREF
  _DWORD v100[3]; // [esp+44h] [ebp-18h] BYREF
  int v101; // [esp+58h] [ebp-4h]

  if ( a5 == *(_DWORD *)(this + 100) )
  {
    if ( *(_BYTE *)(this + 117) != 1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v100[0] = v6;
        Outpop::Utility::Lock::lock(v6);
        v101 = 0;
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (unsigned int)Outpop::Utility::Logger::make_tm(v9);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v10);
        v12 = sub_1000A570(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
        sub_1000A570(0xFFFF - v12, &log_buffer[v12], L"SAP resend detected packet");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          tm = (unsigned int)log_buffer;
          v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v13);
        }
        v101 = -1;
        Outpop::Utility::Lock::unlock(v6);
      }
      v14 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v15 = v14;
      v100[0] = v14;
      v101 = 1;
      if ( v14 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v14, 64);
        *(_DWORD *)v15 = &Outpop::Utility::Binary_Stream::`vftable';
        v16 = v15;
      }
      else
      {
        v16 = 0;
      }
      v101 = -1;
      v97 = v16;
      if ( v16 )
        Outpop::Utility::Ref_Object::addref(v16);
      v101 = 2;
      HIBYTE(v96) = -125;
      v17 = (Outpop::Utility::Stream_Base *)sub_1000E660((char *)&v96 + 3);
      sub_100096F0((_DWORD *)(this + 68), v17);
      tm = 0;
      v94 = 1;
      v100[0] = &v87;
      std::string::string(&v87, &unk_10026701);
      if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
             *(_DWORD *)(this + 96),
             &v97,
             this + 124,
             v87,
             v88,
             v89,
             v90,
             CurrentProcessId,
             CurrentThreadId,
             v93,
             v94,
             tm) == -1 )
      {
        LastError = GetLastError();
        (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 5, LastError);
      }
      else
      {
        v98 = 0;
        LOBYTE(v101) = 3;
        v99 = (Outpop::Utility::Lock *)this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 4;
        *(_DWORD *)(this + 100) = sub_1000D5A0(&v99, &unk_10030AA8, &v98);
        LOBYTE(v101) = 3;
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 2;
        if ( *(_DWORD *)(this + 100) == -1 )
        {
          v19 = GetLastError();
          (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 1, v19);
        }
      }
      v101 = -1;
      v20 = v97;
      if ( v97 )
LABEL_85:
        Outpop::Utility::Ref_Object::release(v20);
    }
  }
  else if ( a5 == *(_DWORD *)(this + 104) )
  {
    if ( *(_BYTE *)(this + 119) != 1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v100[0] = v21;
        Outpop::Utility::Lock::lock(v21);
        v101 = 5;
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v23 = Outpop::Utility::Logger::get_log_buffer(v22);
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (unsigned int)Outpop::Utility::Logger::make_tm(v24);
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v26 = Outpop::Utility::Logger::make_dt(v25);
        v27 = sub_1000A570(0xFFFFu, v23, L"\nLOGINFO %s:%s Message:", v26, tm);
        sub_1000A570(0xFFFF - v27, &v23[v27], L"SAP resend report address packet");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v23);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          tm = (unsigned int)v23;
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v28);
        }
        v101 = -1;
        Outpop::Utility::Lock::unlock(v21);
      }
      v29 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v30 = v29;
      v100[0] = v29;
      v101 = 6;
      if ( v29 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v29, 64);
        *(_DWORD *)v30 = &Outpop::Utility::Binary_Stream::`vftable';
        v31 = v30;
      }
      else
      {
        v31 = 0;
      }
      v101 = -1;
      v97 = v31;
      if ( v31 )
        Outpop::Utility::Ref_Object::addref(v31);
      v101 = 7;
      HIBYTE(v96) = -123;
      v32 = (Outpop::Utility::Stream_Base *)sub_1000E660((char *)&v96 + 3);
      sub_100096F0((_DWORD *)(this + 68), v32);
      sub_1000E760(this + 152);
      sub_1000E860(this + 156);
      sub_1000E860(this + 158);
      sub_1000E760(this + 160);
      sub_1000E860(this + 164);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v99 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v99);
        LOBYTE(v101) = 8;
        v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v34 = Outpop::Utility::Logger::get_log_buffer(v33);
        v35 = sub_1000A570(0xFFFFu, v34, L"\n%s", L"LOG_DEBUG");
        v93 = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v90 = Outpop::Utility::Logger::make_tm(v36);
        v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v38 = Outpop::Utility::Logger::make_dt(v37);
        v39 = sub_1000A570(
                0xFFFF - v35,
                &v34[v35],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v38,
                v90,
                CurrentProcessId,
                CurrentThreadId,
                v93,
                L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Simple_Address_Protocol.cpp",
                268)
            + v35;
        if ( *(_DWORD *)(this + 92) < 0x10u )
          v40 = this + 72;
        else
          v40 = *(_DWORD *)(this + 72);
        sub_1000A570(
          0xFFFF - v39,
          &v34[v39],
          L"SAP re report address id %S exteral ip %d address port %d kp port %d interal ip %d interal port %d",
          v40,
          *(_DWORD *)(this + 152),
          *(unsigned __int16 *)(this + 156),
          *(unsigned __int16 *)(this + 158),
          *(_DWORD *)(this + 160),
          *(unsigned __int16 *)(this + 164));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v34);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          tm = (unsigned int)v34;
          v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v41);
        }
        LOBYTE(v101) = 7;
        Outpop::Utility::Lock::unlock(v99);
      }
      tm = 0;
      v94 = 1;
      v100[0] = &v87;
      std::string::string(&v87, &unk_10026701);
      if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
             *(_DWORD *)(this + 96),
             &v97,
             this + 124,
             v87,
             v88,
             v89,
             v90,
             CurrentProcessId,
             CurrentThreadId,
             v93,
             v94,
             tm) == -1 )
      {
        v42 = GetLastError();
        (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 5, v42);
      }
      else
      {
        v99 = 0;
        LOBYTE(v101) = 9;
        v98 = (Outpop::Utility::Ref_Object *)this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 10;
        *(_DWORD *)(this + 104) = sub_1000D5A0(&v98, &unk_10030AB0, &v99);
        LOBYTE(v101) = 9;
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 7;
        if ( *(_DWORD *)(this + 104) == -1 )
        {
          v43 = GetLastError();
          (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 1, v43);
        }
      }
      v101 = -1;
      v20 = v97;
      if ( v97 )
        goto LABEL_85;
    }
  }
  else if ( a5 == *(_DWORD *)(this + 112) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v100[0] = v44;
      Outpop::Utility::Lock::lock(v44);
      v101 = 11;
      v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v46 = Outpop::Utility::Logger::get_log_buffer(v45);
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = (unsigned int)Outpop::Utility::Logger::make_tm(v47);
      v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v49 = Outpop::Utility::Logger::make_dt(v48);
      v50 = sub_1000A570(0xFFFFu, v46, L"\nLOGINFO %s:%s Message:", v49, tm);
      sub_1000A570(0xFFFF - v50, &v46[v50], L"SAP Keep Alive time out count is %d", *(_DWORD *)(this + 120));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v46);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        tm = (unsigned int)v46;
        v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v51);
      }
      v101 = -1;
      Outpop::Utility::Lock::unlock(v44);
    }
    v52 = *(_DWORD *)(this + 120);
    if ( v52 == dword_10030ACC )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v53 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v100[0] = v53;
        Outpop::Utility::Lock::lock(v53);
        v101 = 12;
        v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v55 = Outpop::Utility::Logger::get_log_buffer(v54);
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (unsigned int)Outpop::Utility::Logger::make_tm(v56);
        v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v58 = Outpop::Utility::Logger::make_dt(v57);
        v59 = sub_1000A570(0xFFFFu, v55, L"\nLOGINFO %s:%s Message:", v58, tm);
        sub_1000A570(0xFFFF - v59, &v55[v59], L"SAP Keep Alive time out");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v55);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          tm = (unsigned int)v55;
          v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v60);
        }
        v101 = -1;
        Outpop::Utility::Lock::unlock(v53);
      }
      (*(void (__cdecl **)(_DWORD, int))(this + 36))(*(_DWORD *)(this + 40), -1);
    }
    else
    {
      tm = 72;
      *(_DWORD *)(this + 120) = v52 + 1;
      v61 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(tm);
      v62 = v61;
      v100[0] = v61;
      v101 = 13;
      if ( v61 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v61, 64);
        *(_DWORD *)v62 = &Outpop::Utility::Binary_Stream::`vftable';
        v63 = v62;
      }
      else
      {
        v63 = 0;
      }
      v101 = -1;
      v97 = v63;
      if ( v63 )
        Outpop::Utility::Ref_Object::addref(v63);
      v101 = 14;
      HIBYTE(v96) = -115;
      v64 = (Outpop::Utility::Stream_Base *)sub_1000E660((char *)&v96 + 3);
      sub_100096F0((_DWORD *)(this + 68), v64);
      tm = 0;
      v94 = 1;
      v100[0] = &v87;
      std::string::string(&v87, &unk_10026701);
      if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
             *(_DWORD *)(this + 96),
             &v97,
             this + 124,
             v87,
             v88,
             v89,
             v90,
             CurrentProcessId,
             CurrentThreadId,
             v93,
             v94,
             tm) == -1 )
      {
        v65 = GetLastError();
        (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 5, v65);
      }
      else
      {
        v66 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)&unk_10030AC4) / *(_DWORD *)(this + 120);
        if ( v66 < 3 )
          v66 = 1;
        v99 = 0;
        tm = 0;
        LOBYTE(v101) = 15;
        v67 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v100, v66);
        LOBYTE(v101) = 16;
        v98 = (Outpop::Utility::Ref_Object *)this;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 17;
        *(_DWORD *)(this + 112) = sub_1000D5A0(&v98, v67, &v99);
        LOBYTE(v101) = 16;
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
        LOBYTE(v101) = 15;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v100);
        LOBYTE(v101) = 14;
        if ( *(_DWORD *)(this + 112) == -1 )
        {
          v68 = GetLastError();
          (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 1, v68);
        }
      }
      v101 = -1;
      v20 = v97;
      if ( v97 )
        goto LABEL_85;
    }
  }
  else
  {
    v69 = *a4;
    v97 = *a4;
    if ( v97 )
      Outpop::Utility::Ref_Object::addref(v69);
    v101 = 18;
    if ( v69 )
    {
      if ( *((_BYTE *)v69 + 40) != 1 )
      {
        v70 = *((_DWORD *)v69 + 9);
        if ( v70 != -1 )
        {
          if ( v70 >= dword_10030AC0 )
          {
            sub_1000D530();
            (*(void (__cdecl **)(_DWORD, int, int))(this + 28))(*(_DWORD *)(this + 32), -1, (int)v69 + 8);
            v69 = v97;
          }
          else
          {
            ++*((_DWORD *)v69 + 9);
            if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
               || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
              && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
            {
              v99 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
              Outpop::Utility::Lock::lock(v99);
              LOBYTE(v101) = 19;
              v71 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v72 = Outpop::Utility::Logger::get_log_buffer(v71);
              v73 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              tm = (unsigned int)Outpop::Utility::Logger::make_tm(v73);
              v74 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v75 = Outpop::Utility::Logger::make_dt(v74);
              v76 = sub_1000A570(0xFFFFu, v72, L"\nLOGINFO %s:%s Message:", v75, tm);
              if ( *((_DWORD *)v69 + 8) < 0x10u )
                v77 = (char *)v69 + 12;
              else
                v77 = (char *)*((_DWORD *)v69 + 3);
              sub_1000A570(
                0xFFFF - v76,
                &v72[v76],
                L"SAP re request remote peer connect id %S count is %d",
                v77,
                *((_DWORD *)v69 + 9));
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
                wprintf(L"%s", v72);
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
              {
                tm = (unsigned int)v72;
                v78 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                Outpop::Utility::Logger::write_file(v78);
              }
              LOBYTE(v101) = 18;
              Outpop::Utility::Lock::unlock(v99);
            }
            v79 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
            v80 = v79;
            v100[0] = v79;
            LOBYTE(v101) = 20;
            if ( v79 )
            {
              Outpop::Utility::Binary_Stream::Binary_Stream(v79, 64);
              *(_DWORD *)v80 = &Outpop::Utility::Binary_Stream::`vftable';
              v81 = v80;
            }
            else
            {
              v81 = 0;
            }
            LOBYTE(v101) = 18;
            v98 = v81;
            if ( v81 )
              Outpop::Utility::Ref_Object::addref(v81);
            LOBYTE(v101) = 21;
            HIBYTE(v96) = -119;
            v99 = (Outpop::Utility::Ref_Object *)((char *)v97 + 8);
            v82 = (Outpop::Utility::Stream_Base *)sub_1000E660((char *)&v96 + 3);
            v83 = sub_100096F0((_DWORD *)(this + 68), v82);
            sub_100096F0(v99, v83);
            tm = 0;
            v94 = 1;
            v100[0] = &v87;
            std::string::string(&v87, &unk_10026701);
            if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
                   *(_DWORD *)(this + 96),
                   &v98,
                   this + 124,
                   v87,
                   v88,
                   v89,
                   v90,
                   CurrentProcessId,
                   CurrentThreadId,
                   v93,
                   v94,
                   tm) == -1 )
            {
              v84 = GetLastError();
              (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 5, v84);
              v69 = v97;
            }
            else
            {
              v69 = v97;
              v99 = v97;
              Outpop::Utility::Ref_Object::addref(v97);
              LOBYTE(v101) = 22;
              v100[0] = this;
              Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
              LOBYTE(v101) = 23;
              v85 = sub_1000D5A0(v100, &unk_10030AB8, &v99);
              LOBYTE(v101) = 22;
              Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
              LOBYTE(v101) = 21;
              Outpop::Utility::Ref_Object::release(v69);
              if ( v85 == -1 )
              {
                v86 = GetLastError();
                (*(void (__cdecl **)(_DWORD, int, DWORD))(this + 44))(*(_DWORD *)(this + 48), 1, v86);
              }
            }
            LOBYTE(v101) = 18;
            if ( v98 )
              Outpop::Utility::Ref_Object::release(v98);
          }
        }
      }
      v101 = -1;
      Outpop::Utility::Ref_Object::release(v69);
    }
    else
    {
      (*(void (__cdecl **)(_DWORD, int, int))(this + 44))(*(_DWORD *)(this + 48), 1, -1);
    }
  }
}
