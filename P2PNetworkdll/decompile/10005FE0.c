/*
 * func-name: ?handle_close@Peer@P2P@Outpop@@UAEXHAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10005fe0
 * callers: none
 * callees: 0x10006a40, 0x1000a570
 */

void __thiscall Outpop::P2P::Peer::handle_close(_DWORD *this, int a2, Outpop::Utility::Ref_Object *a3)
{
  Outpop::Utility::Lock *v4; // edi
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Ref_Object **act_obj; // eax
  Outpop::Utility::Ref_Object *v13; // ecx
  wchar_t *tm; // [esp-4h] [ebp-2Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v15[1] = v4;
    Outpop::Utility::Lock::lock(v4);
    v16 = 0;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_1000A570(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_1000A570(&log_buffer[v10], L"Peer handle error");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    v16 = -1;
    Outpop::Utility::Lock::unlock(v4);
  }
  act_obj = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::Channel::get_act_obj(*(_DWORD *)a3, &a3);
  v16 = 1;
  v13 = *act_obj;
  v15[0] = *act_obj;
  if ( v15[0] )
  {
    Outpop::Utility::Ref_Object::addref(v13);
    v13 = (Outpop::Utility::Ref_Object *)v15[0];
  }
  LOBYTE(v16) = 3;
  if ( a3 )
  {
    Outpop::Utility::Ref_Object::release(a3);
    v13 = (Outpop::Utility::Ref_Object *)v15[0];
  }
  if ( v13 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*(this - 4) + 16))(this - 4, v15);
    sub_10006A40();
    v13 = (Outpop::Utility::Ref_Object *)v15[0];
  }
  v16 = -1;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
}
