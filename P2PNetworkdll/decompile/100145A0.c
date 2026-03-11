/*
 * func-name: sub_100145A0
 * func-address: 0x100145a0
 * callers: 0x10014520
 * callees: none
 */

int __cdecl sub_100145A0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int i; // esi

  switch ( a2 )
  {
    case 15:
      return 0;
    case 18:
      for ( i = 0; i < 8; ++i )
      {
        if ( (*(int (__cdecl **)(int, int, int, char *))(a5 + 24))(a5, a3, a4, off_100300C0[i]) )
        {
          *a1 = sub_100147A0;
          return i + 18;
        }
      }
      if ( !(*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "NOTATION") )
        goto LABEL_11;
      *a1 = sub_10014700;
      return 0;
    case 23:
      *a1 = sub_10014650;
      return 0;
    default:
LABEL_11:
      *a1 = sub_10014D60;
      return -1;
  }
}
