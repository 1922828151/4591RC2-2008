/*
 * func-name: sub_1000DB00
 * func-address: 0x1000db00
 * callers: 0x1000d890
 * callees: none
 */

int __userpurge sub_1000DB00@<eax>(int a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // eax

  *(_DWORD *)a2 = a1;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 40) )
    std::streambuf::_Lock();
  v2 = a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
  if ( !*(_DWORD *)(v2 + 8) )
  {
    v3 = *(_DWORD *)(v2 + 44);
    if ( v3 )
      std::ostream::flush(v3);
  }
  *(_BYTE *)(a2 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 8) == 0;
  return a2;
}
