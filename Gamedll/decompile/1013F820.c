/*
 * func-name: sub_1013F820
 * func-address: 0x1013f820
 * callers: 0x100157cb
 * callees: 0x10003418, 0x10003c38, 0x102c9d62
 */

void __thiscall sub_1013F820(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11,
        float a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int *v17; // eax
  int v18; // edi
  int v19; // ebp
  _BYTE v20[28]; // [esp+10h] [ebp-44h] BYREF
  int v21; // [esp+2Ch] [ebp-28h]
  float v22; // [esp+30h] [ebp-24h]
  float v23; // [esp+34h] [ebp-20h]
  float v24; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+3Ch] [ebp-18h]
  float v26; // [esp+40h] [ebp-14h]
  int v27; // [esp+50h] [ebp-4h]

  v27 = 0;
  std::string::string(v20);
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  LOBYTE(v27) = 1;
  std::string::operator=(v20, &a2);
  v23 = a9;
  v24 = a10;
  v25 = a11;
  v17 = *(int **)(this + 8);
  v26 = a12;
  v21 = GSeconds;
  v22 = *(float *)(this + 28);
  v18 = *v17;
  v19 = sub_10003418(*v17, *(_DWORD *)(*v17 + 4), v20);
  sub_10003C38(1);
  *(_DWORD *)(v18 + 4) = v19;
  **(_DWORD **)(v19 + 4) = v19;
  LOBYTE(v27) = 0;
  std::string::~string(v20);
  v27 = -1;
  std::string::~string(&a2);
}
