/*
 * func-name: sub_10148E60
 * func-address: 0x10148e60
 * callers: 0x101445d0
 * callees: 0x10064610
 */

int __cdecl sub_10148E60(_DWORD *a1)
{
  int v1; // esi
  int v2; // edi
  struct Canvas *v3; // eax
  struct Canvas *v4; // eax
  struct Canvas *v5; // eax
  int result; // eax
  int v7; // esi
  int v8; // ebx
  struct Canvas *v9; // eax

  v1 = a1[4];
  v2 = a1[1];
  v3 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v3 + 92))(v3);
  for ( ; v2; v1 += 28 )
  {
    --v2;
    v4 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *, int, int, _DWORD))(*(_DWORD *)v4 + 96))(
      v4,
      v1,
      v1 + 12,
      *(_DWORD *)(v1 + 24));
  }
  v5 = Canvas::Instance();
  result = (*(int (__thiscall **)(struct Canvas *))(*(_DWORD *)v5 + 100))(v5);
  v7 = a1[2];
  if ( v7 )
  {
    v8 = a1[5];
    v9 = Canvas::Instance();
    return (*(int (__thiscall **)(struct Canvas *, int, int, int, _DWORD))(*(_DWORD *)v9 + 112))(v9, v7, v8, 40, 0);
  }
  return result;
}
