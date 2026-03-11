/*
 * func-name: sub_10013A20
 * func-address: 0x10013a20
 * callers: 0x10012d90, 0x10012e40, 0x100135f0, 0x10013790
 * callees: 0x100232f7
 */

int __fastcall sub_10013A20(char *Buffer, char *Destination, char *a3, _WORD *a4)
{
  char *v7; // esi
  char *v8; // eax
  char *v9; // ebx
  const char *v10; // [esp+14h] [ebp-20Ch]
  char *Buffera; // [esp+18h] [ebp-208h]
  char Str[512]; // [esp+1Ch] [ebp-204h] BYREF

  if ( sscanf(Buffer, "http://%511s", Str) != 1 && sscanf(Buffer, "%511s", Str) != 1 )
    return -893;
  v7 = strchr(Str, 58);
  v8 = strchr(Str, 47);
  if ( !v8 )
    return -893;
  v10 = v8 + 1;
  if ( v7 && v7 <= v8 )
  {
    Buffera = v7 + 1;
    if ( v8 - (v7 + 1) > 5 )
      return -893;
    v9 = v7;
  }
  else
  {
    v7 = 0;
    if ( a4 )
      *a4 = 80;
    v9 = v8;
  }
  if ( Destination )
  {
    strncpy(Destination, Str, v9 - Str);
    v9[Destination - Str] = 0;
  }
  if ( !v7 )
    goto LABEL_18;
  if ( sscanf(Buffera, "%hd", a4) == 1 )
  {
    if ( *a4 < 0x4000u )
      goto LABEL_18;
    return -893;
  }
  *a4 = 80;
LABEL_18:
  if ( a3 )
    strcpy(a3, v10);
  return 0;
}
