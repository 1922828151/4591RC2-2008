/*
 * func-name: ?GetFunctionByType@Establishment@GameClient@@QAEPAVFunction@2@W4FUNCTION_TYPE@@@Z_0
 * func-address: 0x101a2950
 * callers: 0x10011f3b
 * callees: none
 */

int __thiscall GameClient::Establishment::GetFunctionByType(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax

  for ( i = 0; ; ++i )
  {
    v4 = this[65];
    if ( !v4 || i >= (this[66] - v4) >> 2 )
      return 0;
    v5 = this[65];
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 4 * i) + 40) == a2 )
      break;
  }
  if ( !v5 || i >= (this[66] - v5) >> 2 )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(this[65] + 4 * i);
}
