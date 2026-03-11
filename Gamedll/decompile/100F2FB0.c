/*
 * func-name: ?GetLastHandle@AdapterActor@GameClient@@QAE_NAAH@Z_0
 * func-address: 0x100f2fb0
 * callers: 0x100044ee
 * callees: none
 */

char __thiscall GameClient::AdapterActor::GetLastHandle(GameClient::AdapterActor *this, int *a2)
{
  int v4; // eax
  int v5; // edi

  if ( !*((_DWORD *)this + 311) )
    return 0;
  v4 = *((_DWORD *)this + 310);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 == v4 )
    _invalid_parameter_noinfo();
  if ( v5 == *((_DWORD *)this + 310) )
    _invalid_parameter_noinfo();
  *a2 = *(_DWORD *)(v5 + 8);
  return 1;
}
