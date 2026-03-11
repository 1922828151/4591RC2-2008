/*
 * func-name: sub_10015030
 * func-address: 0x10015030
 * callers: 0x10015320
 * callees: 0x10014ef0, 0x10035f3c
 */

char __thiscall sub_10015030(int this, FILE *Stream)
{
  int v3; // esi
  size_t v4; // edi
  size_t v5; // edi

  sub_10014EF0((_BYTE *)this);
  v3 = *(_DWORD *)(this + 4);
  if ( *(_DWORD *)(v3 + 12) )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        if ( fwrite(*(const void **)v3, 1u, v4, Stream) != v4 )
          break;
      }
      v3 = *(_DWORD *)(v3 + 12);
      if ( !*(_DWORD *)(v3 + 12) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = *(_DWORD *)(v3 + 4);
    if ( !v5 || fwrite(*(const void **)v3, 1u, v5, Stream) == v5 )
      return 1;
  }
  return 0;
}
