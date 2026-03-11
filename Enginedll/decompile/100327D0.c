/*
 * func-name: sub_100327D0
 * func-address: 0x100327d0
 * callers: 0x10032bd0, 0x101779b0
 * callees: 0x100322a0, 0x101a2500, 0x101a2522, 0x101a2534
 */

char *__stdcall sub_100327D0(int a1, CREControl *a2, int a3)
{
  char *v3; // esi
  int v5; // [esp+0h] [ebp-20h] BYREF
  void *v6; // [esp+Ch] [ebp-14h]
  int *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = &v5;
  v3 = (char *)operator new(0x9Cu);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *(_DWORD *)v3 = a1;
  if ( v3 != (char *)-4 )
    *((_DWORD *)v3 + 1) = a2;
  LOBYTE(v8) = 1;
  if ( v3 != (char *)-8 )
    sub_100322A0(v3 + 8, a3);
  return v3;
}
