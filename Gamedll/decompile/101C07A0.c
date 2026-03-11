/*
 * func-name: ?GetStock@Func_Receive@GameClient@@QAEJK@Z_0
 * func-address: 0x101c07a0
 * callers: 0x10014619
 * callees: 0x10002bb7
 */

int __thiscall GameClient::Func_Receive::GetStock(GameClient::Func_Receive *this, unsigned int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10002BB7((int)&v8, (int)&a2);
  v3 = *((_DWORD *)this + 13);
  v4 = (char *)this + 48;
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
  return *(_DWORD *)(v6 + 12);
}
