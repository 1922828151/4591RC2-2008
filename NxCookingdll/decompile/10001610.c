/*
 * func-name: sub_10001610
 * func-address: 0x10001610
 * callers: 0x100021a0, 0x10002260, 0x10002400, 0x10002970, 0x10002a80, 0x10002b70, 0x10002c60, 0x10002d40, 0x10002e20, 0x10002f00, 0x10002fe0, 0x10003120, 0x10003250, 0x10003340
 * callees: 0x100015a0
 */

const char *__thiscall sub_10001610(char *this, const char *a2)
{
  const char *v2; // edi
  int v4; // kr00_4
  char *v5; // edx
  const char *result; // eax
  int v7; // edx
  char v8; // cl

  v2 = a2;
  if ( !a2 )
    v2 = (const char *)&unk_10049374;
  v4 = strlen(v2);
  *((_DWORD *)this + 6) = v4;
  sub_100015A0((int)this, v4);
  v5 = (char *)*((_DWORD *)this + 4);
  if ( !v5 )
    v5 = this;
  result = v2;
  v7 = v5 - v2;
  do
  {
    v8 = *result;
    result[v7] = *result;
    ++result;
  }
  while ( v8 );
  return result;
}
