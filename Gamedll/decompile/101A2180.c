/*
 * func-name: ?RequestUnBoard@Establishment@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101a2180
 * callers: 0x10017d0a
 * callees: 0x10005196, 0x102c9dbc
 */

bool __thiscall GameClient::Establishment::RequestUnBoard(float **this, struct GameClient::LocalCharacter *a2)
{
  float *v4; // eax
  unsigned int i; // edi
  float *v6; // ecx
  float *v7; // ecx
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]

  if ( !(*((unsigned __int8 (__thiscall **)(float **))*this + 27))(this) )
    return 0;
  v4 = this[75];
  v8 = v4[212] * v4[212] + v4[211] * v4[211] + v4[213] * v4[213];
  v9 = sqrt(v8);
  if ( this[2][117] < (double)v9 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v6 = this[49];
    if ( !v6 || i >= this[50] - v6 )
      return 0;
    v7 = this[49];
    if ( *(_DWORD *)(LODWORD(v7[i]) + 76) == *((_DWORD *)a2 + 73) )
      break;
  }
  if ( !v7 || i >= this[50] - v7 )
    _invalid_parameter_noinfo();
  return GameClient::Seat::RequestUnBoard((GameClient::Seat *)LODWORD(this[49][i]), a2);
}
