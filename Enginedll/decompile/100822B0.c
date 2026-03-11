/*
 * func-name: ?CheckLights@Editor@@IAEPAVActor@@PAVWorld@@AAVVector@@1@Z
 * func-address: 0x100822b0
 * callers: 0x10085cc0
 * callees: 0x10001370, 0x1007fa00
 */

struct Actor *__thiscall Editor::CheckLights(Editor *this, struct World *a2, struct Vector *a3, struct Vector *a4)
{
  double v4; // st7
  unsigned int i; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  int v14; // ecx
  float v16[4]; // [esp-30h] [ebp-64h] BYREF
  char v17; // [esp-20h] [ebp-54h]
  int v18; // [esp-1Ch] [ebp-50h]
  int v19; // [esp-18h] [ebp-4Ch]
  char v20; // [esp-14h] [ebp-48h]
  int v21; // [esp-10h] [ebp-44h]
  int v22; // [esp-Ch] [ebp-40h]
  struct Vector *v23; // [esp-8h] [ebp-3Ch]
  struct Vector *v24; // [esp-4h] [ebp-38h]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+18h] [ebp-1Ch]
  float v28[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v29[3]; // [esp+28h] [ebp-Ch] BYREF

  v4 = 0.25;
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)a2 + 810);
    if ( !v6 || i >= (*((_DWORD *)a2 + 811) - v6) >> 2 )
      return 0;
    v7 = *((_DWORD *)a2 + 810);
    if ( !*(_BYTE *)(*(_DWORD *)(v7 + 4 * i) + 817) )
    {
      if ( !v7 || i >= (*((_DWORD *)a2 + 811) - v7) >> 2 )
      {
        invalid_parameter_noinfo();
        v4 = 0.25;
      }
      v8 = *((_DWORD *)a2 + 810);
      if ( !*(_BYTE *)(*(_DWORD *)(v8 + 4 * i) + 816) )
      {
        if ( !v8 || i >= (*((_DWORD *)a2 + 811) - v8) >> 2 )
        {
          invalid_parameter_noinfo();
          v4 = 0.25;
        }
        v9 = *((_DWORD *)a2 + 810);
        if ( *(_BYTE *)(*(_DWORD *)(v9 + 4 * i) + 442) )
          break;
      }
    }
LABEL_18:
    ;
  }
  if ( !v9 || i >= (*((_DWORD *)a2 + 811) - v9) >> 2 )
  {
    invalid_parameter_noinfo();
    v4 = 0.25;
  }
  v10 = *(float **)(*((_DWORD *)a2 + 810) + 4 * i);
  v11 = v10[278];
  v12 = v10[279];
  v13 = v10[280];
  v25 = v11;
  v26 = v12;
  v27 = v13;
  v24 = a4;
  v28[0] = v11 + v4;
  v23 = a3;
  v28[1] = v12 + v4;
  v28[2] = v13 + v4;
  v29[0] = v11 - v4;
  v29[1] = v12 - v4;
  v29[2] = v13 - v4;
  sub_10001370(v16, v29, v28);
  if ( !Editor::CheckBox(
          SLOBYTE(v16[0]),
          SLODWORD(v16[1]),
          SLODWORD(v16[2]),
          SLODWORD(v16[3]),
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          *(float *)&v23,
          *(float *)&v24) )
  {
    v4 = 0.25;
    goto LABEL_18;
  }
  v14 = *((_DWORD *)a2 + 810);
  if ( !v14 || i >= (*((_DWORD *)a2 + 811) - v14) >> 2 )
    invalid_parameter_noinfo();
  return *(struct Actor **)(*((_DWORD *)a2 + 810) + 4 * i);
}
