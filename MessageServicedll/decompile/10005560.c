/*
 * func-name: ??1Context@Message@Outpop@@UAE@XZ
 * func-address: 0x10005560
 * callers: 0x100014a0
 * callees: 0x100028b0, 0x10006f70, 0x10007720, 0x1001ac90, 0x10020f20, 0x10023490, 0x100294f2
 */

void __thiscall Outpop::Message::Context::~Context(Outpop::Message::Context *this)
{
  Outpop::Utility::Lock *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  int **v10; // eax
  int *i; // esi
  void *v12; // edi
  Outpop::Utility::Lock *v13; // edi
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  _DWORD *v21; // edi
  char *v22; // eax
  Outpop::IONetwork::Connector_Config *v23; // esi
  Outpop::Utility::Lock *v24; // edi
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // esi
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // eax
  int v30; // eax
  Outpop::Utility::Logger *v31; // eax
  void (__thiscall ***v32)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v33; // edi
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // esi
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // eax
  int v39; // eax
  Outpop::Utility::Logger *v40; // eax
  void (__thiscall ***v41)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v42; // edi
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // esi
  Outpop::Utility::Logger *v45; // eax
  Outpop::Utility::Logger *v46; // eax
  wchar_t *v47; // eax
  int v48; // eax
  Outpop::Utility::Logger *v49; // eax
  void (__thiscall ***v50)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v51; // edi
  Outpop::Utility::Logger *v52; // eax
  wchar_t *v53; // esi
  Outpop::Utility::Logger *v54; // eax
  Outpop::Utility::Logger *v55; // eax
  wchar_t *v56; // eax
  int v57; // eax
  Outpop::Utility::Logger *v58; // eax
  void (__thiscall ***v59)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v60; // edi
  Outpop::Utility::Logger *v61; // eax
  wchar_t *v62; // esi
  Outpop::Utility::Logger *v63; // eax
  Outpop::Utility::Logger *v64; // eax
  wchar_t *v65; // eax
  int v66; // eax
  Outpop::Utility::Logger *v67; // eax
  void (__thiscall ***v68)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v69; // edi
  Outpop::Utility::Logger *v70; // eax
  wchar_t *v71; // esi
  Outpop::Utility::Logger *v72; // eax
  Outpop::Utility::Logger *v73; // eax
  wchar_t *v74; // eax
  int v75; // eax
  Outpop::Utility::Logger *v76; // eax
  char *v77; // esi
  void (__thiscall ***v78)(_DWORD, int); // ecx
  void *v79; // esi
  Outpop::Utility::Lock *v80; // edi
  Outpop::Utility::Logger *v81; // eax
  wchar_t *v82; // esi
  Outpop::Utility::Logger *v83; // eax
  Outpop::Utility::Logger *v84; // eax
  wchar_t *v85; // eax
  int v86; // eax
  Outpop::Utility::Logger *v87; // eax
  Outpop::Utility::Lock *v88; // edi
  Outpop::Utility::Logger *v89; // eax
  wchar_t *v90; // esi
  Outpop::Utility::Logger *v91; // eax
  Outpop::Utility::Logger *v92; // eax
  wchar_t *v93; // eax
  int v94; // eax
  Outpop::Utility::Logger *v95; // eax
  void (__thiscall ***v96)(_DWORD, int); // ecx
  Outpop::Utility::Lock *v97; // edi
  Outpop::Utility::Logger *v98; // eax
  wchar_t *v99; // esi
  Outpop::Utility::Logger *v100; // eax
  Outpop::Utility::Logger *v101; // eax
  wchar_t *v102; // eax
  int v103; // eax
  Outpop::Utility::Logger *v104; // eax
  void *v105; // esi
  Outpop::Utility::Lock *v106; // edi
  Outpop::Utility::Logger *v107; // eax
  wchar_t *v108; // esi
  Outpop::Utility::Logger *v109; // eax
  Outpop::Utility::Logger *v110; // eax
  wchar_t *v111; // eax
  int v112; // eax
  Outpop::Utility::Logger *v113; // eax
  void (__thiscall ***v114)(_DWORD, int); // ecx
  void (__thiscall ***v115)(_DWORD, int); // ecx
  _DWORD **v116; // ecx
  _DWORD *v117; // eax
  bool v118; // zf
  _DWORD *v119; // esi
  _DWORD **v120; // ecx
  _DWORD *v121; // eax
  _DWORD *v122; // esi
  int v123; // [esp+30h] [ebp-44h]
  int v124; // [esp+30h] [ebp-44h]
  int v125; // [esp+30h] [ebp-44h]
  int v126; // [esp+30h] [ebp-44h]
  int v127; // [esp+30h] [ebp-44h]
  int v128; // [esp+30h] [ebp-44h]
  int v129; // [esp+30h] [ebp-44h]
  int v130; // [esp+30h] [ebp-44h]
  int v131; // [esp+30h] [ebp-44h]
  int v132; // [esp+30h] [ebp-44h]
  int v133; // [esp+30h] [ebp-44h]
  int v134; // [esp+30h] [ebp-44h]

  *(_DWORD *)this = &Outpop::Message::Context::`vftable';
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v2);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt);
    sub_10023490(&log_buffer[v8], L"release acceptor config...", v123);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  v10 = (int **)((char *)this + 4);
  for ( i = (int *)**((_DWORD **)this + 2); i != v10[1]; i = (int *)*i )
  {
    v12 = (void *)i[2];
    if ( v12 )
    {
      Outpop::IONetwork::Acceptor_Config::~Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)i[2]);
      operator delete(v12);
      v10 = (int **)((char *)this + 4);
    }
    if ( i == v10[1] )
    {
      invalid_parameter_noinfo();
      v10 = (int **)((char *)this + 4);
    }
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v13 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v13);
    v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v15 = Outpop::Utility::Logger::get_log_buffer(v14);
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v16);
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::make_dt(v17);
    v19 = sub_10023490(v15, L"\nLOGINFO %s:%s Message:", v18);
    sub_10023490(&v15[v19], L"release connector config...", v124);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v15);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    Outpop::Utility::Lock::unlock(v13);
  }
  v21 = (_DWORD *)**((_DWORD **)this + 5);
  v22 = (char *)this + 16;
  while ( v21 != *((_DWORD **)v22 + 1) )
  {
    v23 = (Outpop::IONetwork::Connector_Config *)v21[2];
    if ( v23 )
    {
      Outpop::IONetwork::Connector_Config::~Connector_Config(v23);
      operator delete(v23);
      v22 = (char *)this + 16;
    }
    if ( v21 == *((_DWORD **)v22 + 1) )
    {
      invalid_parameter_noinfo();
      v22 = (char *)this + 16;
    }
    v21 = (_DWORD *)*v21;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v24 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v24);
    v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::get_log_buffer(v25);
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v27);
    v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v29 = Outpop::Utility::Logger::make_dt(v28);
    v30 = sub_10023490(v26, L"\nLOGINFO %s:%s Message:", v29);
    sub_10023490(&v26[v30], L"release io thread ...", v125);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v26);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v31);
    }
    Outpop::Utility::Lock::unlock(v24);
  }
  v32 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 16);
  if ( v32 )
    (**v32)(v32, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v33 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v33);
    v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v35 = Outpop::Utility::Logger::get_log_buffer(v34);
    v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v36);
    v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v38 = Outpop::Utility::Logger::make_dt(v37);
    v39 = sub_10023490(v35, L"\nLOGINFO %s:%s Message:", v38);
    sub_10023490(&v35[v39], L"release block thread...", v126);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v35);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v40);
    }
    Outpop::Utility::Lock::unlock(v33);
  }
  v41 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 15);
  if ( v41 )
    (**v41)(v41, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v42 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v42);
    v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v44 = Outpop::Utility::Logger::get_log_buffer(v43);
    v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v45);
    v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v47 = Outpop::Utility::Logger::make_dt(v46);
    v48 = sub_10023490(v44, L"\nLOGINFO %s:%s Message:", v47);
    sub_10023490(&v44[v48], L"release channel manager...", v127);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v44);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v49);
    }
    Outpop::Utility::Lock::unlock(v42);
  }
  v50 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 8);
  if ( v50 )
    (**v50)(v50, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v51 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v51);
    v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v53 = Outpop::Utility::Logger::get_log_buffer(v52);
    v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v54);
    v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v56 = Outpop::Utility::Logger::make_dt(v55);
    v57 = sub_10023490(v53, L"\nLOGINFO %s:%s Message:", v56);
    sub_10023490(&v53[v57], L"release acceptor manager...", v128);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v53);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v58 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v58);
    }
    Outpop::Utility::Lock::unlock(v51);
  }
  v59 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 7);
  if ( v59 )
    (**v59)(v59, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v60 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v60);
    v61 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v62 = Outpop::Utility::Logger::get_log_buffer(v61);
    v63 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v63);
    v64 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v65 = Outpop::Utility::Logger::make_dt(v64);
    v66 = sub_10023490(v62, L"\nLOGINFO %s:%s Message:", v65);
    sub_10023490(&v62[v66], L"release connector manager...", v129);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v62);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v67 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v67);
    }
    Outpop::Utility::Lock::unlock(v60);
  }
  v68 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9);
  if ( v68 )
    (**v68)(v68, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v69 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v69);
    v70 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v71 = Outpop::Utility::Logger::get_log_buffer(v70);
    v72 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v72);
    v73 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v74 = Outpop::Utility::Logger::make_dt(v73);
    v75 = sub_10023490(v71, L"\nLOGINFO %s:%s Message:", v74);
    sub_10023490(&v71[v75], L"release remote event manager...", v130);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v71);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v76 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v76);
    }
    Outpop::Utility::Lock::unlock(v69);
  }
  v77 = (char *)*((_DWORD *)this + 18);
  if ( v77 )
  {
    sub_10006F70(v77 + 44);
    sub_10007720(v77 + 4);
    operator delete(v77);
  }
  v78 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 17);
  if ( v78 )
    (**v78)(v78, 1);
  v79 = (void *)*((_DWORD *)this + 19);
  if ( v79 )
  {
    sub_1001AC90(*((_DWORD *)this + 19));
    operator delete(v79);
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v80 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v80);
    v81 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v82 = Outpop::Utility::Logger::get_log_buffer(v81);
    v83 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v83);
    v84 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v85 = Outpop::Utility::Logger::make_dt(v84);
    v86 = sub_10023490(v82, L"\nLOGINFO %s:%s Message:", v85);
    sub_10023490(&v82[v86], L"release group request ack...", v131);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v82);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v87 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v87);
    }
    Outpop::Utility::Lock::unlock(v80);
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v88 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v88);
    v89 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v90 = Outpop::Utility::Logger::get_log_buffer(v89);
    v91 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v91);
    v92 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v93 = Outpop::Utility::Logger::make_dt(v92);
    v94 = sub_10023490(v90, L"\nLOGINFO %s:%s Message:", v93);
    sub_10023490(&v90[v94], L"release request ack...", v132);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v90);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v95 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v95);
    }
    Outpop::Utility::Lock::unlock(v88);
  }
  v96 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 11);
  if ( v96 )
    (**v96)(v96, 1);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v97 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v97);
    v98 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v99 = Outpop::Utility::Logger::get_log_buffer(v98);
    v100 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v100);
    v101 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v102 = Outpop::Utility::Logger::make_dt(v101);
    v103 = sub_10023490(v99, L"\nLOGINFO %s:%s Message:", v102);
    sub_10023490(&v99[v103], L"release message sender...", v133);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v99);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v104 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v104);
    }
    Outpop::Utility::Lock::unlock(v97);
  }
  v105 = (void *)*((_DWORD *)this + 10);
  if ( v105 )
  {
    Outpop::Message::Message_Sender::~Message_Sender(*((Outpop::Message::Message_Sender **)this + 10));
    operator delete(v105);
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v106 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v106);
    v107 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v108 = Outpop::Utility::Logger::get_log_buffer(v107);
    v109 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v109);
    v110 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v111 = Outpop::Utility::Logger::make_dt(v110);
    v112 = sub_10023490(v108, L"\nLOGINFO %s:%s Message:", v111);
    sub_10023490(&v108[v112], L"release handler manager...", v134);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v108);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v113 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v113);
    }
    Outpop::Utility::Lock::unlock(v106);
  }
  v114 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 12);
  if ( v114 )
    (**v114)(v114, 1);
  v115 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 20);
  if ( v115 )
    (**v115)(v115, 1);
  sub_100028B0((int)this + 92);
  v116 = (_DWORD **)*((_DWORD *)this + 5);
  v117 = *v116;
  *v116 = v116;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v118 = v117 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v118 )
  {
    do
    {
      v119 = (_DWORD *)*v117;
      operator delete(v117);
      v117 = v119;
    }
    while ( v119 != *((_DWORD **)this + 5) );
  }
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  v120 = (_DWORD **)*((_DWORD *)this + 2);
  v121 = *v120;
  *v120 = v120;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
  v118 = v121 == *((_DWORD **)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( !v118 )
  {
    do
    {
      v122 = (_DWORD *)*v121;
      operator delete(v121);
      v121 = v122;
    }
    while ( v122 != *((_DWORD **)this + 2) );
  }
  operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
}
