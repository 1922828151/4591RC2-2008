/*
 * func-name: ?GetFlyweight@FlyweightManager@GameClient@@QAEPAVFlyweight@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1022e0c0
 * callers: 0x1001789b
 * callees: 0x1000913d
 */

int __thiscall GameClient::FlyweightManager::GetFlyweight(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // ebx
  int v13; // esi
  _DWORD *v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+24h] [ebp-4h]

  v17 = 0;
  sub_1000913D((int)&v15, (int)&a2);
  v9 = this[12];
  v10 = this + 11;
  v11 = v15;
  if ( !v15 || v15 != v10 )
    _invalid_parameter_noinfo();
  v12 = v16;
  if ( v16 == v9 )
  {
    v17 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    if ( !v11 )
      _invalid_parameter_noinfo();
    if ( v12 == v11[1] )
      _invalid_parameter_noinfo();
    v13 = *(_DWORD *)(v12 + 36);
    v17 = -1;
    std::string::~string(&a2);
    return v13;
  }
}
