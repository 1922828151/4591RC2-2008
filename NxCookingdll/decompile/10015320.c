/*
 * func-name: sub_10015320
 * func-address: 0x10015320
 * callers: 0x10011260
 * callees: 0x10015030, 0x100358bf, 0x100359ff
 */

char __thiscall sub_10015320(void *this, char *FileName, const char *a3)
{
  FILE *v4; // eax
  FILE *v5; // esi
  char v7; // bl

  if ( a3 )
    v4 = fopen(FileName, a3);
  else
    v4 = fopen(FileName, "wb");
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = sub_10015030((int)this, v4);
  fclose(v5);
  return v7;
}
