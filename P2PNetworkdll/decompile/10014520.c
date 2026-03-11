/*
 * func-name: sub_10014520
 * func-address: 0x10014520
 * callers: 0x100144e0, 0x100147a0, 0x10014880
 * callees: none
 */

int __cdecl sub_10014520(_DWORD *a1, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 15:
      result = 0;
      break;
    case 17:
      *a1 = sub_10013F50;
      result = 0;
      break;
    case 18:
    case 41:
      *a1 = sub_100145A0;
      result = 17;
      break;
    default:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
