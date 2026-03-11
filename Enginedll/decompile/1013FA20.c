/*
 * func-name: ?EnumerateActorsAtPoint@World@@QAE?AV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@_N0ABVVector@@@Z
 * func-address: 0x1013fa20
 * callers: none
 * callees: 0x1000d4b0, 0x1005f1c0, 0x101a2500
 */

_DWORD *__stdcall World::EnumerateActorsAtPoint(_DWORD *a1, char a2, char a3, int a4)
{
  int v4; // esi
  void *v5; // eax
  void **v7; // [esp+Ch] [ebp-20h] BYREF
  int v8; // [esp+10h] [ebp-1Ch] BYREF
  void *v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]

  v4 = a2 != 0;
  if ( a3 )
    v4 |= 2u;
  v7 = &EnumColliders::`vftable';
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v5 = sub_1005F1C0();
  (*(void (__thiscall **)(void *, int, int, _DWORD, void ***))(*(_DWORD *)v5 + 52))(v5, v4, a4, 0, &v7);
  std::vector<Actor *>::vector<Actor *>(a1, (int)&v8);
  if ( v9 )
    operator delete(v9);
  return a1;
}
