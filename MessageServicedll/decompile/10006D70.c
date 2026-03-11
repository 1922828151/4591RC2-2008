/*
 * func-name: ?allow_this_ip@Context@Message@Outpop@@QAE_NGI@Z
 * func-address: 0x10006d70
 * callers: 0x1000e370
 * callees: 0x100083d0, 0x10015df0
 */

bool __thiscall Outpop::Message::Context::allow_this_ip(Outpop::Message::Context *this, char a2, unsigned int a3)
{
  int v4; // ebx
  char *v5; // eax
  char *v6; // esi
  int v7; // edi
  int v8; // esi
  char *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  sub_100083D0(&v10, &a2);
  v4 = *((_DWORD *)this + 25);
  v5 = (char *)this + 96;
  v6 = v10;
  if ( !v10 || v10 != v5 )
    invalid_parameter_noinfo();
  v7 = v11;
  if ( v11 == v4 )
    return 1;
  if ( !v6 )
    invalid_parameter_noinfo();
  if ( v7 == *((_DWORD *)v6 + 1) )
    invalid_parameter_noinfo();
  sub_10015DF0(&v10, &a3);
  if ( v7 == *((_DWORD *)v6 + 1) )
    invalid_parameter_noinfo();
  v8 = *(_DWORD *)(v7 + 20);
  if ( !v10 || v10 != (char *)(v7 + 16) )
    invalid_parameter_noinfo();
  return v11 != v8;
}
