/*
 * func-name: ?create@LogicFactory@GameClient@@QAEPAVSerializeObject@@K@Z_0
 * func-address: 0x101dd580
 * callers: 0x1001ac9e
 * callees: 0x1000195b
 */

struct SerializeObject *__thiscall GameClient::LogicFactory::create(GameClient::LogicFactory *this, unsigned int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1000195B((int)&v8, (int)&a2);
  v3 = *((_DWORD *)this + 12);
  v4 = (char *)this + 44;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v5 + 1) )
    _invalid_parameter_noinfo();
  return (struct SerializeObject *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 12) + 4))(*(_DWORD *)(v6 + 12));
}
