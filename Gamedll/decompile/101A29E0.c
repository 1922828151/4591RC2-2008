/*
 * func-name: ?SwitchEstabState@Establishment@GameClient@@QAE_NW4Estab_State_Type@2@@Z_0
 * func-address: 0x101a29e0
 * callers: 0x10011577
 * callees: none
 */

char __thiscall GameClient::Establishment::SwitchEstabState(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // ecx

  v3 = this[95];
  if ( v3 )
    v4 = (this[96] - v3) >> 2;
  else
    v4 = 0;
  if ( a2 > v4 )
    return 0;
  v5 = this[98];
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v6 = this[95];
  v7 = a2 - 1;
  if ( !v6 || v7 >= (this[96] - v6) >> 2 )
    _invalid_parameter_noinfo();
  v8 = *(_DWORD *)(this[95] + 4 * v7);
  this[98] = v8;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  return 1;
}
