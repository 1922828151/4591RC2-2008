/*
 * func-name: ?initialize@Context@Message@Outpop@@QAEXXZ
 * func-address: 0x100063b0
 * callers: 0x1000c660
 * callees: 0x1000e7b0, 0x100138e0, 0x10023490
 */

void __thiscall Outpop::Message::Context::initialize(Outpop::Message::Context *this)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  int v10; // eax
  Outpop::Utility::Lock *v11; // ebp
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *v16; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Lock *v19; // ebp
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // eax
  Outpop::Utility::Logger *v26; // eax
  int v27; // eax
  Outpop::Utility::Lock *v28; // ebp
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // eax
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Lock *v36; // ebp
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // esi
  Outpop::Utility::Logger *v39; // eax
  Outpop::Utility::Logger *v40; // eax
  wchar_t *v41; // eax
  int v42; // eax
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Lock *v44; // edi
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // esi
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // eax
  int v50; // eax
  Outpop::Utility::Logger *v51; // eax
  int v52; // [esp+18h] [ebp-34h]
  wchar_t *tm; // [esp+24h] [ebp-28h]
  wchar_t *v54; // [esp+24h] [ebp-28h]
  wchar_t *v55; // [esp+24h] [ebp-28h]
  wchar_t *v56; // [esp+24h] [ebp-28h]

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
    sub_10023490(&log_buffer[v8], L"begin initialize context objects...", v52);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  (*(void (__thiscall **)(Outpop::Message::Context *))(*(_DWORD *)this + 12))(this);
  v10 = *((_DWORD *)this + 11);
  *(_BYTE *)(v10 + 164) = *((_BYTE *)this + 84) == 1;
  if ( !*((_DWORD *)this + 13) )
    *((_DWORD *)this + 13) = 1;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v11 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v11);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v13 = Outpop::Utility::Logger::get_log_buffer(v12);
    v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v14);
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v16 = Outpop::Utility::Logger::make_dt(v15);
    v17 = sub_10023490(v13, L"\nLOGINFO %s:%s Message:", v16);
    sub_10023490(&v13[v17], L"active io thread,size is %d...", *((_DWORD *)this + 13));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v13);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v18);
    }
    Outpop::Utility::Lock::unlock(v11);
  }
  Outpop::Utility::Task::activate(*((Outpop::Utility::Task **)this + 16), *((_DWORD *)this + 13), 0, 0, 0, 0);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v19 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v19);
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v21 = Outpop::Utility::Logger::get_log_buffer(v20);
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v22);
    v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::make_dt(v23);
    v25 = sub_10023490(v21, L"\nLOGINFO %s:%s Message:", v24, tm);
    sub_10023490(&v21[v25], L"active block thread,size is %d...", *((_DWORD *)this + 14));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v21);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v26);
    }
    Outpop::Utility::Lock::unlock(v19);
  }
  v27 = *((_DWORD *)this + 14);
  if ( v27 )
    Outpop::Utility::Task::activate(*((Outpop::Utility::Task **)this + 15), v27, 0, 0, 0, 0);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v28 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v28);
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v30 = Outpop::Utility::Logger::get_log_buffer(v29);
    v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v54 = Outpop::Utility::Logger::make_tm(v31);
    v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v33 = Outpop::Utility::Logger::make_dt(v32);
    v34 = sub_10023490(v30, L"\nLOGINFO %s:%s Message:", v33, v54);
    sub_10023490(&v30[v34], L"\tinitializa stream acceptor manager...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v30);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v35);
    }
    Outpop::Utility::Lock::unlock(v28);
  }
  Outpop::Message::Acceptor_Manager::initialize(*((Outpop::Message::Acceptor_Manager **)this + 7));
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v36 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v36);
    v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v38 = Outpop::Utility::Logger::get_log_buffer(v37);
    v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v55 = Outpop::Utility::Logger::make_tm(v39);
    v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v41 = Outpop::Utility::Logger::make_dt(v40);
    v42 = sub_10023490(v38, L"\nLOGINFO %s:%s Message:", v41, v55);
    sub_10023490(&v38[v42], L"\tinitialize stream connector manager...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v38);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v43);
    }
    Outpop::Utility::Lock::unlock(v36);
  }
  Outpop::Message::Connector_Manager::initialize(*((Outpop::Message::Connector_Manager **)this + 9));
  (*(void (__thiscall **)(Outpop::Message::Context *))(*(_DWORD *)this + 16))(this);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v44);
    v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v46 = Outpop::Utility::Logger::get_log_buffer(v45);
    v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v56 = Outpop::Utility::Logger::make_tm(v47);
    v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v49 = Outpop::Utility::Logger::make_dt(v48);
    v50 = sub_10023490(v46, L"\nLOGINFO %s:%s Message:", v49, v56);
    sub_10023490(&v46[v50], L"end initialize context objects...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v46);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v51);
    }
    Outpop::Utility::Lock::unlock(v44);
  }
}
