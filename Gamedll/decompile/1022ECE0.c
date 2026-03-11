/*
 * func-name: ?RefreshFlyweigth@FlyweightManager@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1022ece0
 * callers: 0x1000f722
 * callees: 0x10006e51, 0x1000913d, 0x10009971, 0x100130a2, 0x10015410, 0x1001a3fc, 0x1001a681, 0x102c9d50, 0x102c9d62
 */

char __thiscall GameClient::FlyweightManager::RefreshFlyweigth(_DWORD *this, int a2)
{
  int v3; // edi
  void *v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v8; // edi
  _DWORD *v9; // esi
  int v10; // edi
  unsigned int v11; // esi
  _DWORD **v12; // ecx
  _DWORD **v13; // ecx
  int v14; // [esp+14h] [ebp-4Ch] BYREF
  void *v15; // [esp+18h] [ebp-48h]
  int v16; // [esp+1Ch] [ebp-44h] BYREF
  void *v17; // [esp+20h] [ebp-40h]
  int v18; // [esp+24h] [ebp-3Ch] BYREF
  void *v19; // [esp+28h] [ebp-38h]
  int v20; // [esp+2Ch] [ebp-34h]
  int v21; // [esp+30h] [ebp-30h]
  _BYTE v22[28]; // [esp+34h] [ebp-2Ch] BYREF
  int v23; // [esp+5Ch] [ebp-4h]

  sub_1000913D((int)&v14, a2);
  v3 = v14;
  v4 = (void *)this[12];
  if ( !v14 || (_DWORD *)v14 != this + 11 )
    _invalid_parameter_noinfo();
  if ( v15 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v15 == *(void **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *((_DWORD *)v15 + 9);
  GameClient::Flyweight::GetFlyweightFilename(v22);
  v6 = *(_DWORD *)(v5 + 48);
  v23 = 0;
  sub_10006E51((int)&v16, v14, v15);
  v14 = v6;
  sub_10015410((int)&v16, (int)&v14);
  sub_10009971((int)&v16, v16, v17);
  (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  if ( !(unsigned __int8)GameClient::FlyweightManager::LoadFlyweightFromFile(v22) )
  {
    v23 = -1;
    std::string::~string(v22);
    return 0;
  }
  v14 = v6;
  sub_10015410((int)&v16, (int)&v14);
  v8 = v16;
  if ( !v16 )
    _invalid_parameter_noinfo();
  v9 = v17;
  if ( v17 == *(void **)(v8 + 4) )
    _invalid_parameter_noinfo();
  v10 = v9[3];
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  LOBYTE(v23) = 1;
  sub_1001A681(v6, (int)&v18);
  v11 = 0;
  while ( v19 )
  {
    if ( v11 >= (v20 - (int)v19) >> 2 )
    {
      operator delete(v19);
      break;
    }
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v19 + v11) + 20))(*((_DWORD *)v19 + v11), v10);
    v12 = (_DWORD **)v19;
    if ( !v19 || v11 >= (v20 - (int)v19) >> 2 )
    {
      _invalid_parameter_noinfo();
      v12 = (_DWORD **)v19;
    }
    (*(void (__thiscall **)(_DWORD *))(*v12[v11] + 28))(v12[v11]);
    v13 = (_DWORD **)v19;
    if ( !v19 || v11 >= (v20 - (int)v19) >> 2 )
    {
      _invalid_parameter_noinfo();
      v13 = (_DWORD **)v19;
    }
    (*(void (__thiscall **)(_DWORD *))(*v13[v11] + 24))(v13[v11]);
    ++v11;
  }
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = -1;
  std::string::~string(v22);
  return 1;
}
