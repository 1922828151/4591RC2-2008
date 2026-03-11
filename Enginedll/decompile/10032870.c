/*
 * func-name: sub_10032870
 * func-address: 0x10032870
 * callers: 0x10032ab0, 0x10172460, 0x10172520, 0x10172700, 0x10175180, 0x10175470
 * callees: 0x10032590, 0x101a2500, 0x101a2522, 0x101a2534
 */

char *__stdcall sub_10032870(int a1, int a2, _DWORD *a3)
{
  char *v3; // esi
  int v5; // [esp+0h] [ebp-20h] BYREF
  void *v6; // [esp+Ch] [ebp-14h]
  int *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = &v5;
  v3 = (char *)operator new(0x84u);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *(_DWORD *)v3 = a1;
  if ( v3 != (char *)-4 )
    *((_DWORD *)v3 + 1) = a2;
  sub_10032590(v3 + 8, a3);
  return v3;
}
