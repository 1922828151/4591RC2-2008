/*
 * func-name: sub_100276E0
 * func-address: 0x100276e0
 * callers: 0x10028f40
 * callees: 0x10025ff0
 */

char *__cdecl sub_100276E0(_DWORD *a1, _DWORD *a2)
{
  int v2; // ebp
  int v3; // esi
  int v4; // edi
  char *v5; // eax
  char *v6; // eax
  char *result; // eax
  bool v8; // zf
  int v9; // [esp+10h] [ebp-8h]
  char *v10; // [esp+14h] [ebp-4h]
  char *v11; // [esp+14h] [ebp-4h]

  v2 = 2;
  v9 = 3;
  do
  {
    v3 = a1[(v2 - 1) % 3];
    v4 = a1[v2 % 3];
    v10 = sub_10025FF0(a2, v4, v3);
    v5 = sub_10025FF0(a1, v3, v4);
    *(_DWORD *)sub_10025FF0(*(_DWORD **)(dword_1005B470 + 4 * *(_DWORD *)v5), v4, v3) = *(_DWORD *)v10;
    v11 = sub_10025FF0(a1, v3, v4);
    v6 = sub_10025FF0(a2, v4, v3);
    result = sub_10025FF0(*(_DWORD **)(dword_1005B470 + 4 * *(_DWORD *)v6), v3, v4);
    ++v2;
    v8 = v9-- == 1;
    *(_DWORD *)result = *(_DWORD *)v11;
  }
  while ( !v8 );
  return result;
}
