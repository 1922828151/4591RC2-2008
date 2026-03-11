/*
 * func-name: sub_10001FB0
 * func-address: 0x10001fb0
 * callers: none
 * callees: 0x10001c10
 */

int __stdcall sub_10001FB0(FILE *Stream, int *a2)
{
  int v2; // eax
  char v4; // [esp-20h] [ebp-2Ch] BYREF
  int v5; // [esp-1Ch] [ebp-28h]
  int v6; // [esp-18h] [ebp-24h]
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp-10h] [ebp-1Ch]
  int v9; // [esp-Ch] [ebp-18h]
  int v10; // [esp-8h] [ebp-14h]
  FILE *v11; // [esp-4h] [ebp-10h]

  fwrite((const void *)(*a2 + 1428), 4u, 1u, Stream);
  fwrite((const void *)(*a2 + 1076), 0x48u, 1u, Stream);
  fwrite((const void *)(*a2 + 1420), 1u, 1u, Stream);
  v2 = *a2;
  v11 = Stream;
  std::string::string(&v4, v2 + 1364);
  return sub_10001C10(v4, v5, v6, v7, v8, v9, v10, v11);
}
