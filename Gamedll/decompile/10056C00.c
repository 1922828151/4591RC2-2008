/*
 * func-name: sub_10056C00
 * func-address: 0x10056c00
 * callers: 0x10012a7b
 * callees: 0x10014c90
 */

int __stdcall sub_10056C00(struct SOUND_OPTION *a1, struct SOUND_OPTION *a2)
{
  struct SOUND_OPTION *i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i = (struct SOUND_OPTION *)((char *)i + 80) )
    result = sub_10014C90(v4, v5);
  return result;
}
