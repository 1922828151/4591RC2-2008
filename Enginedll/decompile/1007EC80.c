/*
 * func-name: ?IsActor@Editor@@QAE_NPAVActor@@@Z
 * func-address: 0x1007ec80
 * callers: 0x10083100, 0x1008e470
 * callees: none
 */

char __thiscall Editor::IsActor(Editor *this, struct Actor *a2)
{
  unsigned int i; // edi
  int v4; // esi
  int v5; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 512);
    v5 = *(_DWORD *)(v4 + 3224);
    if ( !v5 || i >= (*(_DWORD *)(v4 + 3228) - v5) >> 2 )
      break;
    if ( *(struct Actor **)(*(_DWORD *)(v4 + 3224) + 4 * i) == a2 )
      return 1;
  }
  return 0;
}
