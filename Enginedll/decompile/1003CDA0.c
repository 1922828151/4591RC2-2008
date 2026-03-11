/*
 * func-name: sub_1003CDA0
 * func-address: 0x1003cda0
 * callers: 0x1003ce00, 0x1003d040, 0x1003dda0
 * callees: 0x101a24ac, 0x101a252e
 */

int __cdecl sub_1003CDA0(const char *Src, _DWORD *a2)
{
  unsigned int v2; // kr00_4
  void *v3; // eax

  if ( Src )
  {
    v2 = strlen(Src);
    v3 = operator new(v2 + 1);
    *a2 = v3;
    if ( v3 )
    {
      memcpy(v3, Src, v2 + 1);
      return 0;
    }
    else
    {
      return -2147024882;
    }
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
