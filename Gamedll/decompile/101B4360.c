/*
 * func-name: sub_101B4360
 * func-address: 0x101b4360
 * callers: 0x10012a76
 * callees: none
 */

int __cdecl sub_101B4360(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = std::vector<ModelFrame *>::operator=(i, a3);
  return result;
}
