/*
 * func-name: ?EnumerateActorsInBox@World@@QAE?AV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@_N0ABVVector@@1@Z
 * func-address: 0x1013f700
 * callers: none
 * callees: 0x1000d4b0, 0x1005f1c0, 0x101a2500
 */

_DWORD *__stdcall World::EnumerateActorsInBox(_DWORD *a1, char a2, char a3, int a4, int a5)
{
  int v5; // esi
  void *v6; // eax
  void **v8; // [esp+10h] [ebp-20h] BYREF
  _BYTE v9[4]; // [esp+14h] [ebp-1Ch] BYREF
  void *v10; // [esp+18h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-14h]
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+2Ch] [ebp-4h]

  v5 = a2 != 0;
  if ( a3 )
    v5 |= 2u;
  v8 = &EnumColliders::`vftable';
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v6 = sub_1005F1C0();
  (*(void (__thiscall **)(void *, int, int, int, _DWORD, void ***))(*(_DWORD *)v6 + 40))(v6, v5, a4, a5, 0, &v8);
  std::vector<Actor *>::vector<Actor *>(a1, (int)v9);
  if ( v10 )
    operator delete(v10);
  return a1;
}
