/*
 * func-name: sub_100147A0
 * func-address: 0x100147a0
 * callers: 0x100145a0, 0x100146c0, 0x10014760
 * callees: none
 */

int __cdecl sub_100147A0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  switch ( a2 )
  {
    case 15:
      return 0;
    case 20:
      if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "IMPLIED") )
      {
        *a1 = sub_10014520;
        return 29;
      }
      if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "REQUIRED") )
      {
        *a1 = sub_10014520;
        return 30;
      }
      if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "FIXED") )
      {
        *a1 = sub_10014880;
        return 0;
      }
      break;
    case 27:
      *a1 = sub_10014520;
      return 31;
  }
  *a1 = sub_10014D60;
  return -1;
}
