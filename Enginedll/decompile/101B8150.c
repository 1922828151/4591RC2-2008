/*
 * func-name: sub_101B8150
 * func-address: 0x101b8150
 * callers: none
 * callees: 0x10009730
 */

int sub_101B8150()
{
  char *v0; // esi
  int i; // edi
  int result; // eax

  v0 = (char *)&FXManager::vertexIndicesBatches;
  for ( i = 99; i >= 0; --i )
  {
    result = sub_10009730((int)v0, 24, 6004, (int (__thiscall *)(int))sub_100012D0);
    v0 += 162110;
  }
  return result;
}
