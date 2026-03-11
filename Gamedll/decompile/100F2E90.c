/*
 * func-name: ?SetFxMaterialValue@AdapterActor@GameClient@@QAE_NHM@Z_0
 * func-address: 0x100f2e90
 * callers: 0x1000c08b
 * callees: none
 */

char __thiscall GameClient::AdapterActor::SetFxMaterialValue(GameClient::AdapterActor *this, unsigned int a2, float a3)
{
  int v4; // eax
  int v6; // eax

  v4 = *((_DWORD *)this + 305);
  if ( !v4 || a2 >= (*((_DWORD *)this + 306) - v4) / 36 )
    return 0;
  v6 = *((_DWORD *)this + 305);
  if ( !v6 || a2 >= (*((_DWORD *)this + 306) - v6) / 36 )
    _invalid_parameter_noinfo();
  *(float *)(*((_DWORD *)this + 305) + 36 * a2 + 32) = a3;
  return 1;
}
