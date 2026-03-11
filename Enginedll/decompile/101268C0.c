/*
 * func-name: sub_101268C0
 * func-address: 0x101268c0
 * callers: 0x10126b00
 * callees: 0x101267d0
 */

_BYTE *__cdecl sub_101268C0(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  sub_101267D0(a1, a2, a3);
  return &a3[-60 * ((a2 - a1) / 60)];
}
