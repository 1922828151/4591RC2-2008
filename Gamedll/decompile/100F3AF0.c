/*
 * func-name: ?ClearFxMaterial@AdapterActor@GameClient@@QAEXXZ_0
 * func-address: 0x100f3af0
 * callers: 0x10008210
 * callees: 0x10010983
 */

void __thiscall GameClient::AdapterActor::ClearFxMaterial(GameClient::AdapterActor *this)
{
  char *v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  _BYTE v4[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = (char *)this + 1216;
  v2 = *((_DWORD *)this + 306);
  if ( *((_DWORD *)this + 305) > v2 )
    _invalid_parameter_noinfo();
  v3 = *((_DWORD *)v1 + 1);
  if ( v3 > *((_DWORD *)v1 + 2) )
    _invalid_parameter_noinfo();
  sub_10010983((int)v4, (int)v1, v3, (int)v1, v2);
}
