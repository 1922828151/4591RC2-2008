/*
 * func-name: sub_10031E90
 * func-address: 0x10031e90
 * callers: 0x10032790
 * callees: 0x10031b00
 */

void __cdecl sub_10031E90(int a1, int a2)
{
  int i; // esi
  float v3; // ebp
  int v4; // ebx
  float *v5; // edx
  float *j; // ecx
  bool v7; // c0

  if ( a1 != a2 )
  {
    for ( i = a1 + 8; i != a2; i += 8 )
    {
      v3 = *(float *)(i + 4);
      v4 = *(_DWORD *)i;
      v5 = (float *)i;
      if ( v3 >= (double)*(float *)(a1 + 4) )
      {
        for ( j = (float *)i; ; v5 = j )
        {
          v7 = v3 < (double)*(j - 1);
          j -= 2;
          if ( !v7 )
            break;
          *v5 = *j;
          v5[1] = j[1];
        }
        *(_DWORD *)v5 = v4;
        v5[1] = v3;
      }
      else
      {
        sub_10031B00(a1, i, i + 8);
        *(_DWORD *)a1 = v4;
        *(float *)(a1 + 4) = v3;
      }
    }
  }
}
