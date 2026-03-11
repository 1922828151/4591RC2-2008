/*
 * func-name: ?Compile@Editor@@QAE_NAAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@_NPAVCompilerCallback@@@Z
 * func-address: 0x10083250
 * callers: none
 * callees: 0x1000d4b0, 0x1007bf30, 0x1007dc30
 */

char __stdcall Editor::Compile(int a1, char a2, int a3)
{
  int v3; // eax
  char v5; // bl
  int v6[6]; // [esp-10h] [ebp-48h] BYREF
  _DWORD v7[6]; // [esp+8h] [ebp-30h] BYREF
  char v8; // [esp+20h] [ebp-18h]
  char v9; // [esp+21h] [ebp-17h]
  float v10; // [esp+24h] [ebp-14h]
  float v11; // [esp+28h] [ebp-10h]
  int v12; // [esp+34h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 || !((*(_DWORD *)(a1 + 8) - v3) >> 2) )
    return 0;
  v8 = 1;
  v10 = 100.0;
  v7[4] = 0;
  v11 = 100.0;
  v7[1] = 0;
  LOWORD(v7[0]) = 0;
  v9 = 0;
  v7[2] = 0;
  v7[3] = GetTickCount();
  v12 = 0;
  v7[5] = a3;
  if ( a2 )
  {
    v9 = 1;
    v10 = 33.0;
    v11 = 0.0;
  }
  std::vector<Actor *>::vector<Actor *>(v6, a1);
  v5 = sub_1007DC30(v7, v6[0], (_DWORD *)v6[1], v6[2], v6[3]);
  v12 = -1;
  nullsub_1();
  return v5;
}
