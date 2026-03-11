/*
 * func-name: sub_10108BC0
 * func-address: 0x10108bc0
 * callers: 0x1000ce20, 0x1000d550, 0x1000d9a0, 0x1000e4f0, 0x1000e6c0, 0x1000e890, 0x1001fed0, 0x10020000, 0x10020130, 0x10020260, 0x100218c0, 0x10021a90, 0x10021c60, 0x10021e30, 0x100220e0, 0x100228a0, 0x10022c20, 0x10022df0, 0x10022fc0, 0x10023270, 0x10023440, 0x10023610, 0x100238d0, 0x100588c0, 0x10058a90, 0x10058c60, 0x10058e40, 0x1006e4d0, 0x1006e6a0, 0x1006eb30, 0x1006ed00, 0x1006eed0, 0x10077220, 0x100773f0, 0x100d07b0, 0x100d0980, 0x100d0b50, 0x10108f10
 * callees: none
 */

char *__cdecl sub_10108BC0(void *Source, int a2, char *Destination)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a2 - (int)Source) >> 2;
  v4 = &Destination[4 * v3];
  if ( v3 > 0 )
    memmove_s(Destination, 4 * v3, Source, 4 * v3);
  return v4;
}
