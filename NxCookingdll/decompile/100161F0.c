/*
 * func-name: sub_100161F0
 * func-address: 0x100161f0
 * callers: 0x1000ce00, 0x100167a0
 * callees: none
 */

char __cdecl sub_100161F0(int a1, int a2, char a3, int a4)
{
  int v4; // esi
  char *v5; // eax
  char v6; // cl
  char v7; // dl
  char v8; // cl

  v4 = a2;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a4 + 24))(a4, a1, 4 * a2);
  if ( a3 && a2 )
  {
    v5 = (char *)(a1 + 1);
    do
    {
      v6 = *(v5 - 1);
      *(v5 - 1) = v5[2];
      v7 = v5[1];
      v5[2] = v6;
      v8 = *v5;
      *v5 = v7;
      v5[1] = v8;
      v5 += 4;
      --v4;
    }
    while ( v4 );
  }
  return 1;
}
