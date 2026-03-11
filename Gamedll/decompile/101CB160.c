/*
 * func-name: ?RemoveFunction@FuncManager@GameClient@@QAEPAVFunction@2@K@Z_0
 * func-address: 0x101cb160
 * callers: 0x1000676c
 * callees: 0x10002766, 0x100056e6
 */

struct GameClient::Function *__thiscall GameClient::FuncManager::RemoveFunction(
        GameClient::FuncManager *this,
        unsigned int a2)
{
  void *v3; // ebp
  char *v4; // eax
  int v5; // esi
  _DWORD *v6; // ebx
  int v8; // ebp
  int v9; // [esp+10h] [ebp-8h] BYREF
  void *v10; // [esp+14h] [ebp-4h]

  sub_10002766((int)&v9, (int)&a2);
  v3 = (void *)*((_DWORD *)this + 3);
  v4 = (char *)this + 8;
  v5 = v9;
  if ( !v9 || (char *)v9 != v4 )
    _invalid_parameter_noinfo();
  v6 = v10;
  if ( v10 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == *(_DWORD **)(v5 + 4) )
    _invalid_parameter_noinfo();
  v8 = v6[3];
  sub_100056E6((int)&v9, v5, v6);
  return (struct GameClient::Function *)v8;
}
