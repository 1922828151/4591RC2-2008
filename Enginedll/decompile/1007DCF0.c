/*
 * func-name: sub_1007DCF0
 * func-address: 0x1007dcf0
 * callers: 0x1007ed00, 0x10083770, 0x1013e2e0
 * callees: 0x1007da70, 0x100e2550
 */

char __thiscall sub_1007DCF0(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx

  this[4] = a2;
  LogPrintf("Compiling...\n");
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(a2 + 3224);
    if ( !v4 || i >= (*(_DWORD *)(a2 + 3228) - v4) >> 2 )
      break;
    if ( !sub_1007DA70(this, *(_DWORD *)(*(_DWORD *)(a2 + 3224) + 4 * i)) )
      return 0;
  }
  LogPrintf("Compiled\n");
  return 1;
}
