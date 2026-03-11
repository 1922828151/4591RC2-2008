/*
 * func-name: ?FindActor@World@@QAEPAVActor@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x101377c0
 * callers: 0x1004f2e0, 0x1007ea80, 0x1007eb80, 0x10116820, 0x10160210, 0x10166120
 * callees: none
 */

int __thiscall World::FindActor(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = this[806];
    if ( !v4 || i >= (this[807] - v4) >> 2 )
      return 0;
    if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(this[806] + 4 * i) + 444, a2) )
      break;
  }
  v5 = this[806];
  if ( !v5 || i >= (this[807] - v5) >> 2 )
    invalid_parameter_noinfo();
  return *(_DWORD *)(this[806] + 4 * i);
}
