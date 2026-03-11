/*
 * func-name: ?NewInstance@FlyweightManager@GameClient@@QAEPAVDataObject@2@KK@Z_0
 * func-address: 0x1022de20
 * callers: 0x10013a84
 * callees: 0x10015410
 */

struct GameClient::DataObject *__thiscall GameClient::FlyweightManager::NewInstance(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3)
{
  int v4; // ebx
  char *v5; // eax
  char *v6; // esi
  int v7; // edi
  int v8; // ebx
  char *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  sub_10015410((int)&v10, (int)&a2);
  v4 = *((_DWORD *)this + 2);
  v5 = (char *)this + 4;
  v6 = v10;
  if ( !v10 || v10 != v5 )
    _invalid_parameter_noinfo();
  v7 = v11;
  if ( v11 == v4 )
    return 0;
  if ( !v6 )
    _invalid_parameter_noinfo();
  if ( v7 == *((_DWORD *)v6 + 1) )
    _invalid_parameter_noinfo();
  v8 = (*(int (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v7 + 12) + 8))(*(_DWORD *)(v7 + 12), a3);
  if ( v7 == *((_DWORD *)v6 + 1) )
    _invalid_parameter_noinfo();
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 4))(v8, *(_DWORD *)(v7 + 12));
  return (struct GameClient::DataObject *)v8;
}
