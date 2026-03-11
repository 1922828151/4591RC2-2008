/*
 * func-name: ?CompileScene@Editor@@QAE_N_NPAVCompilerCallback@@@Z
 * func-address: 0x1007ed00
 * callers: none
 * callees: 0x1007bf30, 0x1007dcf0
 */

char __thiscall Editor::CompileScene(Editor *this, bool a2, struct CompilerCallback *a3)
{
  char v4; // bl
  _DWORD v6[6]; // [esp+4h] [ebp-30h] BYREF
  char v7; // [esp+1Ch] [ebp-18h]
  char v8; // [esp+1Dh] [ebp-17h]
  float v9; // [esp+20h] [ebp-14h]
  float v10; // [esp+24h] [ebp-10h]
  int v11; // [esp+30h] [ebp-4h]

  v9 = 100.0;
  v10 = 100.0;
  v7 = 1;
  v6[4] = 0;
  v6[1] = 0;
  LOWORD(v6[0]) = 0;
  v8 = 0;
  v6[2] = 0;
  v6[3] = GetTickCount();
  v11 = 0;
  v6[5] = a3;
  if ( a2 )
  {
    v8 = 1;
    v9 = 33.0;
    v10 = 0.0;
  }
  v4 = sub_1007DCF0(v6, *((_DWORD *)this + 512));
  v11 = -1;
  nullsub_1();
  return v4;
}
