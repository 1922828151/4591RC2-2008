/*
 * func-name: sub_10014650
 * func-address: 0x10014650
 * callers: 0x100145a0, 0x100146c0
 * callees: none
 */

int __cdecl sub_10014650(_DWORD *a1, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 15:
      result = 0;
      break;
    case 18:
    case 19:
    case 41:
      *a1 = sub_100146C0;
      result = 26;
      break;
    default:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
