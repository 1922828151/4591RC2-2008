/*
 * func-name: ?ComputerTotalPower@Robot@GameClient@@SAHABV?$vector@PAVFSystemPart@GameClient@@V?$allocator@PAVFSystemPart@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101744a0
 * callers: 0x1000ef34
 * callees: 0x100050d8
 */

int __cdecl GameClient::Robot::ComputerTotalPower(int a1)
{
  int v1; // ebx
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx

  v1 = 0;
  for ( i = 0; i < sub_100050D8(); ++i )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( !v3 || i >= (*(_DWORD *)(a1 + 8) - v3) >> 2 )
      _invalid_parameter_noinfo();
    v4 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(v4 + 4 * i) )
    {
      if ( !v4 || i >= (*(_DWORD *)(a1 + 8) - v4) >> 2 )
        _invalid_parameter_noinfo();
      v1 += *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) + 204);
    }
  }
  return v1;
}
